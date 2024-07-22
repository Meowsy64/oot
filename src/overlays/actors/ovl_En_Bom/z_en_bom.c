/*
 * File: z_en_bom.c
 * Overlay: ovl_En_Bom
 * Description: Bomb
 */

#include "z_en_bom.h"
#include "z64math.h"
#include "overlays/effects/ovl_Effect_Ss_Dead_Sound/z_eff_ss_dead_sound.h"
#include "assets/objects/gameplay_keep/gameplay_keep.h"

#define FLAGS (ACTOR_FLAG_4 | ACTOR_FLAG_5)

#define NA_SE_IT_BIG_BOMB_EXPLOSION NA_SE_IT_BOMB_EXPLOSION

void EnBom_Init(Actor* thisx, PlayState* play);
void EnBom_Destroy(Actor* thisx, PlayState* play);
void EnBom_Update(Actor* thisx, PlayState* play2);
void EnBom_Draw(Actor* thisx, PlayState* play);

void EnBom_Move(EnBom* this, PlayState* play);
void EnBom_WaitForRelease(EnBom* this, PlayState* play);

void func_80872648(PlayState* play, Vec3f* arg1);
void func_808726DC(PlayState* play, Vec3f* arg1, Vec3f* arg2, Vec3f* arg3, s32 arg4);
void EnBom_DrawKeg(PlayState* play, s32 arg1);

typedef struct {
    /* 0x00 */ Vec3f pos;
    /* 0x0C */ Vec3f velocity;
    /* 0x18 */ s16 rotY;
    /* 0x1A */ s16 rotX;
} PowderKegFuseSegment; // size = 0x1C

PowderKegFuseSegment sPowderKegFuseSegments[16];

ActorInit En_Bom_InitVars = {
    /**/ ACTOR_EN_BOM,
    /**/ ACTORCAT_EXPLOSIVE,
    /**/ FLAGS,
    /**/ OBJECT_GAMEPLAY_KEEP,
    /**/ sizeof(EnBom),
    /**/ EnBom_Init,
    /**/ EnBom_Destroy,
    /**/ EnBom_Update,
    /**/ EnBom_Draw,
};

static f32 enBomScales[] = { 0.01f, 0.03f };

static ColliderCylinderInit sCylinderInit = {
    {
        COLTYPE_HIT0,
        AT_NONE,
        AC_ON | AC_TYPE_PLAYER | AC_TYPE_OTHER,
        OC1_ON | OC1_TYPE_ALL,
        OC2_TYPE_2,
        COLSHAPE_CYLINDER,
    },
    {
        ELEMTYPE_UNK2,
        { 0x00000000, 0x00, 0x00 },
        { 0x0003F828, 0x00, 0x00 },
        ATELEM_NONE,
        ACELEM_ON,
        OCELEM_ON,
    },
    { 6, 11, 14, { 0, 0, 0 } },
};

static ColliderJntSphElementInit sJntSphElementsInit[1] = {
    {
        {
            ELEMTYPE_UNK0,
            { 0x00000008, 0x00, 0x08 },
            { 0x00000000, 0x00, 0x00 },
            ATELEM_ON | ATELEM_SFX_NONE,
            ACELEM_NONE,
            OCELEM_NONE,
        },
        { 0, { { 0, 0, 0 }, 0 }, 100 },
    },
};

static ColliderJntSphInit sJntSphInit = {
    {
        COLTYPE_HIT0,
        AT_ON | AT_TYPE_ALL,
        AC_NONE,
        OC1_NONE,
        OC2_NONE,
        COLSHAPE_JNTSPH,
    },
    1,
    sJntSphElementsInit,
};

static InitChainEntry sInitChain[] = {
    ICHAIN_VEC3F(scale, 0, ICHAIN_CONTINUE),
    ICHAIN_F32(targetArrowOffset, 2000, ICHAIN_CONTINUE),
    ICHAIN_F32_DIV1000(gravity, -4000, ICHAIN_STOP),
};

void EnBom_SetupAction(EnBom* this, EnBomActionFunc actionFunc) {
    this->actionFunc = actionFunc;
}

void EnBom_Init(Actor* thisx, PlayState* play) {
    EnBom* this = (EnBom*)thisx;

    Actor_ProcessInitChain(thisx, sInitChain);
    ActorShape_Init(&thisx->shape, 700.0f, ActorShadow_DrawCircle, 16.0f);
    this->isPowderKeg = ENBOM_GET_1(&this->actor);
    thisx->colChkInfo.mass = 200;
    thisx->colChkInfo.cylRadius = 5;
    thisx->colChkInfo.cylHeight = 10;
    this->timer = (!this->isPowderKeg) ? 70 : 200;
    this->flashSpeedScale = 7;
    Collider_InitCylinder(play, &this->bombCollider);
    Collider_InitJntSph(play, &this->explosionCollider);
    Collider_SetCylinder(play, &this->bombCollider, thisx, &sCylinderInit);
    Collider_SetJntSph(play, &this->explosionCollider, thisx, &sJntSphInit, &this->explosionColliderItems[0]);
    this->explosionColliderItems[0].base.atDmgInfo.damage += (thisx->shape.rot.z & 0xFF00) >> 8;
    if (!this->isPowderKeg) {
        this->bombCollider.dim.radius = 6;
        this->bombCollider.dim.height = 11;
    } else {
        this->bombCollider.dim.radius = 20;
        this->bombCollider.dim.height = 36;
        func_80872648(play, &this->actor.world.pos);
    }

    thisx->shape.rot.z &= 0xFF;
    if (thisx->shape.rot.z & 0x80) {
        thisx->shape.rot.z |= 0xFF00;
    }

    EnBom_SetupAction(this, EnBom_Move);
}

void EnBom_Destroy(Actor* thisx, PlayState* play) {
    EnBom* this = (EnBom*)thisx;

    Collider_DestroyJntSph(play, &this->explosionCollider);
    Collider_DestroyCylinder(play, &this->bombCollider);
}

void EnBom_Move(EnBom* this, PlayState* play) {
    // if bomb has a parent actor, the bomb hasnt been released yet
    if (Actor_HasParent(&this->actor, play)) {
        EnBom_SetupAction(this, EnBom_WaitForRelease);
        this->actor.room = -1;
        return;
    }

    if ((this->actor.velocity.y > 0.0f) && (this->actor.bgCheckFlags & BGCHECKFLAG_CEILING)) {
        this->actor.velocity.y = -this->actor.velocity.y;
    }

    // rebound bomb off the wall it hits
    if ((this->actor.speed != 0.0f) && (this->actor.bgCheckFlags & BGCHECKFLAG_WALL)) {
        s16 yawDiff = this->actor.wallYaw - this->actor.world.rot.y;
        if (ABS(yawDiff) > 0x4000) {
            this->actor.world.rot.y = ((this->actor.wallYaw - this->actor.world.rot.y) + this->actor.wallYaw) - 0x8000;
        }
        Actor_PlaySfx(&this->actor, this->isPowderKeg ? NA_SE_EV_PUT_DOWN_WOODBOX : NA_SE_EV_BOMB_BOUND);
        Actor_MoveXZGravity(&this->actor);
        this->actor.speed *= 0.7f;
        this->actor.bgCheckFlags &= ~BGCHECKFLAG_WALL;
    }

    if (!(this->actor.bgCheckFlags & BGCHECKFLAG_GROUND)) {
        Math_StepToF(&this->actor.speed, 0.0f, 0.08f);
    } else {
        Math_StepToF(&this->actor.speed, 0.0f, 1.0f);
        if ((this->actor.bgCheckFlags & BGCHECKFLAG_GROUND_TOUCH) && (this->actor.velocity.y < -3.0f)) {
            func_8002F850(play, &this->actor);
            this->actor.velocity.y *= -0.3f;
            this->actor.bgCheckFlags &= ~BGCHECKFLAG_GROUND_TOUCH;
        } else if (this->timer >= 4) {
            Actor_OfferCarry(&this->actor, play);
        }
    }

    Actor_MoveXZGravity(&this->actor);
}

void EnBom_WaitForRelease(EnBom* this, PlayState* play) {
    // if parent is NULL bomb has been released
    if (Actor_HasNoParent(&this->actor, play)) {
        EnBom_SetupAction(this, EnBom_Move);
        EnBom_Move(this, play);
    }
}

void EnBom_Explode(EnBom* this, PlayState* play) {
    Player* player;

    if (this->explosionCollider.elements[0].dim.modelSphere.radius == 0) {
        this->actor.flags |= ACTOR_FLAG_5;
        Rumble_Request(this->actor.xzDistToPlayer, 255, 20, 150);
    }

    this->explosionCollider.elements[0].dim.worldSphere.radius += this->actor.shape.rot.z + 8;

    if (this->actor.params == BOMB_EXPLOSION) {
        CollisionCheck_SetAT(play, &play->colChkCtx, &this->explosionCollider.base);
    }

    if (play->envCtx.adjLight1Color[0] != 0) {
        play->envCtx.adjLight1Color[0] -= 25;
    }

    if (play->envCtx.adjLight1Color[1] != 0) {
        play->envCtx.adjLight1Color[1] -= 25;
    }

    if (play->envCtx.adjLight1Color[2] != 0) {
        play->envCtx.adjLight1Color[2] -= 25;
    }

    if (play->envCtx.adjAmbientColor[0] != 0) {
        play->envCtx.adjAmbientColor[0] -= 25;
    }

    if (play->envCtx.adjAmbientColor[1] != 0) {
        play->envCtx.adjAmbientColor[1] -= 25;
    }

    if (play->envCtx.adjAmbientColor[2] != 0) {
        play->envCtx.adjAmbientColor[2] -= 25;
    }

    if (this->timer == 0) {
        player = GET_PLAYER(play);

        if ((player->stateFlags1 & PLAYER_STATE1_11) && (player->heldActor == &this->actor)) {
            player->actor.child = NULL;
            player->heldActor = NULL;
            player->interactRangeActor = NULL;
            player->stateFlags1 &= ~PLAYER_STATE1_11;
        }

        Actor_Kill(&this->actor);
    }
}

void EnBom_Update(Actor* thisx, PlayState* play2) {
    Vec3f effVelocity = { 0.0f, 0.0f, 0.0f };
    Vec3f bomb2Accel = { 0.0f, 0.1f, 0.0f };
    Vec3f effAccel = { 0.0f, 0.0f, 0.0f };
    Vec3f effPos;
    Vec3f dustAccel = { 0.0f, 0.6f, 0.0f };
    Color_RGBA8 dustColor = { 255, 255, 255, 255 };
    s32 pad;
    PlayState* play = play2;
    EnBom* this = (EnBom*)thisx;

    thisx->gravity = -1.2f;

    if (this->timer != 0) {
        this->timer--;
    }

    if ((!this->isPowderKeg && (this->timer == 67)) || (this->isPowderKeg && (this->timer <= 2400))) {
        Actor_PlaySfx(thisx, NA_SE_PL_TAKE_OUT_SHIELD);
        Actor_SetScale(thisx, enBomScales[this->isPowderKeg]);
    }

    if ((thisx->xzDistToPlayer >= 20.0f) || (ABS(thisx->yDistToPlayer) >= 80.0f)) {
        this->colliderSetOC = true;
    }

    this->actionFunc(this, play);

    Actor_UpdateBgCheckInfo(play, thisx, 5.0f, 10.0f, 15.0f,
                            UPDBGCHECKINFO_FLAG_0 | UPDBGCHECKINFO_FLAG_1 | UPDBGCHECKINFO_FLAG_2 |
                                UPDBGCHECKINFO_FLAG_3 | UPDBGCHECKINFO_FLAG_4);

    if (thisx->params == BOMB_BODY) {
        if (this->timer < 63) {
            dustAccel.y = 0.2f;

            // spawn spark effect on even frames
            effPos = thisx->world.pos;
            effPos.y += 17.0f;
            if ((play->gameplayFrames % 2) == 0) {
                EffectSsGSpk_SpawnFuse(play, thisx, &effPos, &effVelocity, &effAccel);
            }

            Actor_PlaySfx(thisx, NA_SE_IT_BOMB_IGNIT - SFX_FLAG);

            effPos.y += 3.0f;
            func_8002829C(play, &effPos, &effVelocity, &dustAccel, &dustColor, &dustColor, 50, 5);
        }

        if ((this->bombCollider.base.acFlags & AC_HIT) || ((this->bombCollider.base.ocFlags1 & OC1_HIT) &&
                                                           (this->bombCollider.base.oc->category == ACTORCAT_ENEMY))) {
            this->timer = 0;
            thisx->shape.rot.z = 0;
        } else {
            // if a lit stick touches the bomb, set timer to 100
            // these bombs never have a timer over 70, so this isn't used
            if ((this->timer > 100) && Player_IsBurningStickInRange(play, &thisx->world.pos, 30.0f, 50.0f)) {
                this->timer = 100;
            }
        }

        dustAccel.y = 0.2f;
        effPos = thisx->world.pos;
        effPos.y += 10.0f;

        // double bomb flash speed and adjust red color at certain times during the countdown
        if ((this->timer == 3) || (this->timer == 20) || (this->timer == 40)) {
            thisx->shape.rot.z = 0;
            this->flashSpeedScale >>= 1;
        }

        if ((this->timer < 100) && ((this->timer & (this->flashSpeedScale + 1)) != 0)) {
            Math_SmoothStepToF(&this->flashIntensity, 140.0f, 1.0f, 140.0f / this->flashSpeedScale, 0.0f);
        } else {
            Math_SmoothStepToF(&this->flashIntensity, 0.0f, 1.0f, 140.0f / this->flashSpeedScale, 0.0f);
        }

        if (this->timer < 3) {
            Actor_SetScale(thisx, thisx->scale.x + 0.002f);
        }

        if (this->timer == 0) {
            effPos = thisx->world.pos;

            effPos.y += 10.0f;
            if (Actor_HasParent(thisx, play)) {
                effPos.y += 30.0f;
            }

            EffectSsBomb2_SpawnLayered(play, &effPos, &effVelocity, &bomb2Accel, 100, (thisx->shape.rot.z * 6) + 19);

            effPos.y = thisx->floorHeight;
            if (thisx->floorHeight > BGCHECK_Y_MIN) {
                EffectSsBlast_SpawnWhiteShockwave(play, &effPos, &effVelocity, &effAccel);
            }

            if (this->isPowderKeg) {
                Actor_PlaySfx(thisx, NA_SE_IT_BIG_BOMB_EXPLOSION);
            } else {
                Actor_PlaySfx(thisx, NA_SE_IT_BOMB_EXPLOSION);
            }

            play->envCtx.adjLight1Color[0] = play->envCtx.adjLight1Color[1] = play->envCtx.adjLight1Color[2] = 250;

            play->envCtx.adjAmbientColor[0] = play->envCtx.adjAmbientColor[1] = play->envCtx.adjAmbientColor[2] = 250;

            Camera_RequestQuake(&play->mainCamera, 2, 11, 8);
            thisx->params = BOMB_EXPLOSION;
            this->timer = 10;
            thisx->flags |= ACTOR_FLAG_5;
            this->actionFunc = EnBom_Explode;
        }
    }

    Actor_SetFocus(thisx, 20.0f);

    if (thisx->params <= BOMB_BODY) {
        Collider_UpdateCylinder(thisx, &this->bombCollider);

        // if link is not holding the bomb anymore and conditions for OC are met, subscribe to OC
        if (!Actor_HasParent(thisx, play) && this->colliderSetOC) {
            CollisionCheck_SetOC(play, &play->colChkCtx, &this->bombCollider.base);
        }

        CollisionCheck_SetAC(play, &play->colChkCtx, &this->bombCollider.base);
    }

    if ((thisx->scale.x >= enBomScales[this->isPowderKeg]) && (thisx->params != BOMB_EXPLOSION)) {
        if (thisx->depthInWater >= 20.0f) {
            EffectSsDeadSound_SpawnStationary(play, &thisx->projectedPos, NA_SE_IT_BOMB_UNEXPLOSION, true,
                                              DEADSOUND_REPEAT_MODE_OFF, 10);
            Actor_Kill(thisx);
            return;
        }
        if (thisx->bgCheckFlags & BGCHECKFLAG_WATER_TOUCH) {
            thisx->bgCheckFlags &= ~BGCHECKFLAG_WATER_TOUCH;
            Actor_PlaySfx(thisx, NA_SE_EV_BOMB_DROP_WATER);
        }
    }
}

static Vec3f D_80872EE0 = { 0.0f, 800.0f, 0.0f };
static Vec3f D_80872EEC = { -750.0f, 0.0f, 0.0f };
static Vec3f D_80872EF8 = { -800.0f, 0.0f, 0.0f };
static Vec3f D_80872F04 = { 0.0f, 0.0f, 0.0f };

#include "assets/overlays/ovl_En_Bom/ovl_En_Bom.c"

void EnBom_Draw(Actor* thisx, PlayState* play) {
    s32 pad;
    EnBom* this = (EnBom*)thisx;

    OPEN_DISPS(play->state.gfxCtx, "../z_en_bom.c", 913);

    if (thisx->params == BOMB_BODY) {
        Gfx_SetupDL_25Opa(play->state.gfxCtx);
        Collider_UpdateSpheres(0, &this->explosionCollider);
        
        if (!this->isPowderKeg) {
            Matrix_ReplaceRotation(&play->billboardMtxF);
            func_8002EBCC(thisx, play, 0);

            gSPMatrix(POLY_OPA_DISP++, MATRIX_NEW(play->state.gfxCtx, "../z_en_bom.c", 928),
                    G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW);
            gSPDisplayList(POLY_OPA_DISP++, gBombCapDL);
            Matrix_RotateZYX(0x4000, 0, 0, MTXMODE_APPLY);
            gSPMatrix(POLY_OPA_DISP++, MATRIX_NEW(play->state.gfxCtx, "../z_en_bom.c", 934),
                    G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW);
            gDPPipeSync(POLY_OPA_DISP++);
            gDPSetEnvColor(POLY_OPA_DISP++, (s16)this->flashIntensity, 0, 40, 255);
            gDPSetPrimColor(POLY_OPA_DISP++, 0, 0, (s16)this->flashIntensity, 0, 40, 255);
            gSPDisplayList(POLY_OPA_DISP++, gBombBodyDL);
        } else {
            Vec3f sp58;
            Vec3f sp4C;

            /*if (this->unk_1FA != 0) {
                s16 sp4A = this->actor.world.rot.y - this->actor.shape.rot.y;
                f32 sp44 = (1000.0f / Math_CosS(ABS_ALT((s16)(this->unk_1FA % 10922)) - 0x1555)) + -1000.0f;

                Matrix_RotateYS(sp4A, MTXMODE_APPLY);
                Matrix_Translate(0.0f, sp44, 0.0f, MTXMODE_APPLY);
                Matrix_RotateXS(this->unk_1FA, MTXMODE_APPLY);
                Matrix_RotateYS(-sp4A, MTXMODE_APPLY);
            }*/

            Matrix_MultVec3f(&D_80872EEC, &this->actor.home.pos);
            Matrix_MultVec3f(&D_80872EF8, &sp58);
            Matrix_MultVec3f(&D_80872F04, &sp4C);

            gDPSetEnvColor(POLY_OPA_DISP++, 255, 255, 255, 255);
            gSPMatrix(POLY_OPA_DISP++, MATRIX_NEW(play->state.gfxCtx, __FILE__, __LINE__), G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW);
            gSPDisplayList(POLY_OPA_DISP++, gPowderKegBarrelDL);
            gSPDisplayList(POLY_OPA_DISP++, gPowderKegGoronSkullDL);

            func_808726DC(play, &this->actor.home.pos, &sp58, &sp4C, this->timer);
            EnBom_DrawKeg(play, this->timer);
        }
    }

    CLOSE_DISPS(play->state.gfxCtx, "../z_en_bom.c", 951);
}

Vec3f gZeroVec3f = { 0.0f, 0.0f, 0.0f };

void func_80872648(PlayState* play, Vec3f* arg1) {
    PowderKegFuseSegment* fuseSegmentPtr = &sPowderKegFuseSegments[0];
    s32 i;

    for (i = 0; i < ARRAY_COUNT(sPowderKegFuseSegments); i++, fuseSegmentPtr++) {
        Math_Vec3f_Copy(&fuseSegmentPtr->pos, arg1);
        Math_Vec3f_Copy(&fuseSegmentPtr->velocity, &gZeroVec3f);
        fuseSegmentPtr->rotY = 0;
        fuseSegmentPtr->rotX = 0x4000;
    }
}

#define BINANG_SUB(a, b) ((s16)(a - b))
#define BINANG_ADD(a, b) ((s16)(a + b))

void func_808726DC(PlayState* play, Vec3f* arg1, Vec3f* arg2, Vec3f* arg3, s32 arg4) {
    s32 i;
    f32 temp_f20;
    Vec3f spCC;
    Vec3f spC0;
    PowderKegFuseSegment* fuseSegmentPtr = &sPowderKegFuseSegments[0];
    PowderKegFuseSegment* fuseSegmentPtr2 = &sPowderKegFuseSegments[1];
    f32 temp_f26 = Math_Vec3f_DistXYZ(arg3, arg1);
    s32 spB0;
    f32 temp_f2;
    f32 distXZ;

    Math_Vec3f_Copy(&fuseSegmentPtr->pos, arg1);
    Math_Vec3f_Diff(arg2, arg1, &spCC);

    fuseSegmentPtr->rotY = Math_Atan2S(spCC.z, spCC.x);
    distXZ = sqrtf(SQXZ(spCC));
    fuseSegmentPtr->rotX = Math_Atan2S(distXZ, spCC.y);

    spB0 = (arg4 / 240) + 1;

    for (i = 0; i < spB0; i++, fuseSegmentPtr++, fuseSegmentPtr2++, arg4 -= 240) {
        f32 phi_f22;
        CollisionPoly* spA0;
        s32 sp9C;
        Vec3f sp90;

        if (arg4 >= 240) {
            phi_f22 = 8.0f;
        } else {
            phi_f22 = (arg4 % 240) * (1.0f / 240) * 8.0f;
        }

        Math_Vec3f_Sum(&fuseSegmentPtr2->pos, &fuseSegmentPtr2->velocity, &fuseSegmentPtr2->pos);
        temp_f20 = Math_Vec3f_DistXYZAndStoreDiff(arg3, &fuseSegmentPtr2->pos, &spCC);
        if (temp_f20 < temp_f26) {
            if (temp_f20 == 0.0f) {
                spCC.x = 0.0f;
                spCC.y = temp_f26;
                spCC.z = 0.0f;
            } else {
                temp_f20 = temp_f26 / temp_f20;
                spCC.x *= temp_f20;
                spCC.y *= temp_f20;
                spCC.z *= temp_f20;
            }
            Math_Vec3f_Sum(arg3, &spCC, &fuseSegmentPtr2->pos);
        }

        if (Math_Vec3f_DistXYZAndStoreDiff(&fuseSegmentPtr->pos, &fuseSegmentPtr2->pos, &spCC) == 0.0f) {
            spCC.x = 0.0f;
            spCC.y = phi_f22;
            spCC.z = 0.0f;
        }

        fuseSegmentPtr2->rotY = Math_Atan2S(spCC.z, spCC.x);
        distXZ = sqrtf(SQXZ(spCC));
        fuseSegmentPtr2->rotX = Math_Atan2S(distXZ, spCC.y);

        fuseSegmentPtr2->rotY =
            (s16)CLAMP(BINANG_SUB(fuseSegmentPtr2->rotY, fuseSegmentPtr->rotY), -8000, 8000) + fuseSegmentPtr->rotY;
        fuseSegmentPtr2->rotX =
            (s16)CLAMP(BINANG_SUB(fuseSegmentPtr2->rotX, fuseSegmentPtr->rotX), -8000, 8000) + fuseSegmentPtr->rotX;

        temp_f20 = Math_CosS(fuseSegmentPtr2->rotX) * phi_f22;
        spC0.x = Math_SinS(fuseSegmentPtr2->rotY) * temp_f20;
        spC0.z = Math_CosS(fuseSegmentPtr2->rotY) * temp_f20;
        spC0.y = Math_SinS(fuseSegmentPtr2->rotX) * phi_f22;

        Math_Vec3f_Sum(&fuseSegmentPtr->pos, &spC0, &fuseSegmentPtr2->pos);
        Math_Vec3f_Copy(&sp90, &fuseSegmentPtr2->pos);

        sp90.y += 50.0f;

        temp_f2 = BgCheck_EntityRaycastDown3(&play->colCtx, &spA0, &sp9C, &sp90) - fuseSegmentPtr2->pos.y;
        if (temp_f2 >= 0.0f) {
            spC0.y += temp_f2;
            if (phi_f22 < spC0.y) {
                spC0.y = phi_f22;
                temp_f2 = 0.0f;
            } else {
                temp_f2 = sqrtf(SQ(phi_f22) - SQ(spC0.y));
            }

            if (temp_f20 == 0.0f) {
                spC0.x = temp_f2;
            } else {
                temp_f2 /= temp_f20;
                spC0.x *= temp_f2;
                spC0.z *= temp_f2;
            }

            Math_Vec3f_Sum(&fuseSegmentPtr->pos, &spC0, &fuseSegmentPtr2->pos);
            Math_Vec3f_Copy(&fuseSegmentPtr2->velocity, &gZeroVec3f);
        }

        fuseSegmentPtr2->velocity.y += -1.0f;
        if (fuseSegmentPtr2->velocity.y < -10.0f) {
            fuseSegmentPtr2->velocity.y = -10.0f;
        }
    }

    Math_Vec3f_Copy(arg1, &fuseSegmentPtr->pos);
}

void EnBom_DrawKeg(PlayState* play, s32 arg1) {
    s32 temp_s5;
    s32 i;
    PowderKegFuseSegment* fuseSegmentPtr = &sPowderKegFuseSegments[0];
    PowderKegFuseSegment* fuseSegmentPtr2;

    OPEN_DISPS(play->state.gfxCtx, __FILE__, __LINE__);

    Matrix_Translate(fuseSegmentPtr->pos.x, fuseSegmentPtr->pos.y, fuseSegmentPtr->pos.z, MTXMODE_NEW);
    Matrix_RotateZYX(fuseSegmentPtr->rotX, fuseSegmentPtr->rotY, 0, MTXMODE_APPLY);
    Matrix_Scale(0.01f, 0.01f, 0.01f, MTXMODE_APPLY);

    gSPMatrix(POLY_OPA_DISP++, MATRIX_NEW(play->state.gfxCtx, __FILE__, __LINE__), G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW);
    gSPDisplayList(POLY_OPA_DISP++, gPowderKegFuseMaterialDL);

    temp_s5 = (arg1 / 240) + 1;
    fuseSegmentPtr2 = &sPowderKegFuseSegments[1];

    for (i = 1; i < temp_s5; i++, fuseSegmentPtr2++) {
        Matrix_Translate(fuseSegmentPtr2->pos.x, fuseSegmentPtr2->pos.y, fuseSegmentPtr2->pos.z, MTXMODE_NEW);
        Matrix_RotateZYX(fuseSegmentPtr2->rotX, fuseSegmentPtr2->rotY, 0, MTXMODE_APPLY);
        Matrix_Scale(0.01f, 0.01f, 0.01f, MTXMODE_APPLY);

        gSPMatrix(POLY_OPA_DISP++, MATRIX_NEW(play->state.gfxCtx, __FILE__, __LINE__), G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW);

        if ((i % 2) == 0) {
            gSPDisplayList(POLY_OPA_DISP++, gPowderKegFuseModel1DL);
        } else {
            gSPDisplayList(POLY_OPA_DISP++, gPowderKegFuseModel2DL);
        }
    }

    CLOSE_DISPS(play->state.gfxCtx, __FILE__, __LINE__);
}

