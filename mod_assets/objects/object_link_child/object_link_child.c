#include "ultra64.h"
#include "z64.h"
#include "macros.h"
#include "object_link_child.h"
#include "assets/misc/link_animetion/link_animetion.h"
#include "assets/objects/gameplay_keep/gameplay_keep.h"
static Vtx gLinkChildVtx_019E08[35];
static Vtx gLinkChildVtx_01A428[39];
static Vtx gLinkChildVtx_01AA98[40];
static Vtx gLinkChildVtx_01EB38[39];
static Vtx gLinkChildVtx_01F2B8[39];
static Vtx gLinkChildVtx_01FA28[62];

u64 gLinkChildEyesOpenTex[] = {
#include "assets/objects/object_link_child/eyes_open.ci8.inc.c"
};

u64 gLinkChildEyesHalfTex[] = {
#include "assets/objects/object_link_child/eyes_half.ci8.inc.c"
};

u64 gLinkChildEyesClosedfTex[] = {
#include "assets/objects/object_link_child/eyes_closed.ci8.inc.c"
};

u64 gLinkChildEyesLeftTex[] = {
#include "assets/objects/object_link_child/eyes_left.ci8.inc.c"
};

u64 gLinkChildEyesRightTex[] = {
#include "assets/objects/object_link_child/eyes_right.ci8.inc.c"
};

u64 gLinkChildEyesWideTex[] = {
#include "assets/objects/object_link_child/eyes_wide.ci8.inc.c"
};

u64 gLinkChildEyesDownTex[] = {
#include "assets/objects/object_link_child/eyes_down.ci8.inc.c"
};

u64 gLinkChildEyesWincingTex[] = {
#include "assets/objects/object_link_child/eyes_wincing.ci8.inc.c"
};

u64 gLinkChildMouthClosedTex[] = {
#include "assets/objects/object_link_child/mouth_closed.ci8.inc.c"
};

u64 gLinkChildMouthHalfTex[] = {
#include "assets/objects/object_link_child/mouth_half.ci8.inc.c"
};

u64 gLinkChildMouthOpenTex[] = {
#include "assets/objects/object_link_child/mouth_open.ci8.inc.c"
};

u64 gLinkChildMouthSmileTex[] = {
#include "assets/objects/object_link_child/mouth_smile.ci8.inc.c"
};

u64 gLinkChildNoseTex[] = {
#include "assets/objects/object_link_child/nose.ci8.inc.c"
};

u64 gLinkChildEarTex[] = {
#include "assets/objects/object_link_child/ear.ci8.inc.c"
};

u64 gLinkChildBeltTLUT[] = {
#include "assets/objects/object_link_child/belt_tlut.rgba16.inc.c"
};

u64 gLinkChildSkinTLUT[] = {
#include "assets/objects/object_link_child/skin_tlut.rgba16.inc.c"
};

u64 gLinkChildLowerBootTex[] = {
#include "assets/objects/object_link_child/lower_boot.ci8.inc.c"
};

u64 gLinkChildBootTex[] = {
#include "assets/objects/object_link_child/boot.ci8.inc.c"
};

u64 gLinkChildWaistTex[] = {
#include "assets/objects/object_link_child/waist.i8.inc.c"
};

u64 gLinkChildBeltTex[] = {
#include "assets/objects/object_link_child/belt.ci8.inc.c"
};

u64 gLinkChildBeltClaspTex[] = {
#include "assets/objects/object_link_child/belt_clasp.ci8.inc.c"
};

u64 gLinkChildFairyOcarinaTex[] = {
#include "assets/objects/object_link_child/fairy_ocarina.rgba16.inc.c"
};

u64 gLinkChildGoronBraceletTex[] = {
#include "assets/objects/object_link_child/goron_bracelet.rgba16.inc.c"
};

u64 gLinkChildGoronSymbolTex[] = {
#include "assets/objects/object_link_child/goron_symbol.ia16.inc.c"
};

u64 gLinkChildDekuShieldBackTex[] = {
#include "assets/objects/object_link_child/deku_shield_back.rgba16.inc.c"
};

u64 gLinkChildDekuShieldFrontTex[] = {
#include "assets/objects/object_link_child/deku_shield_front.rgba16.inc.c"
};

u64 gLinkChildHylianShieldBackTex[] = {
#include "assets/objects/object_link_child/hylian_shield_back.rgba16.inc.c"
};

u64 gLinkChildSlingshotTex[] = {
#include "assets/objects/object_link_child/slingshot.rgba16.inc.c"
};

u64 gLinkChildSlingshotSeedTex[] = {
#include "assets/objects/object_link_child/slingshot_seed.rgba16.inc.c"
};

u64 gLinkChildHandTLUT[] = {
#include "assets/objects/object_link_child/hand_tlut.rgba16.inc.c"
};

u64 gLinkChildSwordsTLUT[] = {
#include "assets/objects/object_link_child/swords_tlut.rgba16.inc.c"
};

u8 object_link_child_unaccounted_00A110[] = {
    0x00, 0x00, 0x01, 0x01, 0x17, 0x0D, 0x95, 0xFF, 
};

u64 gLinkChildSwordTLUT[] = {
#include "assets/objects/object_link_child/sword_tlut.rgba16.inc.c"
};

u64 gLinkChildHandTex[] = {
#include "assets/objects/object_link_child/hand.ci8.inc.c"
};

u64 gLinkChildKokiriSwordSheathTex[] = {
#include "assets/objects/object_link_child/kokiri_sword_sheath.ci8.inc.c"
};

u64 gLinkChildSwordJewelTex[] = {
#include "assets/objects/object_link_child/sword_jewel.ci8.inc.c"
};

u64 gLinkChildMasterSwordPommelTex[] = {
#include "assets/objects/object_link_child/master_sword_pommel.ci8.inc.c"
};

u64 gLinkChildMasterSwordGuardTex[] = {
#include "assets/objects/object_link_child/master_sword_guard.ci8.inc.c"
};

u64 gLinkChildMasterSwordEmblemTex[] = {
#include "assets/objects/object_link_child/master_sword_emblem.ci8.inc.c"
};

Vtx object_link_childVtx_00ABF0[] = {
#include "assets/objects/object_link_child/object_link_childVtx_00ABF0.vtx.inc"
};

Gfx gLinkChildLeftHandNearDL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gLinkChildHandTex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadTLUT_pal256(gLinkChildHandTLUT),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(object_link_childVtx_00ABF0, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(2, 1, 4, 0, 5, 4, 1, 0),
    gsSP2Triangles(1, 0, 5, 0, 4, 5, 6, 0),
    gsSP2Triangles(2, 7, 3, 0, 3, 6, 5, 0),
    gsSP2Triangles(8, 9, 10, 0, 9, 11, 12, 0),
    gsSP2Triangles(12, 13, 14, 0, 8, 15, 11, 0),
    gsSP2Triangles(16, 17, 18, 0, 11, 9, 8, 0),
    gsSP2Triangles(19, 12, 11, 0, 20, 21, 22, 0),
    gsSP2Triangles(6, 7, 4, 0, 4, 7, 2, 0),
    gsSP2Triangles(3, 5, 0, 0, 23, 24, 25, 0),
    gsSP2Triangles(17, 26, 18, 0, 27, 28, 22, 0),
    gsSP2Triangles(12, 10, 9, 0, 15, 8, 14, 0),
    gsSP2Triangles(14, 13, 15, 0, 13, 29, 30, 0),
    gsSPVertex(&object_link_childVtx_00ABF0[31], 23, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 7, 6, 0),
    gsSP2Triangles(8, 10, 6, 0, 8, 11, 10, 0),
    gsSP2Triangles(12, 3, 5, 0, 1, 0, 13, 0),
    gsSP2Triangles(14, 13, 0, 0, 15, 4, 3, 0),
    gsSP2Triangles(16, 17, 14, 0, 15, 5, 4, 0),
    gsSP2Triangles(18, 19, 20, 0, 14, 17, 13, 0),
    gsSP2Triangles(19, 18, 21, 0, 15, 22, 5, 0),
    gsSPEndDisplayList(),
};

Gfx gLinkChildLeftFistNearDL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gLinkChildHandTex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadTLUT_pal256(gLinkChildHandTLUT),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&object_link_childVtx_00ABF0[54], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 7, 6, 0),
    gsSP2Triangles(10, 11, 12, 0, 13, 12, 11, 0),
    gsSP2Triangles(14, 15, 16, 0, 10, 17, 18, 0),
    gsSP2Triangles(2, 19, 0, 0, 20, 12, 13, 0),
    gsSP2Triangles(17, 12, 21, 0, 22, 17, 23, 0),
    gsSP2Triangles(23, 17, 21, 0, 24, 25, 6, 0),
    gsSP2Triangles(26, 27, 28, 0, 26, 28, 29, 0),
    gsSP2Triangles(20, 21, 12, 0, 12, 30, 10, 0),
    gsSP2Triangles(30, 17, 10, 0, 12, 17, 30, 0),
    gsSP2Triangles(8, 24, 6, 0, 31, 24, 8, 0),
    gsSPVertex(&object_link_childVtx_00ABF0[86], 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSPEndDisplayList(),
};

Gfx gLinkChildLeftFistAndKokiriSwordNearDL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gLinkChildHandTex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadTLUT_pal256(gLinkChildHandTLUT),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&object_link_childVtx_00ABF0[92], 19, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(4, 5, 6, 0, 7, 5, 4, 0),
    gsSP2Triangles(8, 9, 10, 0, 11, 10, 9, 0),
    gsSP2Triangles(11, 9, 0, 0, 8, 12, 13, 0),
    gsSP2Triangles(2, 11, 0, 0, 2, 10, 11, 0),
    gsSP2Triangles(12, 10, 14, 0, 15, 12, 16, 0),
    gsSP2Triangles(16, 12, 14, 0, 15, 16, 3, 0),
    gsSP2Triangles(16, 14, 2, 0, 16, 2, 3, 0),
    gsSP2Triangles(2, 14, 10, 0, 10, 17, 8, 0),
    gsSP2Triangles(17, 12, 8, 0, 10, 12, 17, 0),
    gsSP2Triangles(6, 18, 4, 0, 8, 15, 9, 0),
    gsSP2Triangles(13, 15, 8, 0, 12, 15, 13, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gLinkChildSwordJewelTex, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 16, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 5, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadTLUT_pal256(gLinkChildSwordTLUT),
    gsSPVertex(&object_link_childVtx_00ABF0[111], 31, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(3, 2, 4, 0, 2, 1, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 15, 16, 17, 0),
    gsSP2Triangles(18, 17, 19, 0, 16, 20, 21, 0),
    gsSP2Triangles(22, 23, 21, 0, 21, 23, 24, 0),
    gsSP2Triangles(16, 21, 17, 0, 11, 25, 26, 0),
    gsSP2Triangles(11, 26, 27, 0, 11, 27, 9, 0),
    gsSP2Triangles(19, 28, 29, 0, 30, 16, 29, 0),
    gsSP2Triangles(29, 16, 18, 0, 29, 18, 19, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0x07D0, 0x09C4, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gHilite1Tex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 16, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR |
                         G_TX_WRAP, 4, 4, G_TX_NOLOD, 15),
    gsSPSetGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&object_link_childVtx_00ABF0[142], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSPVertex(&object_link_childVtx_00ABF0[145], 27, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 15, 3, 5, 0),
    gsSP2Triangles(2, 1, 16, 0, 17, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 23, 7, 6, 0),
    gsSP1Triangle(24, 25, 26, 0),
    gsSPEndDisplayList(),
};

Gfx gLinkChildRightHandNearDL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gLinkChildHandTex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadTLUT_pal256(gLinkChildHandTLUT),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&object_link_childVtx_00ABF0[172], 31, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 5, 4, 0),
    gsSP2Triangles(10, 0, 2, 0, 8, 7, 11, 0),
    gsSP2Triangles(12, 10, 2, 0, 13, 6, 8, 0),
    gsSP2Triangles(6, 13, 14, 0, 0, 12, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 19, 16, 18, 0),
    gsSP2Triangles(19, 13, 20, 0, 18, 13, 19, 0),
    gsSP2Triangles(0, 10, 12, 0, 18, 14, 13, 0),
    gsSP2Triangles(13, 8, 20, 0, 19, 20, 5, 0),
    gsSP2Triangles(5, 9, 19, 0, 21, 4, 3, 0),
    gsSP2Triangles(17, 8, 11, 0, 20, 8, 17, 0),
    gsSP2Triangles(11, 22, 17, 0, 23, 24, 25, 0),
    gsSP2Triangles(26, 27, 28, 0, 28, 27, 29, 0),
    gsSP2Triangles(17, 22, 18, 0, 16, 3, 17, 0),
    gsSP2Triangles(9, 21, 16, 0, 20, 17, 3, 0),
    gsSP2Triangles(16, 19, 9, 0, 5, 20, 3, 0),
    gsSP2Triangles(3, 16, 21, 0, 4, 21, 9, 0),
    gsSP2Triangles(24, 29, 25, 0, 25, 27, 26, 0),
    gsSP2Triangles(29, 24, 28, 0, 24, 23, 30, 0),
    gsSP2Triangles(30, 28, 24, 0, 28, 30, 26, 0),
    gsSP2Triangles(25, 26, 23, 0, 26, 30, 23, 0),
    gsSPEndDisplayList(),
};

Gfx gLinkChildRightHandClosedNearDL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gLinkChildHandTex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadTLUT_pal256(gLinkChildHandTLUT),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&object_link_childVtx_00ABF0[203], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 8, 7, 9, 0),
    gsSP2Triangles(10, 11, 12, 0, 11, 10, 13, 0),
    gsSP2Triangles(14, 15, 16, 0, 17, 18, 12, 0),
    gsSP2Triangles(2, 19, 0, 0, 13, 10, 20, 0),
    gsSP2Triangles(21, 10, 18, 0, 22, 18, 23, 0),
    gsSP2Triangles(21, 18, 22, 0, 8, 24, 25, 0),
    gsSP2Triangles(26, 27, 28, 0, 29, 26, 28, 0),
    gsSP2Triangles(10, 21, 20, 0, 12, 30, 10, 0),
    gsSP2Triangles(12, 18, 30, 0, 30, 18, 10, 0),
    gsSP2Triangles(8, 25, 6, 0, 6, 25, 31, 0),
    gsSPVertex(&object_link_childVtx_00ABF0[235], 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSPEndDisplayList(),
};

Gfx gLinkChildRightFistAndDekuShieldNearDL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gLinkChildDekuShieldBackTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&object_link_childVtx_00ABF0[241], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(5, 4, 6, 0, 4, 0, 2, 0),
    gsSP2Triangles(2, 6, 4, 0, 1, 0, 7, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gLinkChildDekuShieldFrontTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, G_TX_NOMIRROR |
                         G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&object_link_childVtx_00ABF0[249], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 3, 5, 9, 0),
    gsSP2Triangles(10, 11, 12, 0, 13, 14, 15, 0),
    gsSP2Triangles(1, 0, 16, 0, 13, 15, 8, 0),
    gsSP2Triangles(17, 18, 19, 0, 19, 18, 20, 0),
    gsSP2Triangles(21, 8, 22, 0, 23, 24, 16, 0),
    gsSP2Triangles(16, 0, 23, 0, 25, 26, 27, 0),
    gsSP1Triangle(7, 28, 29, 0),
    gsSPVertex(&object_link_childVtx_00ABF0[279], 9, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(3, 2, 4, 0, 3, 4, 5, 0),
    gsSP1Triangle(6, 7, 8, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTextureBlock(gLinkChildHandTex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadTLUT_pal256(gLinkChildHandTLUT),
    gsSPVertex(&object_link_childVtx_00ABF0[288], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 8, 7, 9, 0),
    gsSP2Triangles(10, 11, 12, 0, 13, 14, 12, 0),
    gsSP2Triangles(15, 10, 16, 0, 17, 10, 14, 0),
    gsSP2Triangles(18, 14, 19, 0, 17, 14, 18, 0),
    gsSP2Triangles(8, 20, 21, 0, 22, 23, 24, 0),
    gsSP2Triangles(25, 22, 24, 0, 10, 17, 16, 0),
    gsSP2Triangles(12, 26, 10, 0, 12, 14, 26, 0),
    gsSP2Triangles(26, 14, 10, 0, 8, 21, 6, 0),
    gsSP2Triangles(6, 21, 27, 0, 27, 21, 28, 0),
    gsSP1Triangle(29, 30, 31, 0),
    gsSPEndDisplayList(),
};

Gfx gLinkChildLeftFistAndBoomerangNearDL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0x07D0, 0x09C4, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gHilite2Tex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR |
                         G_TX_WRAP, 5, 5, G_TX_NOLOD, 15),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsDPSetPrimColor(0, 0, 243, 0, 97, 255),
    gsSPVertex(&object_link_childVtx_00ABF0[320], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSPVertex(&object_link_childVtx_00ABF0[323], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 15, 16, 17, 0),
    gsSP2Triangles(18, 19, 20, 0, 21, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 27, 28, 29, 0),
    gsSPVertex(&object_link_childVtx_00ABF0[353], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsDPPipeSync(),
    gsSPTexture(0, 0, 0, G_TX_RENDERTILE, G_OFF),
    gsDPSetCombineLERP(SHADE, 0, PRIMITIVE, 0, 0, 0, 0, 1, 0, 0, 0, COMBINED, 0, 0, 0, COMBINED),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsDPSetPrimColor(0, 0, 255, 255, 0, 255),
    gsSPVertex(&object_link_childVtx_00ABF0[356], 15, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 1, 3, 0),
    gsSP2Triangles(2, 4, 0, 0, 5, 6, 7, 0),
    gsSP2Triangles(6, 5, 3, 0, 5, 7, 4, 0),
    gsSP2Triangles(6, 3, 1, 0, 4, 7, 0, 0),
    gsSP2Triangles(8, 9, 10, 0, 10, 9, 3, 0),
    gsSP2Triangles(10, 11, 8, 0, 12, 13, 8, 0),
    gsSP2Triangles(8, 13, 9, 0, 14, 13, 12, 0),
    gsSP2Triangles(14, 12, 11, 0, 12, 8, 11, 0),
    gsSP2Triangles(3, 9, 13, 0, 13, 14, 3, 0),
    gsSP2Triangles(6, 1, 0, 0, 7, 6, 0, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gLinkChildHandTex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadTLUT_pal256(gLinkChildHandTLUT),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&object_link_childVtx_00ABF0[371], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 7, 6, 0),
    gsSP2Triangles(10, 11, 12, 0, 13, 12, 11, 0),
    gsSP2Triangles(14, 15, 16, 0, 10, 17, 18, 0),
    gsSP2Triangles(2, 19, 0, 0, 20, 12, 13, 0),
    gsSP2Triangles(17, 12, 21, 0, 22, 17, 23, 0),
    gsSP2Triangles(23, 17, 21, 0, 24, 25, 6, 0),
    gsSP2Triangles(26, 27, 28, 0, 26, 28, 29, 0),
    gsSP2Triangles(20, 21, 12, 0, 12, 30, 10, 0),
    gsSP2Triangles(30, 17, 10, 0, 12, 17, 30, 0),
    gsSP2Triangles(8, 24, 6, 0, 31, 24, 8, 0),
    gsSPVertex(&object_link_childVtx_00ABF0[403], 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSPEndDisplayList(),
};

Gfx gLinkChildHylianShieldSwordAndSheathNearDL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gHylianShieldDesignTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&object_link_childVtx_00ABF0[409], 10, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 1, 4, 0),
    gsSP2Triangles(2, 1, 3, 0, 0, 2, 5, 0),
    gsSP2Triangles(0, 5, 6, 0, 5, 2, 3, 0),
    gsSP2Triangles(7, 0, 8, 0, 7, 8, 9, 0),
    gsSP2Triangles(8, 0, 6, 0, 0, 7, 1, 0),
    gsSP2Triangles(1, 7, 9, 0, 1, 9, 4, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gLinkChildHylianShieldBackTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 32, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 4, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&object_link_childVtx_00ABF0[419], 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(4, 2, 5, 0, 3, 5, 2, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTextureBlock(gLinkChildKokiriSwordSheathTex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR |
                         G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadTLUT_pal256(gLinkChildSwordsTLUT),
    gsSPVertex(&object_link_childVtx_00ABF0[425], 11, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 1, 4, 0),
    gsSP2Triangles(0, 5, 1, 0, 6, 0, 2, 0),
    gsSP2Triangles(6, 2, 7, 0, 7, 2, 3, 0),
    gsSP2Triangles(3, 2, 1, 0, 3, 4, 8, 0),
    gsSP2Triangles(9, 6, 7, 0, 0, 6, 9, 0),
    gsSP2Triangles(9, 7, 3, 0, 9, 3, 10, 0),
    gsSP2Triangles(10, 3, 8, 0, 0, 9, 8, 0),
    gsSP1Triangle(0, 8, 5, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gLinkChildSwordJewelTex, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 16, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 5, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadTLUT_pal256(gLinkChildSwordTLUT),
    gsSPVertex(&object_link_childVtx_00ABF0[436], 24, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 1, 3, 0),
    gsSP2Triangles(1, 4, 5, 0, 6, 7, 8, 0),
    gsSP2Triangles(9, 10, 11, 0, 12, 8, 7, 0),
    gsSP2Triangles(11, 13, 14, 0, 11, 14, 9, 0),
    gsSP2Triangles(15, 16, 17, 0, 18, 19, 17, 0),
    gsSP2Triangles(17, 19, 20, 0, 17, 20, 15, 0),
    gsSP2Triangles(20, 19, 21, 0, 20, 21, 15, 0),
    gsSP2Triangles(19, 18, 22, 0, 16, 15, 22, 0),
    gsSP2Triangles(22, 15, 21, 0, 19, 22, 21, 0),
    gsSP2Triangles(11, 23, 13, 0, 0, 4, 1, 0),
    gsSPEndDisplayList(),
};

Gfx gLinkChildHylianShieldAndSheathNearDL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gLinkChildKokiriSwordSheathTex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR |
                         G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadTLUT_pal256(gLinkChildSwordsTLUT),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&object_link_childVtx_00ABF0[460], 11, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 1, 4, 0),
    gsSP2Triangles(0, 5, 1, 0, 6, 0, 2, 0),
    gsSP2Triangles(6, 2, 7, 0, 7, 2, 3, 0),
    gsSP2Triangles(3, 2, 1, 0, 3, 4, 8, 0),
    gsSP2Triangles(9, 6, 7, 0, 0, 6, 9, 0),
    gsSP2Triangles(9, 7, 3, 0, 9, 3, 10, 0),
    gsSP2Triangles(10, 3, 8, 0, 0, 9, 8, 0),
    gsSP1Triangle(0, 8, 5, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0, 0, 0, G_TX_RENDERTILE, G_OFF),
    gsDPSetCombineLERP(0, 0, 0, PRIMITIVE, 0, 0, 0, 1, 0, 0, 0, COMBINED, 0, 0, 0, COMBINED),
    gsSPClearGeometryMode(G_LIGHTING),
    gsDPSetPrimColor(0, 0, 0, 0, 0, 255),
    gsSPVertex(&object_link_childVtx_00ABF0[471], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 1, 3, 0),
    gsDPPipeSync(),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gHylianShieldDesignTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsSPSetGeometryMode(G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&object_link_childVtx_00ABF0[475], 10, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 1, 4, 0),
    gsSP2Triangles(2, 1, 3, 0, 0, 2, 5, 0),
    gsSP2Triangles(0, 5, 6, 0, 5, 2, 3, 0),
    gsSP2Triangles(7, 0, 8, 0, 7, 8, 9, 0),
    gsSP2Triangles(8, 0, 6, 0, 0, 7, 1, 0),
    gsSP2Triangles(1, 7, 9, 0, 1, 9, 4, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gLinkChildHylianShieldBackTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 32, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 4, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&object_link_childVtx_00ABF0[485], 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(4, 2, 5, 0, 3, 5, 2, 0),
    gsSPEndDisplayList(),
};

Gfx gLinkChildDekuShieldSwordAndSheathNearDL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gLinkChildDekuShieldBackTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&object_link_childVtx_00ABF0[491], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(5, 4, 6, 0, 4, 0, 2, 0),
    gsSP2Triangles(2, 6, 4, 0, 1, 0, 7, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gLinkChildDekuShieldFrontTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, G_TX_NOMIRROR |
                         G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&object_link_childVtx_00ABF0[499], 24, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(4, 3, 6, 0, 7, 8, 9, 0),
    gsSP2Triangles(9, 8, 10, 0, 0, 2, 11, 0),
    gsSP2Triangles(12, 13, 5, 0, 5, 4, 12, 0),
    gsSP2Triangles(14, 15, 16, 0, 17, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(23, 22, 0, 0, 23, 0, 11, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTextureBlock(gLinkChildKokiriSwordSheathTex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR |
                         G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadTLUT_pal256(gLinkChildSwordsTLUT),
    gsSPVertex(&object_link_childVtx_00ABF0[523], 11, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 1, 4, 0),
    gsSP2Triangles(0, 5, 1, 0, 6, 0, 2, 0),
    gsSP2Triangles(6, 2, 7, 0, 7, 2, 3, 0),
    gsSP2Triangles(3, 2, 1, 0, 3, 4, 8, 0),
    gsSP2Triangles(9, 6, 7, 0, 0, 6, 9, 0),
    gsSP2Triangles(9, 7, 3, 0, 9, 3, 10, 0),
    gsSP2Triangles(10, 3, 8, 0, 0, 9, 8, 0),
    gsSP1Triangle(0, 8, 5, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gLinkChildSwordJewelTex, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 16, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 5, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadTLUT_pal256(gLinkChildSwordTLUT),
    gsSPVertex(&object_link_childVtx_00ABF0[534], 24, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 1, 3, 0),
    gsSP2Triangles(1, 4, 5, 0, 6, 7, 8, 0),
    gsSP2Triangles(9, 10, 11, 0, 12, 8, 7, 0),
    gsSP2Triangles(11, 13, 14, 0, 11, 14, 9, 0),
    gsSP2Triangles(15, 16, 17, 0, 18, 19, 17, 0),
    gsSP2Triangles(17, 19, 20, 0, 17, 20, 15, 0),
    gsSP2Triangles(20, 19, 21, 0, 20, 21, 15, 0),
    gsSP2Triangles(19, 18, 22, 0, 16, 15, 22, 0),
    gsSP2Triangles(22, 15, 21, 0, 19, 22, 21, 0),
    gsSP2Triangles(11, 23, 13, 0, 0, 4, 1, 0),
    gsSPEndDisplayList(),
};

Gfx gLinkChildDekuShieldAndSheathNearDL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gLinkChildKokiriSwordSheathTex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR |
                         G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadTLUT_pal256(gLinkChildSwordsTLUT),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&object_link_childVtx_00ABF0[558], 11, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 1, 4, 0),
    gsSP2Triangles(0, 5, 1, 0, 6, 0, 2, 0),
    gsSP2Triangles(6, 2, 7, 0, 7, 2, 3, 0),
    gsSP2Triangles(3, 2, 1, 0, 3, 4, 8, 0),
    gsSP2Triangles(9, 6, 7, 0, 0, 6, 9, 0),
    gsSP2Triangles(9, 7, 3, 0, 9, 3, 10, 0),
    gsSP2Triangles(10, 3, 8, 0, 0, 9, 8, 0),
    gsSP1Triangle(0, 8, 5, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0, 0, 0, G_TX_RENDERTILE, G_OFF),
    gsDPSetCombineLERP(0, 0, 0, PRIMITIVE, 0, 0, 0, 1, 0, 0, 0, COMBINED, 0, 0, 0, COMBINED),
    gsSPClearGeometryMode(G_LIGHTING),
    gsDPSetPrimColor(0, 0, 0, 0, 0, 255),
    gsSPVertex(&object_link_childVtx_00ABF0[569], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsDPPipeSync(),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gLinkChildDekuShieldBackTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsSPSetGeometryMode(G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&object_link_childVtx_00ABF0[573], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(5, 4, 6, 0, 4, 0, 2, 0),
    gsSP2Triangles(2, 6, 4, 0, 1, 0, 7, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gLinkChildDekuShieldFrontTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, G_TX_NOMIRROR |
                         G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&object_link_childVtx_00ABF0[581], 24, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(4, 3, 6, 0, 7, 8, 9, 0),
    gsSP2Triangles(9, 8, 10, 0, 0, 2, 11, 0),
    gsSP2Triangles(12, 13, 5, 0, 5, 4, 12, 0),
    gsSP2Triangles(14, 15, 16, 0, 17, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(23, 22, 0, 0, 23, 0, 11, 0),
    gsSPEndDisplayList(),
};

Gfx gLinkChildSwordAndSheathNearDL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gLinkChildKokiriSwordSheathTex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR |
                         G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadTLUT_pal256(gLinkChildSwordsTLUT),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&object_link_childVtx_00ABF0[605], 11, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 1, 4, 0),
    gsSP2Triangles(0, 5, 1, 0, 6, 0, 2, 0),
    gsSP2Triangles(6, 2, 7, 0, 7, 2, 3, 0),
    gsSP2Triangles(3, 2, 1, 0, 3, 4, 8, 0),
    gsSP2Triangles(9, 6, 7, 0, 0, 6, 9, 0),
    gsSP2Triangles(9, 7, 3, 0, 9, 3, 10, 0),
    gsSP2Triangles(10, 3, 8, 0, 0, 9, 8, 0),
    gsSP1Triangle(0, 8, 5, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gLinkChildSwordJewelTex, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 16, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 5, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadTLUT_pal256(gLinkChildSwordTLUT),
    gsSPVertex(&object_link_childVtx_00ABF0[616], 24, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 1, 3, 0),
    gsSP2Triangles(1, 4, 5, 0, 6, 7, 8, 0),
    gsSP2Triangles(9, 10, 11, 0, 12, 8, 7, 0),
    gsSP2Triangles(11, 13, 14, 0, 11, 14, 9, 0),
    gsSP2Triangles(15, 16, 17, 0, 18, 19, 17, 0),
    gsSP2Triangles(17, 19, 20, 0, 17, 20, 15, 0),
    gsSP2Triangles(20, 19, 21, 0, 20, 21, 15, 0),
    gsSP2Triangles(19, 18, 22, 0, 16, 15, 22, 0),
    gsSP2Triangles(22, 15, 21, 0, 19, 22, 21, 0),
    gsSP2Triangles(11, 23, 13, 0, 0, 4, 1, 0),
    gsSPEndDisplayList(),
};

Gfx gLinkChildSheathNearDL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gLinkChildKokiriSwordSheathTex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR |
                         G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadTLUT_pal256(gLinkChildSwordsTLUT),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&object_link_childVtx_00ABF0[640], 11, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 1, 4, 0),
    gsSP2Triangles(0, 5, 1, 0, 6, 0, 2, 0),
    gsSP2Triangles(6, 2, 7, 0, 7, 2, 3, 0),
    gsSP2Triangles(3, 2, 1, 0, 3, 4, 8, 0),
    gsSP2Triangles(9, 6, 7, 0, 0, 6, 9, 0),
    gsSP2Triangles(9, 7, 3, 0, 9, 3, 10, 0),
    gsSP2Triangles(10, 3, 8, 0, 0, 9, 8, 0),
    gsSP1Triangle(0, 8, 5, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0, 0, 0, G_TX_RENDERTILE, G_OFF),
    gsDPSetCombineLERP(0, 0, 0, PRIMITIVE, 0, 0, 0, 1, 0, 0, 0, COMBINED, 0, 0, 0, COMBINED),
    gsSPClearGeometryMode(G_LIGHTING),
    gsDPSetPrimColor(0, 0, 0, 0, 0, 255),
    gsSPVertex(&object_link_childVtx_00ABF0[651], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSPEndDisplayList(),
};

Gfx gLinkChildLeftHandHoldingMasterSwordDL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gLinkChildHandTex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadTLUT_pal256(gLinkChildHandTLUT),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&object_link_childVtx_00ABF0[655], 27, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(2, 1, 4, 0, 5, 4, 1, 0),
    gsSP2Triangles(1, 0, 5, 0, 4, 5, 6, 0),
    gsSP2Triangles(2, 7, 3, 0, 3, 6, 5, 0),
    gsSP2Triangles(8, 9, 10, 0, 9, 11, 12, 0),
    gsSP2Triangles(12, 13, 14, 0, 8, 15, 11, 0),
    gsSP2Triangles(12, 16, 13, 0, 11, 9, 8, 0),
    gsSP2Triangles(16, 12, 11, 0, 3, 7, 17, 0),
    gsSP2Triangles(6, 7, 4, 0, 4, 7, 2, 0),
    gsSP2Triangles(3, 5, 0, 0, 17, 7, 18, 0),
    gsSP2Triangles(16, 19, 13, 0, 18, 20, 17, 0),
    gsSP2Triangles(12, 10, 9, 0, 15, 8, 14, 0),
    gsSP2Triangles(14, 13, 15, 0, 13, 19, 21, 0),
    gsSP2Triangles(22, 6, 3, 0, 6, 23, 18, 0),
    gsSP2Triangles(15, 21, 24, 0, 13, 21, 15, 0),
    gsSP2Triangles(24, 11, 15, 0, 24, 16, 11, 0),
    gsSP2Triangles(7, 6, 18, 0, 6, 22, 25, 0),
    gsSP2Triangles(20, 25, 22, 0, 25, 23, 6, 0),
    gsSP2Triangles(18, 26, 20, 0, 25, 18, 23, 0),
    gsSP2Triangles(10, 14, 8, 0, 20, 26, 25, 0),
    gsSP2Triangles(14, 10, 12, 0, 25, 26, 18, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0x07D0, 0x09C4, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gHilite1Tex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 16, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR |
                         G_TX_WRAP, 4, 4, G_TX_NOLOD, 15),
    gsSPSetGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&object_link_childVtx_00ABF0[682], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSPVertex(&object_link_childVtx_00ABF0[685], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 15, 16, 17, 0),
    gsSP2Triangles(18, 19, 20, 0, 21, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 27, 28, 29, 0),
    gsSP1Triangle(2, 30, 0, 0),
    gsSPVertex(&object_link_childVtx_00ABF0[716], 20, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 15, 16, 17, 0),
    gsSP2Triangles(15, 18, 16, 0, 19, 11, 10, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gLinkChildMasterSwordPommelTex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadTLUT_pal256(gLinkChildSwordsTLUT),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&object_link_childVtx_00ABF0[736], 19, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 4, 0),
    gsSP2Triangles(0, 4, 5, 0, 1, 0, 6, 0),
    gsSP2Triangles(7, 8, 9, 0, 7, 9, 10, 0),
    gsSP2Triangles(8, 7, 11, 0, 7, 10, 12, 0),
    gsSP2Triangles(13, 14, 15, 0, 16, 17, 18, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gLinkChildMasterSwordGuardTex, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&object_link_childVtx_00ABF0[755], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(1, 0, 4, 0, 4, 5, 6, 0),
    gsSP2Triangles(6, 5, 7, 0, 8, 9, 10, 0),
    gsSP2Triangles(11, 5, 10, 0, 8, 10, 5, 0),
    gsSP2Triangles(12, 13, 14, 0, 14, 15, 16, 0),
    gsSP2Triangles(17, 18, 19, 0, 20, 21, 22, 0),
    gsSP2Triangles(1, 23, 24, 0, 25, 26, 24, 0),
    gsSP2Triangles(27, 17, 19, 0, 28, 29, 13, 0),
    gsSP2Triangles(21, 20, 15, 0, 15, 20, 30, 0),
    gsSP2Triangles(15, 30, 16, 0, 13, 12, 18, 0),
    gsSPVertex(&object_link_childVtx_00ABF0[786], 18, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 2, 6, 3, 0),
    gsSP2Triangles(7, 8, 4, 0, 9, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 11, 10, 12, 0),
    gsSP2Triangles(11, 12, 14, 0, 15, 16, 17, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gLinkChildMasterSwordEmblemTex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR |
                         G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&object_link_childVtx_00ABF0[804], 14, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 6, 9, 7, 0),
    gsSP2Triangles(10, 11, 12, 0, 12, 11, 13, 0),
    gsSPEndDisplayList(),
};

Gfx gLinkChildRightHandAndOotNearDL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gLinkChildHandTex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadTLUT_pal256(gLinkChildHandTLUT),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&object_link_childVtx_00ABF0[818], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(2, 1, 6, 0, 7, 5, 4, 0),
    gsSP2Triangles(8, 0, 2, 0, 6, 1, 0, 0),
    gsSP2Triangles(9, 8, 2, 0, 10, 2, 6, 0),
    gsSP2Triangles(2, 10, 9, 0, 0, 9, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 15, 12, 14, 0),
    gsSP2Triangles(15, 16, 17, 0, 14, 16, 15, 0),
    gsSP2Triangles(0, 8, 9, 0, 14, 18, 16, 0),
    gsSP2Triangles(16, 19, 17, 0, 20, 21, 5, 0),
    gsSP2Triangles(5, 7, 20, 0, 22, 4, 3, 0),
    gsSP2Triangles(23, 24, 25, 0, 17, 19, 13, 0),
    gsSP2Triangles(25, 26, 23, 0, 27, 28, 29, 0),
    gsSPVertex(&object_link_childVtx_00ABF0[848], 23, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 1, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 7, 8, 9, 0),
    gsSP2Triangles(10, 11, 12, 0, 13, 9, 8, 0),
    gsSP2Triangles(12, 14, 10, 0, 15, 16, 17, 0),
    gsSP2Triangles(17, 12, 11, 0, 18, 11, 10, 0),
    gsSP2Triangles(19, 3, 20, 0, 20, 1, 0, 0),
    gsSP2Triangles(3, 19, 2, 0, 19, 21, 22, 0),
    gsSP2Triangles(22, 2, 19, 0, 2, 22, 0, 0),
    gsSP2Triangles(20, 0, 21, 0, 0, 22, 21, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gOcarinaofTimeDesignTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 16, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 5, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&object_link_childVtx_00ABF0[871], 23, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 3, 2, 0, 4, 2, 1, 0),
    gsSP2Triangles(5, 6, 7, 0, 8, 9, 10, 0),
    gsSP2Triangles(10, 6, 8, 0, 5, 8, 6, 0),
    gsSP2Triangles(11, 9, 0, 0, 10, 9, 11, 0),
    gsSP2Triangles(12, 1, 13, 0, 11, 3, 14, 0),
    gsSP2Triangles(11, 0, 3, 0, 0, 9, 1, 0),
    gsSP2Triangles(12, 4, 1, 0, 1, 9, 8, 0),
    gsSP2Triangles(1, 8, 5, 0, 14, 10, 11, 0),
    gsSP2Triangles(1, 5, 13, 0, 15, 13, 5, 0),
    gsSP2Triangles(15, 5, 7, 0, 7, 14, 15, 0),
    gsSP2Triangles(10, 14, 6, 0, 6, 14, 7, 0),
    gsSP2Triangles(12, 13, 16, 0, 12, 16, 17, 0),
    gsSP2Triangles(17, 18, 15, 0, 15, 16, 13, 0),
    gsSP2Triangles(17, 15, 14, 0, 17, 14, 19, 0),
    gsSP2Triangles(14, 20, 21, 0, 14, 21, 19, 0),
    gsSP2Triangles(4, 20, 3, 0, 3, 20, 14, 0),
    gsSP2Triangles(12, 17, 19, 0, 12, 19, 22, 0),
    gsSP2Triangles(12, 22, 4, 0, 21, 20, 4, 0),
    gsSPEndDisplayList(),
};

Gfx gLinkChildRightHandHoldingFairyOcarinaNearDL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gLinkChildFairyOcarinaTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 16, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 5, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&object_link_childVtx_00ABF0[894], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 1, 0, 0),
    gsSP2Triangles(4, 0, 5, 0, 6, 0, 4, 0),
    gsSP2Triangles(7, 8, 9, 0, 7, 10, 8, 0),
    gsSP2Triangles(11, 0, 6, 0, 9, 12, 7, 0),
    gsSP2Triangles(13, 12, 9, 0, 0, 14, 5, 0),
    gsSP2Triangles(0, 2, 14, 0, 15, 16, 17, 0),
    gsSP2Triangles(18, 13, 15, 0, 18, 12, 13, 0),
    gsSP2Triangles(12, 18, 19, 0, 15, 20, 16, 0),
    gsSP2Triangles(16, 20, 9, 0, 21, 7, 19, 0),
    gsSP2Triangles(15, 13, 20, 0, 12, 19, 7, 0),
    gsSP2Triangles(20, 13, 9, 0, 21, 10, 7, 0),
    gsSP2Triangles(8, 16, 9, 0, 8, 22, 23, 0),
    gsSP2Triangles(23, 24, 8, 0, 24, 16, 8, 0),
    gsSP2Triangles(17, 16, 24, 0, 11, 25, 0, 0),
    gsSP2Triangles(26, 8, 10, 0, 27, 28, 29, 0),
    gsSP2Triangles(30, 22, 8, 0, 26, 11, 31, 0),
    gsSPVertex(&object_link_childVtx_00ABF0[926], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 1, 0, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTextureBlock(gLinkChildHandTex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadTLUT_pal256(gLinkChildHandTLUT),
    gsSPVertex(&object_link_childVtx_00ABF0[930], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(2, 1, 6, 0, 7, 5, 4, 0),
    gsSP2Triangles(8, 0, 2, 0, 6, 1, 0, 0),
    gsSP2Triangles(9, 8, 2, 0, 10, 2, 6, 0),
    gsSP2Triangles(2, 10, 9, 0, 0, 9, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 15, 12, 14, 0),
    gsSP2Triangles(15, 16, 17, 0, 14, 16, 15, 0),
    gsSP2Triangles(0, 8, 9, 0, 14, 18, 16, 0),
    gsSP2Triangles(16, 19, 17, 0, 20, 21, 5, 0),
    gsSP2Triangles(5, 7, 20, 0, 22, 4, 3, 0),
    gsSP2Triangles(23, 24, 25, 0, 17, 19, 13, 0),
    gsSP2Triangles(25, 26, 23, 0, 27, 28, 29, 0),
    gsSPVertex(&object_link_childVtx_00ABF0[960], 23, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 1, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 7, 8, 9, 0),
    gsSP2Triangles(10, 11, 12, 0, 13, 9, 8, 0),
    gsSP2Triangles(12, 14, 10, 0, 15, 16, 17, 0),
    gsSP2Triangles(17, 12, 11, 0, 18, 11, 10, 0),
    gsSP2Triangles(19, 3, 20, 0, 20, 1, 0, 0),
    gsSP2Triangles(3, 19, 2, 0, 19, 21, 22, 0),
    gsSP2Triangles(22, 2, 19, 0, 2, 22, 0, 0),
    gsSP2Triangles(20, 0, 21, 0, 0, 22, 21, 0),
    gsSPEndDisplayList(),
};

Gfx gLinkChildRightHandHoldingSlingshotNearDL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gLinkChildHandTex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadTLUT_pal256(gLinkChildHandTLUT),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&object_link_childVtx_00ABF0[983], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 8, 7, 9, 0),
    gsSP2Triangles(10, 11, 12, 0, 11, 10, 13, 0),
    gsSP2Triangles(14, 15, 16, 0, 17, 18, 12, 0),
    gsSP2Triangles(2, 19, 0, 0, 13, 10, 20, 0),
    gsSP2Triangles(21, 10, 18, 0, 22, 18, 23, 0),
    gsSP2Triangles(21, 18, 22, 0, 24, 25, 26, 0),
    gsSP2Triangles(27, 28, 29, 0, 30, 27, 29, 0),
    gsSP2Triangles(10, 21, 20, 0, 12, 31, 10, 0),
    gsSP2Triangles(12, 18, 31, 0, 31, 18, 10, 0),
    gsSPVertex(&object_link_childVtx_00ABF0[1015], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 1, 3, 0),
    gsSP2Triangles(3, 1, 4, 0, 5, 6, 7, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gLinkChildSlingshotTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 4, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&object_link_childVtx_00ABF0[1023], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 1, 0, 0),
    gsSP2Triangles(4, 3, 0, 0, 5, 6, 7, 0),
    gsSP2Triangles(8, 7, 6, 0, 9, 10, 11, 0),
    gsSP2Triangles(12, 9, 11, 0, 13, 14, 15, 0),
    gsSP2Triangles(14, 16, 17, 0, 15, 14, 17, 0),
    gsSP2Triangles(18, 19, 16, 0, 19, 20, 16, 0),
    gsSP2Triangles(21, 22, 23, 0, 23, 22, 17, 0),
    gsSP2Triangles(24, 25, 26, 0, 27, 24, 28, 0),
    gsSP1Triangle(29, 30, 31, 0),
    gsSPVertex(&object_link_childVtx_00ABF0[1055], 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 2, 4, 0),
    gsSP2Triangles(5, 3, 4, 0, 6, 7, 8, 0),
    gsSP2Triangles(9, 6, 8, 0, 10, 6, 9, 0),
    gsSP1Triangle(11, 10, 9, 0),
    gsSPEndDisplayList(),
};

Gfx gLinkChildLeftHandUpNearDL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gLinkChildHandTex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadTLUT_pal256(gLinkChildHandTLUT),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&object_link_childVtx_00ABF0[1067], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(5, 1, 3, 0, 6, 5, 4, 0),
    gsSP2Triangles(0, 3, 1, 0, 7, 8, 9, 0),
    gsSP2Triangles(10, 11, 12, 0, 5, 13, 14, 0),
    gsSP2Triangles(10, 12, 15, 0, 16, 10, 15, 0),
    gsSP2Triangles(2, 17, 18, 0, 6, 13, 5, 0),
    gsSP2Triangles(16, 19, 10, 0, 20, 2, 21, 0),
    gsSP2Triangles(15, 22, 16, 0, 2, 20, 17, 0),
    gsSP2Triangles(16, 23, 19, 0, 22, 23, 16, 0),
    gsSP2Triangles(22, 24, 23, 0, 25, 11, 26, 0),
    gsSP2Triangles(10, 27, 11, 0, 10, 19, 27, 0),
    gsSP2Triangles(6, 28, 13, 0, 29, 15, 12, 0),
    gsSP2Triangles(22, 29, 24, 0, 22, 15, 29, 0),
    gsSP2Triangles(1, 21, 2, 0, 1, 5, 21, 0),
    gsSP2Triangles(11, 30, 12, 0, 31, 14, 13, 0),
    gsSPVertex(&object_link_childVtx_00ABF0[1099], 7, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP1Triangle(3, 6, 4, 0),
    gsSPEndDisplayList(),
};

Gfx gLinkChildGoronBraceletDL[] = {
    gsSPMatrix(0x0D0002C0, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0x012C, 0x0190, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gLinkChildGoronBraceletTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 8, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 3, 3, G_TX_NOLOD, 15),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_CULL_BACK),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&object_link_childVtx_00ABF0[1106], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSPVertex(&object_link_childVtx_00ABF0[1109], 14, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 0, 2, 0, 6, 2, 7, 0),
    gsSP2Triangles(8, 9, 1, 0, 10, 6, 7, 0),
    gsSP2Triangles(10, 7, 3, 0, 11, 12, 8, 0),
    gsSP2Triangles(5, 12, 11, 0, 11, 10, 3, 0),
    gsSP2Triangles(11, 3, 5, 0, 13, 11, 1, 0),
    gsSP1Triangle(1, 11, 8, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gLinkChildGoronSymbolTex, G_IM_FMT_IA, G_IM_SIZ_16b, 16, 32, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 4, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_XLU_DECAL2),
    gsSPClearGeometryMode(G_CULL_BACK | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&object_link_childVtx_00ABF0[2238], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 3, 0, 0),
    gsSP2Triangles(4, 5, 6, 0, 7, 4, 6, 0),
    gsSPEndDisplayList(),
};

Gfx gLinkChildRightArmStretchedSlingshotDL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gLinkChildSlingshotTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 4, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&object_link_childVtx_00ABF0[1935], 30, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSP2Triangles(4, 3, 0, 0, 4, 5, 3, 0),
    gsSP2Triangles(6, 2, 1, 0, 7, 2, 6, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 11, 9, 0),
    gsSP2Triangles(8, 12, 11, 0, 13, 12, 8, 0),
    gsSP2Triangles(14, 13, 15, 0, 14, 12, 13, 0),
    gsSP2Triangles(16, 17, 18, 0, 19, 20, 21, 0),
    gsSP2Triangles(19, 22, 20, 0, 23, 24, 25, 0),
    gsSP2Triangles(26, 27, 28, 0, 26, 25, 24, 0),
    gsSP2Triangles(26, 28, 25, 0, 17, 16, 24, 0),
    gsSP2Triangles(24, 23, 17, 0, 29, 22, 19, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gLinkChildSlingshotSeedTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&object_link_childVtx_00ABF0[1965], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(0, 3, 4, 0, 0, 4, 5, 0),
    gsSP2Triangles(0, 5, 6, 0, 7, 6, 8, 0),
    gsSP2Triangles(4, 9, 10, 0, 4, 10, 11, 0),
    gsSP2Triangles(11, 10, 12, 0, 11, 12, 13, 0),
    gsSP2Triangles(12, 14, 15, 0, 13, 12, 15, 0),
    gsSP2Triangles(14, 16, 0, 0, 15, 14, 0, 0),
    gsSP2Triangles(0, 16, 17, 0, 0, 17, 18, 0),
    gsSP2Triangles(17, 19, 2, 0, 18, 17, 2, 0),
    gsSP2Triangles(2, 19, 20, 0, 2, 20, 21, 0),
    gsSP2Triangles(21, 20, 9, 0, 21, 9, 4, 0),
    gsSP2Triangles(22, 23, 24, 0, 25, 23, 22, 0),
    gsSP2Triangles(26, 27, 28, 0, 29, 30, 31, 0),
    gsSPVertex(&object_link_childVtx_00ABF0[1997], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(1, 4, 3, 0, 0, 4, 1, 0),
    gsSP2Triangles(6, 7, 8, 0, 7, 6, 9, 0),
    gsSP2Triangles(9, 6, 10, 0, 11, 12, 13, 0),
    gsSP2Triangles(14, 15, 16, 0, 17, 18, 19, 0),
    gsSP2Triangles(20, 17, 19, 0, 21, 17, 20, 0),
    gsSP2Triangles(22, 17, 21, 0, 18, 23, 14, 0),
    gsSP2Triangles(23, 17, 22, 0, 18, 17, 23, 0),
    gsSP2Triangles(24, 13, 25, 0, 26, 0, 27, 0),
    gsSP2Triangles(26, 4, 0, 0, 25, 28, 24, 0),
    gsSP2Triangles(29, 26, 30, 0, 5, 29, 31, 0),
    gsSP2Triangles(4, 29, 5, 0, 4, 26, 29, 0),
    gsSP1Triangle(13, 24, 11, 0),
    gsSPVertex(&object_link_childVtx_00ABF0[2029], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 6, 9, 7, 0),
    gsSP2Triangles(10, 11, 12, 0, 13, 11, 10, 0),
    gsSP2Triangles(6, 14, 9, 0, 15, 16, 17, 0),
    gsSP2Triangles(15, 18, 16, 0, 9, 19, 20, 0),
    gsSP2Triangles(16, 18, 21, 0, 7, 9, 20, 0),
    gsSP2Triangles(13, 16, 21, 0, 15, 22, 18, 0),
    gsSP2Triangles(7, 20, 23, 0, 24, 23, 22, 0),
    gsSP2Triangles(25, 11, 13, 0, 13, 21, 25, 0),
    gsSP2Triangles(26, 11, 25, 0, 17, 27, 15, 0),
    gsSP1Triangle(28, 29, 30, 0),
    gsSPVertex(&object_link_childVtx_00ABF0[2060], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 3, 5, 0, 3, 7, 4, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 11, 9, 0),
    gsSP2Triangles(12, 9, 11, 0, 7, 11, 8, 0),
    gsSP2Triangles(11, 7, 3, 0, 6, 11, 3, 0),
    gsSP2Triangles(13, 14, 15, 0, 16, 14, 13, 0),
    gsSP2Triangles(14, 17, 15, 0, 18, 14, 16, 0),
    gsSP2Triangles(14, 19, 17, 0, 18, 19, 14, 0),
    gsSP2Triangles(12, 20, 21, 0, 22, 23, 24, 0),
    gsSP2Triangles(22, 25, 23, 0, 24, 26, 27, 0),
    gsSP2Triangles(27, 28, 24, 0, 28, 6, 24, 0),
    gsSP2Triangles(27, 29, 28, 0, 12, 28, 20, 0),
    gsSP2Triangles(11, 28, 12, 0, 28, 11, 6, 0),
    gsSP2Triangles(0, 24, 1, 0, 24, 6, 1, 0),
    gsSPVertex(&object_link_childVtx_00ABF0[2090], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(3, 6, 4, 0, 7, 8, 9, 0),
    gsSP2Triangles(10, 11, 9, 0, 11, 12, 13, 0),
    gsSP2Triangles(14, 15, 16, 0, 17, 11, 10, 0),
    gsSP2Triangles(18, 12, 11, 0, 18, 19, 12, 0),
    gsSP2Triangles(18, 14, 19, 0, 18, 15, 14, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 23, 21, 0),
    gsSP2Triangles(24, 25, 26, 0, 27, 25, 24, 0),
    gsSP1Triangle(28, 29, 30, 0),
    gsSPVertex(&object_link_childVtx_00ABF0[2121], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(3, 6, 4, 0, 7, 8, 9, 0),
    gsSP2Triangles(7, 10, 8, 0, 11, 7, 12, 0),
    gsSP2Triangles(11, 10, 7, 0, 13, 14, 15, 0),
    gsSP2Triangles(16, 13, 15, 0, 13, 17, 14, 0),
    gsSP2Triangles(18, 13, 16, 0, 15, 5, 16, 0),
    gsSP2Triangles(9, 19, 20, 0, 21, 19, 9, 0),
    gsSP2Triangles(22, 23, 13, 0, 13, 18, 22, 0),
    gsSP2Triangles(24, 23, 22, 0, 23, 17, 13, 0),
    gsSP2Triangles(25, 6, 3, 0, 25, 26, 6, 0),
    gsSP2Triangles(25, 27, 26, 0, 0, 28, 1, 0),
    gsSP1Triangle(29, 30, 31, 0),
    gsSPVertex(&object_link_childVtx_00ABF0[2153], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 7, 5, 0),
    gsSP2Triangles(8, 3, 0, 0, 8, 9, 3, 0),
    gsSP2Triangles(4, 8, 7, 0, 4, 9, 8, 0),
    gsSP2Triangles(10, 11, 12, 0, 13, 11, 10, 0),
    gsSP2Triangles(14, 15, 16, 0, 14, 17, 15, 0),
    gsSP2Triangles(18, 13, 19, 0, 18, 11, 13, 0),
    gsSP2Triangles(20, 21, 2, 0, 22, 21, 20, 0),
    gsSP2Triangles(23, 24, 25, 0, 26, 27, 28, 0),
    gsSP2Triangles(29, 23, 25, 0, 27, 26, 29, 0),
    gsSP1Triangle(29, 25, 27, 0),
    gsSPVertex(&object_link_childVtx_00ABF0[2183], 21, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSP2Triangles(4, 2, 1, 0, 5, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 0, 11, 3, 0),
    gsSP2Triangles(12, 13, 14, 0, 13, 15, 14, 0),
    gsSP2Triangles(16, 6, 5, 0, 13, 17, 15, 0),
    gsSP2Triangles(18, 16, 19, 0, 18, 6, 16, 0),
    gsSP1Triangle(12, 14, 20, 0),
    gsSPEndDisplayList(),
};

Gfx gLinkChildBottleDL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0x05DC, 0x05DC, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gBottleGlassTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 16, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR |
                         G_TX_WRAP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, PRIMITIVE, COMBINED, 0, ENVIRONMENT, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_XLU_SURF2),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 178),
    gsSPVertex(&object_link_childVtx_00ABF0[2204], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSPVertex(&object_link_childVtx_00ABF0[2207], 13, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 1, 7, 6, 0),
    gsSP2Triangles(9, 7, 1, 0, 2, 6, 10, 0),
    gsSP2Triangles(6, 2, 1, 0, 5, 11, 3, 0),
    gsSP2Triangles(5, 12, 11, 0, 10, 5, 2, 0),
    gsSP1Triangle(10, 12, 5, 0),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, PRIMITIVE, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsSPVertex(&object_link_childVtx_00ABF0[2220], 18, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 6, 5, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 10, 9, 11, 0),
    gsSP2Triangles(10, 11, 12, 0, 10, 12, 13, 0),
    gsSP2Triangles(12, 6, 7, 0, 12, 7, 13, 0),
    gsSP2Triangles(14, 15, 16, 0, 14, 16, 17, 0),
    gsSPEndDisplayList(),
};

Gfx gLinkChildDL_18580[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0x07D0, 0x09C4, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gLinkTunic3Tex, G_IM_FMT_I, G_IM_SIZ_8b, 16, 16, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR |
                         G_TX_WRAP, 4, 4, G_TX_NOLOD, 15),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_XLU_SURF2),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsDPSetPrimColor(0, 0, 243, 0, 97, 255),
    gsSPVertex(&object_link_childVtx_00ABF0[2246], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSPVertex(&object_link_childVtx_00ABF0[2249], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 15, 16, 17, 0),
    gsSP2Triangles(18, 19, 20, 0, 21, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 27, 28, 29, 0),
    gsSPVertex(&object_link_childVtx_00ABF0[2279], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSPEndDisplayList(),
};

Gfx gLinkChildBottle2DL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0x05DC, 0x05DC, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gBottleGlassTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 16, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR |
                         G_TX_WRAP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, PRIMITIVE, COMBINED, 0, ENVIRONMENT, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_XLU_SURF2),
    gsSPClearGeometryMode(G_CULL_BACK),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 178),
    gsSPVertex(&object_link_childVtx_00ABF0[2282], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSPVertex(&object_link_childVtx_00ABF0[2285], 13, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 1, 7, 6, 0),
    gsSP2Triangles(9, 7, 1, 0, 2, 6, 10, 0),
    gsSP2Triangles(6, 2, 1, 0, 5, 11, 3, 0),
    gsSP2Triangles(5, 12, 11, 0, 10, 5, 2, 0),
    gsSP1Triangle(10, 12, 5, 0),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, PRIMITIVE, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsSPVertex(&object_link_childVtx_00ABF0[2298], 18, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 6, 5, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 10, 9, 11, 0),
    gsSP2Triangles(10, 11, 12, 0, 10, 12, 13, 0),
    gsSP2Triangles(12, 6, 7, 0, 12, 7, 13, 0),
    gsSP2Triangles(14, 15, 16, 0, 14, 16, 17, 0),
    gsSPEndDisplayList(),
};

static Vtx gLinkChildVtx_019E08[35] = {
#include "assets/objects/object_link_child/gLinkChildVtx_019E08.vtx.inc"
};

Vtx object_link_childVtx_01A038[] = {
#include "assets/objects/object_link_child/object_link_childVtx_01A038.vtx.inc"
};

static Vtx gLinkChildVtx_01A428[39] = {
#include "assets/objects/object_link_child/gLinkChildVtx_01A428.vtx.inc"
};

Vtx object_link_childVtx_01A698[] = {
#include "assets/objects/object_link_child/object_link_childVtx_01A698.vtx.inc"
};

static Vtx gLinkChildVtx_01AA98[40] = {
#include "assets/objects/object_link_child/gLinkChildVtx_01AA98.vtx.inc"
};

Vtx object_link_childVtx_01AD18[] = {
#include "assets/objects/object_link_child/object_link_childVtx_01AD18.vtx.inc"
};

Vtx object_link_childVtx_01C978[] = {
#include "assets/objects/object_link_child/object_link_childVtx_01C978.vtx.inc"
};

static Vtx gLinkChildVtx_01EB38[39] = {
#include "assets/objects/object_link_child/gLinkChildVtx_01EB38.vtx.inc"
};

Vtx object_link_childVtx_01EDA8[] = {
#include "assets/objects/object_link_child/object_link_childVtx_01EDA8.vtx.inc"
};

static Vtx gLinkChildVtx_01F2B8[39] = {
#include "assets/objects/object_link_child/gLinkChildVtx_01F2B8.vtx.inc"
};

Vtx object_link_childVtx_01F528[] = {
#include "assets/objects/object_link_child/object_link_childVtx_01F528.vtx.inc"
};

static Vtx gLinkChildVtx_01FA28[62] = {
#include "assets/objects/object_link_child/gLinkChildVtx_01FA28.vtx.inc"
};

Vtx object_link_childVtx_01FE08[] = {
#include "assets/objects/object_link_child/object_link_childVtx_01FE08.vtx.inc"
};

Gfx gLinkChildWaistNearDL[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, ENVIRONMENT, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gLinkChildWaistTex, G_IM_FMT_I, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x007C, 0x007C),
    gsDPSetPrimColor(0, 0x80, 80, 188, 8, 255),
    gsSPClearGeometryMode(G_CULL_BOTH),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPVertex(&object_link_childVtx_01C978[267], 23, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 3, 7, 0, 8, 9, 6, 0),
    gsSP2Triangles(1, 10, 6, 0, 5, 11, 3, 0),
    gsSP2Triangles(11, 7, 3, 0, 12, 13, 14, 0),
    gsSP2Triangles(9, 15, 16, 0, 17, 5, 4, 0),
    gsSP2Triangles(18, 19, 0, 0, 2, 1, 6, 0),
    gsSP2Triangles(20, 2, 6, 0, 16, 21, 22, 0),
    gsSP2Triangles(16, 22, 9, 0, 8, 15, 9, 0),
    gsSP2Triangles(2, 18, 0, 0, 17, 4, 22, 0),
    gsSP2Triangles(17, 22, 21, 0, 14, 17, 21, 0),
    gsSP2Triangles(14, 21, 12, 0, 6, 10, 8, 0),
    gsSPVertex(&object_link_childVtx_01C978[290], 19, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(gLinkChildBeltTLUT),
    gsDPLoadTextureBlock(gLinkChildBeltTex, G_IM_FMT_CI, G_IM_SIZ_8b, 8, 16, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 3, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x00FC, 0x003C),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSP2Triangles(3, 4, 5, 0, 6, 7, 8, 0),
    gsSP2Triangles(4, 8, 9, 0, 10, 11, 12, 0),
    gsSP2Triangles(8, 4, 3, 0, 5, 13, 3, 0),
    gsSP2Triangles(11, 10, 3, 0, 9, 5, 4, 0),
    gsSP2Triangles(12, 14, 10, 0, 3, 10, 14, 0),
    gsSP1Triangle(3, 13, 11, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(gLinkChildBeltTLUT),
    gsDPLoadTextureBlock(gLinkChildBeltClaspTex, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 16, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 5, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x007C, 0x003C),
    gsSP2Triangles(15, 16, 17, 0, 17, 18, 15, 0),
    gsSPEndDisplayList(),
};

Gfx gLinkChildRightThighNearDL[] = {
    gsSPMatrix(0x0D000000, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPVertex(&object_link_childVtx_01C978[84], 10, 0),
    gsSPMatrix(0x0D000040, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, ENVIRONMENT, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gLinkChildWaistTex, G_IM_FMT_I, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x007C, 0x007C),
    gsDPSetPrimColor(0, 0x80, 80, 188, 8, 255),
    gsSPClearGeometryMode(G_CULL_BOTH),
    gsSPVertex(&object_link_childVtx_01C978[94], 19, 10),
    gsSP2Triangles(9, 10, 11, 0, 5, 12, 8, 0),
    gsSP2Triangles(13, 3, 4, 0, 14, 4, 15, 0),
    gsSP2Triangles(16, 1, 2, 0, 17, 2, 7, 0),
    gsSP2Triangles(0, 1, 18, 0, 0, 19, 20, 0),
    gsSP2Triangles(21, 4, 0, 0, 6, 3, 22, 0),
    gsSP2Triangles(6, 23, 24, 0, 25, 5, 6, 0),
    gsSP2Triangles(0, 26, 27, 0, 28, 7, 9, 0),
    gsSPDisplayList(0x0C000000),
    gsSPVertex(&object_link_childVtx_01C978[113], 2, 10),
    gsSP1Triangle(6, 10, 11, 0),
    gsSPClearGeometryMode(G_CULL_BOTH),
    gsSPVertex(&object_link_childVtx_01C978[115], 19, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(3, 5, 6, 0, 7, 8, 4, 0),
    gsSP2Triangles(7, 4, 3, 0, 6, 5, 1, 0),
    gsSP1Triangle(6, 1, 0, 0),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(gLinkChildSkinTLUT),
    gsDPLoadTextureBlock(gLinkChildEarTex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x003C, 0x003C),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPDisplayList(0x0C000000),
    gsSP2Triangles(9, 10, 11, 0, 9, 11, 12, 0),
    gsSP2Triangles(13, 9, 12, 0, 10, 14, 15, 0),
    gsSP2Triangles(15, 16, 10, 0, 10, 16, 11, 0),
    gsSP2Triangles(17, 18, 15, 0, 14, 17, 15, 0),
    gsSP2Triangles(13, 12, 18, 0, 17, 13, 18, 0),
    gsSPEndDisplayList(),
};

Gfx gLinkChildRightShinNearDL[] = {
    gsSPMatrix(0x0D000040, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPVertex(&object_link_childVtx_01C978[36], 5, 0),
    gsSPMatrix(0x0D000080, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(gLinkChildSkinTLUT),
    gsDPLoadTextureBlock(gLinkChildEarTex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x003C, 0x003C),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPDisplayList(0x0C000000),
    gsSPVertex(&object_link_childVtx_01C978[41], 15, 5),
    gsSP2Triangles(5, 0, 6, 0, 7, 1, 3, 0),
    gsSP2Triangles(0, 8, 9, 0, 0, 10, 2, 0),
    gsSP2Triangles(1, 11, 12, 0, 3, 2, 13, 0),
    gsSP2Triangles(2, 14, 15, 0, 16, 0, 4, 0),
    gsSP2Triangles(17, 18, 1, 0, 4, 1, 19, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(gLinkChildBeltTLUT),
    gsDPLoadTextureBlock(gLinkChildBootTex, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x007C, 0x007C),
    gsSPVertex(&object_link_childVtx_01C978[56], 28, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 2, 1, 0),
    gsSP2Triangles(4, 0, 5, 0, 1, 0, 4, 0),
    gsSP2Triangles(6, 7, 8, 0, 3, 6, 8, 0),
    gsSP2Triangles(9, 10, 11, 0, 8, 7, 9, 0),
    gsSP2Triangles(12, 2, 3, 0, 8, 11, 12, 0),
    gsSP2Triangles(12, 3, 8, 0, 13, 4, 14, 0),
    gsSP2Triangles(14, 4, 15, 0, 11, 8, 9, 0),
    gsSP2Triangles(4, 5, 16, 0, 6, 3, 1, 0),
    gsSP2Triangles(17, 9, 7, 0, 6, 1, 13, 0),
    gsSP2Triangles(4, 16, 15, 0, 13, 1, 4, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(gLinkChildSkinTLUT),
    gsDPLoadTextureBlock(gLinkChildEarTex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x003C, 0x003C),
    gsSP2Triangles(18, 19, 20, 0, 21, 18, 20, 0),
    gsSP2Triangles(22, 23, 24, 0, 25, 26, 22, 0),
    gsSP2Triangles(24, 27, 22, 0, 26, 19, 18, 0),
    gsSP2Triangles(19, 26, 25, 0, 24, 23, 20, 0),
    gsSP2Triangles(22, 27, 25, 0, 21, 20, 23, 0),
    gsSPEndDisplayList(),
};

Gfx gLinkChildRightFootNearDL[] = {
    gsSPMatrix(0x0D000080, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPVertex(object_link_childVtx_01C978, 5, 0),
    gsSPMatrix(0x0D0000C0, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(gLinkChildBeltTLUT),
    gsDPLoadTextureBlock(gLinkChildLowerBootTex, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x007C, 0x007C),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPDisplayList(0x0C000000),
    gsSPVertex(&object_link_childVtx_01C978[5], 19, 5),
    gsSP2Triangles(5, 0, 4, 0, 6, 7, 1, 0),
    gsSP2Triangles(8, 1, 0, 0, 4, 3, 9, 0),
    gsSP2Triangles(4, 10, 11, 0, 0, 12, 13, 0),
    gsSP2Triangles(2, 1, 14, 0, 15, 16, 1, 0),
    gsSP2Triangles(17, 18, 3, 0, 19, 3, 2, 0),
    gsSP2Triangles(20, 21, 2, 0, 4, 22, 23, 0),
    gsSPVertex(&object_link_childVtx_01C978[24], 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 0, 2, 0),
    gsSP2Triangles(3, 4, 5, 0, 6, 7, 8, 0),
    gsSP2Triangles(9, 6, 8, 0, 9, 10, 5, 0),
    gsSP2Triangles(4, 3, 7, 0, 3, 2, 7, 0),
    gsSP2Triangles(9, 11, 6, 0, 11, 9, 5, 0),
    gsSP2Triangles(5, 4, 11, 0, 8, 10, 9, 0),
    gsSP2Triangles(6, 11, 4, 0, 7, 6, 4, 0),
    gsSP1Triangle(8, 7, 2, 0),
    gsSPEndDisplayList(),
};

Gfx gLinkChildLeftThighNearDL[] = {
    gsSPMatrix(0x0D000000, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPVertex(&object_link_childVtx_01C978[218], 10, 0),
    gsSPMatrix(0x0D000100, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, ENVIRONMENT, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gLinkChildWaistTex, G_IM_FMT_I, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x007C, 0x007C),
    gsDPSetPrimColor(0, 0x80, 80, 188, 8, 255),
    gsSPClearGeometryMode(G_CULL_BOTH),
    gsSPVertex(&object_link_childVtx_01C978[228], 19, 10),
    gsSP2Triangles(10, 11, 8, 0, 0, 12, 6, 0),
    gsSP2Triangles(13, 5, 4, 0, 14, 4, 15, 0),
    gsSP2Triangles(9, 3, 2, 0, 9, 2, 16, 0),
    gsSP2Triangles(17, 18, 2, 0, 19, 2, 1, 0),
    gsSP2Triangles(1, 5, 20, 0, 21, 22, 4, 0),
    gsSP2Triangles(23, 4, 7, 0, 24, 25, 7, 0),
    gsSP2Triangles(26, 27, 1, 0, 8, 9, 28, 0),
    gsSPDisplayList(0x0C000000),
    gsSPVertex(&object_link_childVtx_01C978[247], 1, 10),
    gsSP1Triangle(7, 6, 10, 0),
    gsSPClearGeometryMode(G_CULL_BOTH),
    gsSPVertex(&object_link_childVtx_01C978[248], 19, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(3, 5, 6, 0, 6, 5, 7, 0),
    gsSP2Triangles(6, 7, 8, 0, 2, 1, 4, 0),
    gsSP1Triangle(2, 4, 3, 0),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(gLinkChildSkinTLUT),
    gsDPLoadTextureBlock(gLinkChildEarTex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x003C, 0x003C),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPDisplayList(0x0C000000),
    gsSP2Triangles(9, 10, 11, 0, 12, 9, 11, 0),
    gsSP2Triangles(12, 11, 13, 0, 14, 15, 10, 0),
    gsSP2Triangles(10, 16, 14, 0, 9, 16, 10, 0),
    gsSP2Triangles(14, 17, 18, 0, 14, 18, 15, 0),
    gsSP2Triangles(17, 12, 13, 0, 17, 13, 18, 0),
    gsSPEndDisplayList(),
};

Gfx gLinkChildLeftShinNearDL[] = {
    gsSPMatrix(0x0D000100, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPVertex(&object_link_childVtx_01C978[170], 5, 0),
    gsSPMatrix(0x0D000140, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(gLinkChildSkinTLUT),
    gsDPLoadTextureBlock(gLinkChildEarTex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x003C, 0x003C),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPDisplayList(0x0C000000),
    gsSPVertex(&object_link_childVtx_01C978[175], 15, 5),
    gsSP2Triangles(5, 0, 6, 0, 3, 1, 7, 0),
    gsSP2Triangles(2, 8, 9, 0, 2, 10, 0, 0),
    gsSP2Triangles(11, 12, 1, 0, 13, 2, 3, 0),
    gsSP2Triangles(14, 15, 2, 0, 4, 0, 16, 0),
    gsSP2Triangles(1, 17, 18, 0, 19, 1, 4, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(gLinkChildBeltTLUT),
    gsDPLoadTextureBlock(gLinkChildBootTex, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x007C, 0x007C),
    gsSPVertex(&object_link_childVtx_01C978[190], 28, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 0, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 7, 2, 1, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 3, 0),
    gsSP2Triangles(11, 4, 12, 0, 12, 9, 8, 0),
    gsSP2Triangles(3, 0, 13, 0, 13, 11, 8, 0),
    gsSP2Triangles(8, 3, 13, 0, 14, 7, 15, 0),
    gsSP2Triangles(16, 6, 17, 0, 12, 8, 11, 0),
    gsSP2Triangles(12, 4, 6, 0, 1, 3, 10, 0),
    gsSP2Triangles(9, 12, 16, 0, 15, 1, 10, 0),
    gsSP2Triangles(16, 12, 6, 0, 7, 1, 15, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(gLinkChildSkinTLUT),
    gsDPLoadTextureBlock(gLinkChildEarTex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x003C, 0x003C),
    gsSP2Triangles(18, 19, 20, 0, 18, 20, 21, 0),
    gsSP2Triangles(22, 23, 24, 0, 24, 25, 26, 0),
    gsSP2Triangles(24, 27, 22, 0, 20, 19, 25, 0),
    gsSP2Triangles(26, 25, 19, 0, 18, 23, 22, 0),
    gsSP2Triangles(26, 27, 24, 0, 23, 18, 21, 0),
    gsSPEndDisplayList(),
};

Gfx gLinkChildLeftFootNearDL[] = {
    gsSPMatrix(0x0D000140, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPVertex(&object_link_childVtx_01C978[134], 5, 0),
    gsSPMatrix(0x0D000180, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(gLinkChildBeltTLUT),
    gsDPLoadTextureBlock(gLinkChildLowerBootTex, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x007C, 0x007C),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPDisplayList(0x0C000000),
    gsSPVertex(&object_link_childVtx_01C978[139], 19, 5),
    gsSP2Triangles(4, 0, 5, 0, 0, 1, 6, 0),
    gsSP2Triangles(0, 7, 8, 0, 9, 10, 3, 0),
    gsSP2Triangles(11, 3, 4, 0, 12, 13, 0, 0),
    gsSP2Triangles(14, 1, 2, 0, 1, 15, 16, 0),
    gsSP2Triangles(2, 3, 17, 0, 2, 18, 19, 0),
    gsSP2Triangles(2, 20, 21, 0, 22, 23, 4, 0),
    gsSPVertex(&object_link_childVtx_01C978[158], 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 3, 0, 6, 7, 8, 0),
    gsSP2Triangles(6, 8, 9, 0, 4, 10, 9, 0),
    gsSP2Triangles(7, 3, 5, 0, 7, 0, 3, 0),
    gsSP2Triangles(8, 11, 9, 0, 4, 9, 11, 0),
    gsSP2Triangles(11, 5, 4, 0, 9, 10, 6, 0),
    gsSP2Triangles(5, 11, 8, 0, 5, 8, 7, 0),
    gsSP1Triangle(0, 7, 6, 0),
    gsSPEndDisplayList(),
};

Gfx gLinkChildCollarNearDL[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_OFF),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, ENVIRONMENT, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetPrimColor(0, 0x80, 80, 188, 8, 255),
    gsSPClearGeometryMode(G_CULL_BOTH),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPVertex(&object_link_childVtx_01C978[530], 10, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(4, 3, 6, 0, 2, 4, 6, 0),
    gsSP2Triangles(7, 5, 4, 0, 8, 5, 7, 0),
    gsSP2Triangles(0, 9, 1, 0, 0, 2, 6, 0),
    gsSPEndDisplayList(),
};

Gfx gLinkChildTorsoNearDL[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(gLinkChildSkinTLUT),
    gsDPLoadTextureBlock(gLinkChildEarTex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x003C, 0x003C),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsSPDisplayList(0x0C000000),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPVertex(object_link_childVtx_01FE08, 10, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 4, 3, 0, 0, 7, 8, 0),
    gsSP2Triangles(0, 8, 9, 0, 9, 8, 5, 0),
    gsSP2Triangles(2, 7, 0, 0, 1, 3, 2, 0),
    gsSP2Triangles(5, 4, 9, 0, 6, 3, 1, 0),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, ENVIRONMENT, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gLinkTunic2Tex, G_IM_FMT_I, G_IM_SIZ_8b, 16, 32, 0, G_TX_MIRROR | G_TX_CLAMP, G_TX_NOMIRROR |
                         G_TX_CLAMP, 4, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x007C, 0x007C),
    gsDPSetPrimColor(0, 0x80, 80, 188, 8, 255),
    gsSPVertex(&object_link_childVtx_01FE08[10], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsSP2Triangles(4, 12, 0, 0, 13, 14, 15, 0),
    gsSP2Triangles(7, 16, 14, 0, 17, 18, 6, 0),
    gsSP2Triangles(8, 13, 19, 0, 8, 20, 21, 0),
    gsSP2Triangles(22, 17, 21, 0, 1, 17, 22, 0),
    gsSP2Triangles(23, 19, 24, 0, 19, 23, 25, 0),
    gsSP2Triangles(25, 26, 20, 0, 20, 8, 25, 0),
    gsSP2Triangles(9, 14, 16, 0, 27, 16, 28, 0),
    gsSP2Triangles(29, 27, 28, 0, 10, 0, 12, 0),
    gsSP2Triangles(10, 12, 30, 0, 29, 28, 18, 0),
    gsSP2Triangles(18, 17, 1, 0, 10, 30, 31, 0),
    gsSP2Triangles(16, 18, 28, 0, 0, 29, 1, 0),
    gsSP2Triangles(10, 9, 27, 0, 3, 12, 4, 0),
    gsSPVertex(&object_link_childVtx_01FE08[42], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 4, 0),
    gsSP2Triangles(1, 4, 2, 0, 5, 6, 7, 0),
    gsSP2Triangles(5, 7, 8, 0, 9, 10, 11, 0),
    gsSP2Triangles(9, 11, 12, 0, 13, 14, 15, 0),
    gsSP2Triangles(16, 17, 7, 0, 18, 2, 19, 0),
    gsSP2Triangles(20, 13, 15, 0, 21, 22, 4, 0),
    gsSP2Triangles(21, 23, 22, 0, 24, 25, 26, 0),
    gsSP2Triangles(24, 27, 9, 0, 28, 29, 17, 0),
    gsSP2Triangles(30, 31, 8, 0, 7, 14, 16, 0),
    gsSP2Triangles(8, 17, 30, 0, 25, 12, 5, 0),
    gsSP2Triangles(6, 11, 15, 0, 2, 18, 0, 0),
    gsSP1Triangle(0, 20, 10, 0),
    gsSPEndDisplayList(),
};

Gfx gLinkChildHeadNearDL[] = {
    gsSPMatrix(0x0D000440, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPVertex(&object_link_childVtx_01C978[347], 5, 0),
    gsSPMatrix(0x0D0001C0, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(gLinkChildSkinTLUT),
    gsDPLoadTextureBlock(0x08000000, G_IM_FMT_CI, G_IM_SIZ_8b, 64, 32, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR |
                         G_TX_CLAMP, 6, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x00FC, 0x007C),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPDisplayList(0x0C000000),
    gsSPVertex(&object_link_childVtx_01C978[352], 24, 5),
    gsSP2Triangles(5, 0, 1, 0, 6, 7, 3, 0),
    gsSP2Triangles(8, 9, 2, 0, 10, 11, 1, 0),
    gsSP2Triangles(12, 1, 3, 0, 13, 4, 2, 0),
    gsSP2Triangles(2, 14, 15, 0, 2, 0, 16, 0),
    gsSP2Triangles(1, 17, 18, 0, 3, 4, 19, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gLinkHairTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 16, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR
                         | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x007C, 0x003C),
    gsSP2Triangles(20, 21, 22, 0, 23, 21, 20, 0),
    gsSP2Triangles(24, 22, 21, 0, 25, 26, 27, 0),
    gsSP2Triangles(23, 20, 28, 0, 28, 25, 27, 0),
    gsSP1Triangle(28, 27, 23, 0),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, ENVIRONMENT, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gLinkTunic3Tex, G_IM_FMT_I, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR |
                         G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x003C, 0x003C),
    gsDPSetPrimColor(0, 0x80, 80, 188, 8, 255),
    gsSPVertex(&object_link_childVtx_01C978[376], 18, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 3, 0, 0),
    gsSP2Triangles(2, 4, 3, 0, 1, 0, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 1, 6, 9, 0),
    gsSP2Triangles(4, 2, 9, 0, 8, 4, 9, 0),
    gsSP2Triangles(2, 1, 9, 0, 6, 8, 9, 0),
    gsSP2Triangles(10, 3, 4, 0, 3, 10, 11, 0),
    gsSP2Triangles(12, 11, 10, 0, 10, 13, 12, 0),
    gsSP2Triangles(14, 15, 13, 0, 16, 14, 17, 0),
    gsSP2Triangles(17, 8, 7, 0, 7, 16, 17, 0),
    gsSP2Triangles(3, 11, 0, 0, 13, 15, 12, 0),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(gLinkChildSkinTLUT),
    gsDPLoadTextureBlock(0x08000000, G_IM_FMT_CI, G_IM_SIZ_8b, 64, 32, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR |
                         G_TX_CLAMP, 6, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x00FC, 0x007C),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPVertex(&object_link_childVtx_01C978[394], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsSP2Triangles(11, 6, 9, 0, 8, 9, 6, 0),
    gsSP2Triangles(12, 7, 6, 0, 13, 1, 6, 0),
    gsSP2Triangles(14, 15, 16, 0, 16, 10, 14, 0),
    gsSP2Triangles(17, 15, 14, 0, 16, 18, 10, 0),
    gsSP2Triangles(18, 19, 10, 0, 15, 17, 20, 0),
    gsSP2Triangles(21, 15, 22, 0, 0, 23, 12, 0),
    gsSP2Triangles(24, 25, 26, 0, 16, 15, 25, 0),
    gsSP2Triangles(25, 24, 16, 0, 27, 21, 28, 0),
    gsSP2Triangles(25, 29, 30, 0, 29, 31, 30, 0),
    gsSP1Triangle(24, 18, 16, 0),
    gsSPVertex(&object_link_childVtx_01C978[426], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSP2Triangles(4, 3, 0, 0, 2, 5, 0, 0),
    gsSP2Triangles(1, 3, 6, 0, 7, 8, 9, 0),
    gsSP2Triangles(2, 1, 9, 0, 10, 7, 9, 0),
    gsSP2Triangles(11, 12, 13, 0, 14, 15, 16, 0),
    gsSP2Triangles(8, 2, 9, 0, 17, 18, 19, 0),
    gsSP2Triangles(18, 20, 19, 0, 21, 22, 23, 0),
    gsSP2Triangles(7, 24, 25, 0, 26, 25, 24, 0),
    gsSP2Triangles(27, 28, 29, 0, 29, 28, 7, 0),
    gsSP2Triangles(26, 22, 21, 0, 19, 20, 30, 0),
    gsSPVertex(&object_link_childVtx_01C978[457], 10, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 4, 9, 5, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gLinkHairTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 16, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR
                         | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x003C, 0x003C),
    gsSPVertex(&object_link_childVtx_01C978[467], 23, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 3, 0, 0),
    gsSP2Triangles(4, 5, 2, 0, 6, 7, 8, 0),
    gsSP2Triangles(5, 3, 2, 0, 5, 4, 9, 0),
    gsSP2Triangles(10, 5, 9, 0, 9, 11, 12, 0),
    gsSP2Triangles(13, 14, 15, 0, 16, 15, 14, 0),
    gsSP2Triangles(17, 6, 18, 0, 19, 9, 12, 0),
    gsSP2Triangles(20, 21, 18, 0, 5, 10, 3, 0),
    gsSP2Triangles(6, 20, 18, 0, 19, 10, 9, 0),
    gsSP2Triangles(7, 6, 17, 0, 4, 11, 9, 0),
    gsSP1Triangle(22, 6, 8, 0),
    gsSPVertex(&object_link_childVtx_01C978[490], 29, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 7, 9, 8, 0),
    gsSP2Triangles(10, 0, 2, 0, 11, 12, 13, 0),
    gsSP2Triangles(7, 14, 15, 0, 7, 15, 9, 0),
    gsSP2Triangles(16, 13, 12, 0, 6, 8, 17, 0),
    gsSP2Triangles(18, 19, 0, 0, 10, 18, 0, 0),
    gsSP2Triangles(16, 19, 13, 0, 19, 18, 13, 0),
    gsSP2Triangles(19, 1, 0, 0, 20, 6, 17, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(gLinkChildSkinTLUT),
    gsDPLoadTextureBlock(gLinkChildEarTex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x003C, 0x003C),
    gsSP2Triangles(21, 22, 23, 0, 21, 24, 22, 0),
    gsSP2Triangles(25, 26, 27, 0, 28, 26, 25, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(gLinkChildSkinTLUT),
    gsDPLoadTextureBlock(0x09000000, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR |
                         G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x007C, 0x007C),
    gsSPVertex(&object_link_childVtx_01C978[519], 11, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 4, 0),
    gsSP2Triangles(3, 0, 2, 0, 3, 2, 5, 0),
    gsSP2Triangles(5, 2, 6, 0, 1, 7, 6, 0),
    gsSP1Triangle(2, 1, 6, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(gLinkChildSkinTLUT),
    gsDPLoadTextureBlock(gLinkChildNoseTex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x003C, 0x003C),
    gsSP1Triangle(8, 9, 10, 0),
    gsSPEndDisplayList(),
};

Gfx gLinkChildHatNearDL[] = {
    gsSPMatrix(0x0D0001C0, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPVertex(&object_link_childVtx_01C978[309], 6, 0),
    gsSPMatrix(0x0D000200, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, ENVIRONMENT, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gLinkTunic3Tex, G_IM_FMT_I, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR |
                         G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x003C, 0x003C),
    gsDPSetPrimColor(0, 0x80, 80, 188, 8, 255),
    gsSPDisplayList(0x0C000000),
    gsSPVertex(&object_link_childVtx_01C978[315], 20, 6),
    gsSP2Triangles(6, 7, 4, 0, 2, 1, 8, 0),
    gsSP2Triangles(9, 10, 1, 0, 3, 11, 12, 0),
    gsSP2Triangles(0, 4, 13, 0, 14, 1, 0, 0),
    gsSP2Triangles(15, 16, 0, 0, 17, 3, 5, 0),
    gsSP2Triangles(0, 18, 19, 0, 20, 21, 2, 0),
    gsSP2Triangles(22, 4, 3, 0, 5, 2, 23, 0),
    gsSP1Triangle(24, 25, 5, 0),
    gsSPVertex(&object_link_childVtx_01C978[335], 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 1, 4, 0),
    gsSP2Triangles(0, 5, 6, 0, 1, 0, 7, 0),
    gsSP2Triangles(5, 8, 6, 0, 9, 10, 4, 0),
    gsSP2Triangles(1, 7, 4, 0, 6, 9, 4, 0),
    gsSP2Triangles(2, 1, 3, 0, 6, 7, 0, 0),
    gsSP2Triangles(0, 11, 5, 0, 6, 8, 9, 0),
    gsSP2Triangles(4, 7, 6, 0, 4, 10, 3, 0),
    gsSP1Triangle(2, 11, 0, 0),
    gsSPEndDisplayList(),
};

Gfx gLinkChildRightShoulderNearDL[] = {
    gsSPMatrix(0x0D000440, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPVertex(&object_link_childVtx_01F528[34], 6, 0),
    gsSPMatrix(0x0D000340, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, ENVIRONMENT, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gLinkTunic1Tex, G_IM_FMT_I, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR |
                         G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x003C, 0x003C),
    gsDPSetPrimColor(0, 0x80, 80, 188, 8, 255),
    gsSPDisplayList(0x0C000000),
    gsSPVertex(&object_link_childVtx_01F528[40], 18, 6),
    gsSP2Triangles(6, 1, 7, 0, 8, 3, 5, 0),
    gsSP2Triangles(2, 9, 10, 0, 5, 4, 11, 0),
    gsSP2Triangles(2, 1, 12, 0, 13, 0, 3, 0),
    gsSP2Triangles(0, 14, 1, 0, 3, 15, 16, 0),
    gsSP2Triangles(3, 17, 18, 0, 19, 4, 2, 0),
    gsSP2Triangles(20, 4, 21, 0, 22, 23, 2, 0),
    gsSPVertex(&object_link_childVtx_01F528[58], 22, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSP2Triangles(2, 4, 0, 0, 5, 6, 7, 0),
    gsSP2Triangles(4, 2, 8, 0, 9, 2, 1, 0),
    gsSP1Triangle(1, 3, 10, 0),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(gLinkChildSkinTLUT),
    gsDPLoadTextureBlock(gLinkChildEarTex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x003C, 0x003C),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSP2Triangles(11, 12, 13, 0, 14, 15, 16, 0),
    gsSP2Triangles(15, 17, 16, 0, 17, 15, 18, 0),
    gsSP2Triangles(13, 19, 11, 0, 14, 16, 12, 0),
    gsSP2Triangles(20, 18, 19, 0, 13, 12, 21, 0),
    gsSP2Triangles(21, 12, 16, 0, 19, 13, 20, 0),
    gsSP2Triangles(12, 11, 14, 0, 18, 20, 17, 0),
    gsSPEndDisplayList(),
};

Gfx gLinkChildRightForearmNearDL[] = {
    gsSPMatrix(0x0D000340, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPVertex(object_link_childVtx_01F528, 5, 0),
    gsSPMatrix(0x0D000380, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(gLinkChildSkinTLUT),
    gsDPLoadTextureBlock(gLinkChildEarTex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x003C, 0x003C),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPDisplayList(0x0C000000),
    gsSPVertex(&object_link_childVtx_01F528[5], 17, 5),
    gsSP2Triangles(5, 4, 1, 0, 1, 2, 6, 0),
    gsSP2Triangles(7, 8, 0, 0, 1, 9, 10, 0),
    gsSP2Triangles(0, 11, 12, 0, 0, 13, 14, 0),
    gsSP2Triangles(15, 2, 3, 0, 16, 3, 17, 0),
    gsSP2Triangles(0, 4, 18, 0, 19, 3, 0, 0),
    gsSP1Triangle(20, 21, 1, 0),
    gsSPVertex(&object_link_childVtx_01F528[22], 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 0, 0, 4, 0, 3, 0),
    gsSP2Triangles(2, 1, 6, 0, 2, 6, 7, 0),
    gsSP2Triangles(8, 9, 5, 0, 8, 5, 4, 0),
    gsSP2Triangles(10, 3, 2, 0, 10, 2, 11, 0),
    gsSP2Triangles(6, 9, 8, 0, 6, 8, 7, 0),
    gsSP2Triangles(11, 2, 7, 0, 6, 1, 0, 0),
    gsSP2Triangles(6, 0, 5, 0, 6, 5, 9, 0),
    gsSPEndDisplayList(),
};

Gfx gLinkChildLeftShoulderNearDL[] = {
    gsSPMatrix(0x0D000440, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPVertex(&object_link_childVtx_01EDA8[34], 6, 0),
    gsSPMatrix(0x0D000280, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, ENVIRONMENT, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gLinkTunic1Tex, G_IM_FMT_I, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR |
                         G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x003C, 0x003C),
    gsDPSetPrimColor(0, 0x80, 80, 188, 8, 255),
    gsSPDisplayList(0x0C000000),
    gsSPVertex(&object_link_childVtx_01EDA8[40], 20, 6),
    gsSP2Triangles(6, 1, 7, 0, 5, 3, 8, 0),
    gsSP2Triangles(9, 10, 2, 0, 11, 4, 5, 0),
    gsSP2Triangles(2, 12, 13, 0, 2, 14, 15, 0),
    gsSP2Triangles(3, 0, 16, 0, 1, 17, 0, 0),
    gsSP2Triangles(18, 19, 3, 0, 20, 21, 3, 0),
    gsSP2Triangles(2, 4, 22, 0, 23, 4, 24, 0),
    gsSP1Triangle(25, 1, 2, 0),
    gsSPVertex(&object_link_childVtx_01EDA8[60], 21, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(2, 4, 0, 0, 5, 6, 7, 0),
    gsSP2Triangles(8, 0, 4, 0, 1, 0, 9, 0),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(gLinkChildSkinTLUT),
    gsDPLoadTextureBlock(gLinkChildEarTex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x003C, 0x003C),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSP2Triangles(10, 11, 12, 0, 13, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 10, 17, 0),
    gsSP2Triangles(12, 17, 10, 0, 15, 19, 13, 0),
    gsSP2Triangles(14, 16, 18, 0, 19, 12, 11, 0),
    gsSP2Triangles(16, 14, 20, 0, 20, 14, 13, 0),
    gsSP2Triangles(11, 13, 19, 0, 18, 15, 14, 0),
    gsSPEndDisplayList(),
};

Gfx gLinkChildLeftForearmNearDL[] = {
    gsSPMatrix(0x0D000280, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPVertex(object_link_childVtx_01EDA8, 5, 0),
    gsSPMatrix(0x0D0002C0, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(gLinkChildSkinTLUT),
    gsDPLoadTextureBlock(gLinkChildEarTex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x003C, 0x003C),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPDisplayList(0x0C000000),
    gsSPVertex(&object_link_childVtx_01EDA8[5], 17, 5),
    gsSP2Triangles(1, 4, 5, 0, 6, 2, 1, 0),
    gsSP2Triangles(0, 7, 8, 0, 9, 10, 1, 0),
    gsSP2Triangles(11, 12, 0, 0, 13, 3, 2, 0),
    gsSP2Triangles(14, 2, 15, 0, 16, 4, 0, 0),
    gsSP2Triangles(0, 3, 17, 0, 1, 18, 19, 0),
    gsSP1Triangle(1, 20, 21, 0),
    gsSPVertex(&object_link_childVtx_01EDA8[22], 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(0, 3, 4, 0, 0, 4, 5, 0),
    gsSP2Triangles(6, 7, 2, 0, 6, 2, 1, 0),
    gsSP2Triangles(5, 4, 8, 0, 5, 8, 9, 0),
    gsSP2Triangles(10, 0, 5, 0, 11, 1, 0, 0),
    gsSP2Triangles(11, 0, 10, 0, 6, 9, 8, 0),
    gsSP2Triangles(6, 8, 7, 0, 7, 8, 4, 0),
    gsSP2Triangles(7, 4, 3, 0, 7, 3, 2, 0),
    gsSPEndDisplayList(),
};

Vtx object_link_childVtx_022148[] = {
#include "assets/objects/object_link_child/object_link_childVtx_022148.vtx.inc"
};

Gfx gLinkChildSlingshotStringDL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0, 0, 0, G_TX_RENDERTILE, G_OFF),
    gsDPSetCombineLERP(SHADE, 0, PRIMITIVE, 0, 0, 0, 0, 1, 0, 0, 0, COMBINED, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_CULL_BACK | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 255, 205, 255),
    gsSPVertex(object_link_childVtx_022148, 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(3, 4, 5, 0, 3, 5, 0, 0),
    gsSPEndDisplayList(),
};

Vtx object_link_childVtx_022208[] = {
#include "assets/objects/object_link_child/object_link_childVtx_022208.vtx.inc"
};

Gfx gLinkChildDekuShieldDL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gLinkChildDekuShieldFrontTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, G_TX_NOMIRROR |
                         G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_LIGHTING),
    gsSPDisplayList(0x0C000000),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(object_link_childVtx_022208, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(3, 5, 2, 0, 6, 2, 7, 0),
    gsSP2Triangles(1, 8, 9, 0, 10, 11, 12, 0),
    gsSP2Triangles(13, 14, 15, 0, 13, 15, 16, 0),
    gsSP2Triangles(17, 18, 19, 0, 11, 10, 20, 0),
    gsSP2Triangles(21, 22, 23, 0, 23, 22, 24, 0),
    gsSP2Triangles(25, 26, 20, 0, 20, 10, 25, 0),
    gsSP1Triangle(27, 28, 29, 0),
    gsSPVertex(&object_link_childVtx_022208[30], 9, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(3, 2, 4, 0, 3, 4, 5, 0),
    gsSP1Triangle(6, 7, 8, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gLinkChildDekuShieldBackTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&object_link_childVtx_022208[39], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 5, 4, 0, 1, 0, 6, 0),
    gsSP2Triangles(4, 1, 6, 0, 7, 4, 3, 0),
    gsSPEndDisplayList(),
};

Mtx gLinkChildDekuShieldMtx = { 
    65535      , 0          , -1         , -65536     , 
    0          , -65536     , 39387036   , 3276801    , 
    565445181  , 0          , -248054262 , 7405568    , 
    -44818011  , -250347520 , 0          , 0          , 
};

Gfx gLinkChildDekuShieldWithMatrixDL[] = {
    gsSPMatrix(&gLinkChildDekuShieldMtx, G_MTX_NOPUSH | G_MTX_MUL | G_MTX_MODELVIEW),
    gsSPDisplayList(gLinkChildDekuShieldDL),
    gsSPEndDisplayList(),
};

u64 gLinkChildSpookyMaskTex[] = {
#include "assets/objects/object_link_child/spooky_mask.ia16.inc.c"
};

u64 gLinkChildKeatonMaskEyeBrowTex[] = {
#include "assets/objects/object_link_child/keaton_mask_eye_brow.rgba16.inc.c"
};

u64 gLinkChildKeatonMaskEarTex[] = {
#include "assets/objects/object_link_child/keaton_mask_ear.rgba16.inc.c"
};

u64 gLinkChildSkullMaskEyeTex[] = {
#include "assets/objects/object_link_child/skull_mask_eye.rgba16.inc.c"
};

u64 gLinkChildMaskOfTruthTex[] = {
#include "assets/objects/object_link_child/mask_of_truth.rgba16.inc.c"
};

u64 gLinkChildMaskOfTruthCurveTex[] = {
#include "assets/objects/object_link_child/mask_of_truth_curves.rgba16.inc.c"
};

u64 gLinkChildGoronMaskMouthTex[] = {
#include "assets/objects/object_link_child/goron_mask_mouth.rgba16.inc.c"
};

u64 gLinkChildGoronMaskEyeTex[] = {
#include "assets/objects/object_link_child/goron_mask_eye.rgba16.inc.c"
};

u64 gLinkChildGoronMaskNoseTex[] = {
#include "assets/objects/object_link_child/goron_mask_nose.rgba16.inc.c"
};

u64 gLinkChildGoronMaskHairTex[] = {
#include "assets/objects/object_link_child/goron_mask_hair.rgba16.inc.c"
};

u64 gLinkChildSkullMaskTeethTex[] = {
#include "assets/objects/object_link_child/skull_mask_teeth.rgba16.inc.c"
};

u64 gLinkChildGoronMaskEarTex[] = {
#include "assets/objects/object_link_child/goron_mask_ear.rgba16.inc.c"
};

u64 gLinkChildZoraMaskEyeBoarderTex[] = {
#include "assets/objects/object_link_child/zora_mask_eye_boarder.rgba16.inc.c"
};

u64 gLinkChildZoraMaskEarTex[] = {
#include "assets/objects/object_link_child/zora_mask_ear.rgba16.inc.c"
};

u64 gLinkChildSkullMaskNoseTex[] = {
#include "assets/objects/object_link_child/skull_mask_nose.rgba16.inc.c"
};

u64 gLinkChildZoraMaskEyeTex[] = {
#include "assets/objects/object_link_child/zora_mask_eye.rgba16.inc.c"
};

u64 gLinkChildZoraMaskMouthTex[] = {
#include "assets/objects/object_link_child/zora_mask_mouth.rgba16.inc.c"
};

u64 gLinkChildGerudoMaskEyeTex[] = {
#include "assets/objects/object_link_child/gerudo_mask_eye.rgba16.inc.c"
};

u64 gLinkChildGerudoMaskMouthTex[] = {
#include "assets/objects/object_link_child/gerudo_mask_mouth.rgba16.inc.c"
};

u64 gLinkChildGerudoMaskHairTex[] = {
#include "assets/objects/object_link_child/gerudo_mask_hair.rgba16.inc.c"
};

u64 gLinkChildGerudoMaskNoseTex[] = {
#include "assets/objects/object_link_child/gerudo_mask_nose.rgba16.inc.c"
};

Vtx object_link_childVtx_029220[] = {
#include "assets/objects/object_link_child/object_link_childVtx_029220.vtx.inc"
};

Gfx gLinkChildSkullMaskDL[] = {
    gsSPMatrix(0x0D0001C0, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gLinkChildSkullMaskTeethTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 8, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 3, 3, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_CULL_BACK | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(object_link_childVtx_029220, 15, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 3, 4, 0),
    gsSP2Triangles(1, 3, 2, 0, 5, 6, 7, 0),
    gsSP2Triangles(6, 8, 7, 0, 9, 5, 7, 0),
    gsSP2Triangles(10, 11, 12, 0, 10, 12, 13, 0),
    gsSP1Triangle(14, 13, 12, 0),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_CULL_BACK),
    gsSPVertex(&object_link_childVtx_029220[15], 21, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 5, 4, 9, 0),
    gsSP2Triangles(5, 9, 10, 0, 3, 5, 11, 0),
    gsSP2Triangles(3, 11, 12, 0, 13, 4, 3, 0),
    gsSP2Triangles(13, 3, 14, 0, 15, 1, 0, 0),
    gsSP2Triangles(15, 0, 16, 0, 17, 0, 2, 0),
    gsSP2Triangles(17, 2, 18, 0, 2, 1, 19, 0),
    gsSP1Triangle(2, 19, 20, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gLinkChildSkullMaskNoseTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 8, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 3, 3, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&object_link_childVtx_029220[36], 7, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSP2Triangles(4, 5, 6, 0, 6, 5, 2, 0),
    gsDPPipeSync(),
    gsSPTexture(0, 0, 0, G_TX_RENDERTILE, G_OFF),
    gsDPSetCombineLERP(SHADE, 0, PRIMITIVE, 0, 0, 0, 0, 1, 0, 0, 0, COMBINED, 0, 0, 0, COMBINED),
    gsSPVertex(&object_link_childVtx_029220[43], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsDPPipeSync(),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gLinkChildSkullMaskEyeTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 16, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsSPVertex(&object_link_childVtx_029220[46], 23, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSP2Triangles(4, 5, 6, 0, 5, 7, 6, 0),
    gsSP2Triangles(8, 9, 4, 0, 8, 10, 9, 0),
    gsSP2Triangles(6, 11, 4, 0, 4, 12, 8, 0),
    gsSP2Triangles(13, 14, 15, 0, 14, 16, 15, 0),
    gsSP2Triangles(14, 17, 16, 0, 14, 13, 18, 0),
    gsSP2Triangles(13, 19, 18, 0, 20, 2, 1, 0),
    gsSP2Triangles(20, 21, 2, 0, 21, 22, 2, 0),
    gsSPEndDisplayList(),
};

Gfx gLinkChildSpookyMaskDL[] = {
    gsSPMatrix(0x0D0001C0, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gLinkChildSpookyMaskTex, G_IM_FMT_IA, G_IM_SIZ_16b, 32, 64, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineMode(G_CC_MODULATEIDECALA_PRIM, G_CC_PASS2),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsSPClearGeometryMode(G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG),
    gsDPSetPrimColor(0, 0, 127, 127, 0, 255),
    gsSPVertex(&object_link_childVtx_029220[69], 17, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(0, 3, 4, 0, 5, 6, 7, 0),
    gsSP2Triangles(5, 7, 8, 0, 5, 8, 9, 0),
    gsSP2Triangles(10, 11, 12, 0, 13, 14, 15, 0),
    gsSP2Triangles(0, 16, 1, 0, 16, 6, 5, 0),
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 0, 127, 64, 0, 255),
    gsSPVertex(&object_link_childVtx_029220[86], 11, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(4, 6, 5, 0, 7, 5, 8, 0),
    gsSP2Triangles(8, 5, 6, 0, 9, 0, 2, 0),
    gsSP2Triangles(2, 7, 10, 0, 2, 10, 9, 0),
    gsSPEndDisplayList(),
};

Gfx gLinkChildKeatonMaskDL[] = {
    gsSPMatrix(0x0D0001C0, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gLinkChildKeatonMaskEyeBrowTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 16, 0, G_TX_NOMIRROR |
                         G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 5, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_CULL_BACK | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&object_link_childVtx_029220[97], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 3, 9, 10, 0),
    gsSP2Triangles(11, 12, 13, 0, 14, 15, 16, 0),
    gsSP2Triangles(17, 18, 19, 0, 12, 1, 0, 0),
    gsSP2Triangles(20, 16, 21, 0, 3, 22, 23, 0),
    gsSP2Triangles(19, 24, 6, 0, 25, 1, 12, 0),
    gsSP2Triangles(24, 19, 11, 0, 13, 26, 11, 0),
    gsSP2Triangles(11, 26, 24, 0, 6, 17, 19, 0),
    gsSP2Triangles(0, 13, 12, 0, 2, 1, 25, 0),
    gsSP2Triangles(18, 17, 8, 0, 2, 27, 0, 0),
    gsSP2Triangles(8, 17, 6, 0, 23, 9, 3, 0),
    gsSP2Triangles(4, 3, 10, 0, 20, 28, 14, 0),
    gsSP2Triangles(14, 16, 20, 0, 29, 30, 31, 0),
    gsSPVertex(&object_link_childVtx_029220[129], 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 1, 0, 0),
    gsSP2Triangles(3, 0, 4, 0, 5, 4, 0, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gLinkChildKeatonMaskEarTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 8, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 3, 3, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&object_link_childVtx_029220[135], 21, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(2, 6, 0, 0, 7, 3, 8, 0),
    gsSP2Triangles(9, 10, 4, 0, 11, 12, 13, 0),
    gsSP2Triangles(13, 14, 11, 0, 12, 15, 13, 0),
    gsSP2Triangles(14, 16, 17, 0, 10, 18, 4, 0),
    gsSP2Triangles(7, 8, 9, 0, 0, 19, 1, 0),
    gsSP2Triangles(2, 20, 6, 0, 4, 18, 5, 0),
    gsSPEndDisplayList(),
};

Gfx gLinkChildMaskOfTruthDL[] = {
    gsSPMatrix(0x0D0001C0, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gLinkChildMaskOfTruthCurveTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 32, 0, G_TX_NOMIRROR |
                         G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 4, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_CULL_BACK | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 235, 255, 205, 255),
    gsSPVertex(&object_link_childVtx_029220[156], 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gLinkChildMaskOfTruthTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsSPVertex(&object_link_childVtx_029220[168], 30, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 7, 8, 0, 0),
    gsSP2Triangles(8, 9, 10, 0, 11, 12, 13, 0),
    gsSP2Triangles(2, 14, 15, 0, 3, 2, 16, 0),
    gsSP2Triangles(1, 10, 14, 0, 14, 2, 1, 0),
    gsSP2Triangles(15, 16, 2, 0, 13, 17, 11, 0),
    gsSP2Triangles(10, 1, 8, 0, 8, 1, 0, 0),
    gsSP2Triangles(6, 18, 4, 0, 19, 20, 21, 0),
    gsSP2Triangles(22, 19, 21, 0, 21, 23, 24, 0),
    gsSP2Triangles(25, 26, 23, 0, 27, 28, 19, 0),
    gsSP2Triangles(29, 19, 22, 0, 28, 25, 20, 0),
    gsSP2Triangles(20, 19, 28, 0, 19, 29, 27, 0),
    gsSP2Triangles(23, 20, 25, 0, 21, 20, 23, 0),
    gsSPEndDisplayList(),
};

Gfx gLinkChildGoronMaskDL[] = {
    gsSPMatrix(0x0D0001C0, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gLinkChildGoronMaskMouthTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 64, 32, 0, G_TX_NOMIRROR |
                         G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 6, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_CULL_BACK | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&object_link_childVtx_029220[198], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 3, 0, 0),
    gsSP2Triangles(2, 1, 4, 0, 5, 6, 0, 0),
    gsSP2Triangles(0, 3, 5, 0, 7, 6, 5, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gLinkChildGoronMaskEyeTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&object_link_childVtx_029220[206], 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 0, 0, 3, 4, 0, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gLinkChildGoronMaskNoseTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 8, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 3, 3, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&object_link_childVtx_029220[212], 15, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 8, 7, 9, 0),
    gsSP2Triangles(2, 10, 11, 0, 12, 13, 14, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gLinkChildGoronMaskHairTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 16, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&object_link_childVtx_029220[227], 9, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 0, 0, 5, 4, 8, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gLinkChildGoronMaskEarTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 8, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 3, 3, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&object_link_childVtx_029220[236], 16, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 3, 4, 0),
    gsSP2Triangles(5, 6, 7, 0, 7, 8, 9, 0),
    gsSP2Triangles(10, 6, 5, 0, 11, 12, 10, 0),
    gsSP2Triangles(13, 10, 5, 0, 10, 13, 11, 0),
    gsSP2Triangles(11, 14, 15, 0, 4, 15, 14, 0),
    gsSP2Triangles(15, 12, 11, 0, 4, 3, 15, 0),
    gsSPEndDisplayList(),
};

Gfx gLinkChildZoraMaskDL[] = {
    gsSPMatrix(0x0D0001C0, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gLinkChildZoraMaskEyeBoarderTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 8, 0, G_TX_NOMIRROR |
                         G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 3, 3, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_CULL_BACK | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&object_link_childVtx_029220[252], 25, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 1, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 7, 8, 0, 0),
    gsSP2Triangles(8, 1, 0, 0, 0, 9, 7, 0),
    gsSP2Triangles(10, 8, 7, 0, 8, 10, 5, 0),
    gsSP2Triangles(11, 12, 13, 0, 3, 13, 12, 0),
    gsSP2Triangles(14, 10, 15, 0, 2, 16, 0, 0),
    gsSP2Triangles(16, 9, 0, 0, 15, 17, 18, 0),
    gsSP2Triangles(12, 19, 3, 0, 19, 12, 11, 0),
    gsSP2Triangles(20, 17, 21, 0, 22, 21, 17, 0),
    gsSP2Triangles(22, 9, 16, 0, 16, 23, 21, 0),
    gsSP2Triangles(16, 21, 22, 0, 24, 20, 4, 0),
    gsSP2Triangles(3, 23, 2, 0, 2, 23, 16, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gLinkChildZoraMaskEarTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&object_link_childVtx_029220[277], 10, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(4, 3, 1, 0, 5, 6, 7, 0),
    gsSP2Triangles(5, 8, 6, 0, 6, 8, 9, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gLinkChildZoraMaskEyeTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&object_link_childVtx_029220[287], 9, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 3, 0, 0),
    gsSP2Triangles(3, 4, 0, 0, 5, 6, 0, 0),
    gsSP2Triangles(0, 7, 5, 0, 0, 8, 7, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gLinkChildZoraMaskMouthTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&object_link_childVtx_029220[296], 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 1, 3, 0),
    gsSP2Triangles(2, 4, 5, 0, 3, 4, 2, 0),
    gsSPEndDisplayList(),
};

Gfx gLinkChildGerudoMaskDL[] = {
    gsSPMatrix(0x0D0001C0, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gLinkChildGerudoMaskEyeTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_CULL_BACK | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&object_link_childVtx_029220[302], 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(0, 5, 4, 0, 0, 2, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsSP2Triangles(10, 9, 8, 0, 9, 6, 8, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gLinkChildGerudoMaskMouthTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 16, 0, G_TX_NOMIRROR |
                         G_TX_WRAP, G_TX_NOMIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&object_link_childVtx_029220[314], 13, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 0, 3, 0),
    gsSP2Triangles(4, 3, 0, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 5, 4, 0, 7, 8, 9, 0),
    gsSP2Triangles(9, 10, 7, 0, 7, 10, 11, 0),
    gsSP1Triangle(12, 9, 8, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gLinkChildGerudoMaskHairTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 16, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&object_link_childVtx_029220[327], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 15, 16, 17, 0),
    gsSP2Triangles(18, 17, 16, 0, 10, 19, 11, 0),
    gsSP2Triangles(20, 21, 22, 0, 23, 24, 25, 0),
    gsSP2Triangles(26, 27, 28, 0, 29, 30, 31, 0),
    gsSPVertex(&object_link_childVtx_029220[359], 29, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 15, 16, 17, 0),
    gsSP2Triangles(18, 19, 20, 0, 21, 10, 9, 0),
    gsSP2Triangles(5, 22, 3, 0, 23, 24, 25, 0),
    gsSP1Triangle(26, 27, 28, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gLinkChildGerudoMaskNoseTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 8, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 3, 3, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&object_link_childVtx_029220[388], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 3, 0, 0),
    gsSP2Triangles(4, 5, 6, 0, 7, 8, 9, 0),
    gsSP2Triangles(10, 7, 11, 0, 12, 10, 13, 0),
    gsSP2Triangles(7, 14, 8, 0, 14, 10, 12, 0),
    gsSP2Triangles(11, 15, 10, 0, 16, 17, 18, 0),
    gsSP2Triangles(7, 10, 14, 0, 16, 19, 20, 0),
    gsSP2Triangles(19, 12, 20, 0, 14, 21, 8, 0),
    gsSP2Triangles(8, 21, 22, 0, 22, 21, 18, 0),
    gsSP2Triangles(23, 24, 25, 0, 25, 24, 26, 0),
    gsSP2Triangles(26, 24, 27, 0, 28, 29, 30, 0),
    gsSP1Triangle(28, 30, 31, 0),
    gsSPVertex(&object_link_childVtx_029220[420], 14, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(1, 6, 7, 0, 8, 1, 0, 0),
    gsSP2Triangles(9, 0, 2, 0, 10, 1, 8, 0),
    gsSP2Triangles(6, 11, 12, 0, 7, 2, 1, 0),
    gsSP1Triangle(13, 9, 2, 0),
    gsSPEndDisplayList(),
};

u64 gLinkChildBunnyHoodEyeTex[] = {
#include "assets/objects/object_link_child/bunny_hood_eye.rgba16.inc.c"
};

u64 gLinkChildBunnyHoodTex[] = {
#include "assets/objects/object_link_child/bunny_hood.rgba16.inc.c"
};

u64 gLinkChildBunnyHoodEarTex[] = {
#include "assets/objects/object_link_child/bunny_hood_ear.rgba16.inc.c"
};

Vtx object_link_childVtx_02C428[] = {
#include "assets/objects/object_link_child/object_link_childVtx_02C428.vtx.inc"
};

Gfx gLinkChildBunnyHoodDL[] = {
    gsSPMatrix(0x0D0001C0, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gLinkChildBunnyHoodEyeTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 16, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x003C, 0x003C),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPSetGeometryMode(G_LIGHTING),
    gsSPClearGeometryMode(G_CULL_BACK),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPVertex(object_link_childVtx_02C428, 25, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsSP2Triangles(12, 2, 13, 0, 12, 4, 3, 0),
    gsSP2Triangles(8, 7, 5, 0, 10, 9, 7, 0),
    gsSP2Triangles(14, 15, 3, 0, 13, 2, 1, 0),
    gsSP2Triangles(2, 16, 0, 0, 7, 6, 10, 0),
    gsSP2Triangles(11, 0, 16, 0, 14, 9, 11, 0),
    gsSP2Triangles(11, 16, 15, 0, 15, 14, 11, 0),
    gsSP2Triangles(17, 18, 19, 0, 19, 20, 17, 0),
    gsSP2Triangles(21, 22, 23, 0, 23, 24, 21, 0),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gLinkChildBunnyHoodTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 32, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 4, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x003C, 0x007C),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPVertex(&object_link_childVtx_02C428[25], 10, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 0, 0),
    gsSP2Triangles(5, 6, 7, 0, 6, 8, 9, 0),
    gsSP2Triangles(0, 2, 3, 0, 9, 7, 6, 0),
    gsSPMatrix(0x0D0001C0, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsSPSetGeometryMode(G_LIGHTING),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPVertex(&object_link_childVtx_02C428[35], 5, 0),
    gsSPMatrix(0x0B000000, G_MTX_NOPUSH | G_MTX_MUL | G_MTX_MODELVIEW),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gLinkChildBunnyHoodEarTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 32, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 4, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x003C, 0x007C),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPSetGeometryMode(G_CULL_BACK),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPVertex(&object_link_childVtx_02C428[40], 26, 5),
    gsSP2Triangles(5, 6, 1, 0, 1, 4, 7, 0),
    gsSP2Triangles(8, 9, 3, 0, 0, 10, 11, 0),
    gsSP2Triangles(3, 2, 12, 0, 13, 2, 0, 0),
    gsSP2Triangles(14, 15, 16, 0, 17, 18, 19, 0),
    gsSP2Triangles(19, 20, 16, 0, 19, 16, 17, 0),
    gsSP1Triangle(16, 20, 14, 0),
    gsSP2Triangles(21, 22, 23, 0, 24, 25, 23, 0),
    gsSP2Triangles(23, 22, 26, 0, 23, 25, 21, 0),
    gsSP2Triangles(23, 27, 24, 0, 25, 24, 28, 0),
    gsSP2Triangles(25, 29, 30, 0, 26, 27, 23, 0),
    gsSP2Triangles(28, 29, 25, 0, 30, 21, 25, 0),
    gsSPMatrix(0x0D0001C0, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsSPSetGeometryMode(G_LIGHTING),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPVertex(&object_link_childVtx_02C428[66], 5, 0),
    gsSPMatrix(0x0B000040, G_MTX_NOPUSH | G_MTX_MUL | G_MTX_MODELVIEW),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gLinkChildBunnyHoodEarTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 32, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 4, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x003C, 0x007C),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPSetGeometryMode(G_CULL_BACK),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPVertex(&object_link_childVtx_02C428[71], 26, 5),
    gsSP2Triangles(1, 5, 6, 0, 7, 4, 1, 0),
    gsSP2Triangles(3, 8, 9, 0, 0, 2, 10, 0),
    gsSP2Triangles(11, 12, 0, 0, 13, 2, 3, 0),
    gsSP2Triangles(14, 15, 16, 0, 17, 18, 19, 0),
    gsSP2Triangles(16, 20, 14, 0, 19, 16, 15, 0),
    gsSP1Triangle(19, 15, 17, 0),
    gsSP2Triangles(21, 22, 23, 0, 24, 25, 23, 0),
    gsSP2Triangles(23, 22, 26, 0, 26, 27, 23, 0),
    gsSP2Triangles(28, 21, 25, 0, 29, 30, 25, 0),
    gsSP2Triangles(23, 25, 21, 0, 23, 27, 24, 0),
    gsSP2Triangles(25, 24, 29, 0, 25, 30, 28, 0),
    gsSPEndDisplayList(),
};

LodLimb gLinkChildRootLimb = { 
    { 0, 2376, 0 }, 0x01, LIMB_DONE,
    { NULL, NULL }
};

LodLimb gLinkChildWaistLimb = { 
    { -4, -104, 0 }, 0x02, 0x09,
    { gLinkChildWaistNearDL, gLinkChildWaistNearDL }
};

LodLimb gLinkChildLowerControlLimb = { 
    { 607, 0, 0 }, 0x03, LIMB_DONE,
    { NULL, NULL }
};

LodLimb gLinkChildRightThighLimb = { 
    { -172, 50, -190 }, 0x04, 0x06,
    { gLinkChildRightThighNearDL, gLinkChildRightThighNearDL }
};

LodLimb gLinkChildRightShinLimb = { 
    { 697, 0, 0 }, 0x05, LIMB_DONE,
    { gLinkChildRightShinNearDL, gLinkChildRightShinNearDL }
};

LodLimb gLinkChildRightFootLimb = { 
    { 825, 5, 11 }, LIMB_DONE, LIMB_DONE,
    { gLinkChildRightFootNearDL, gLinkChildRightFootNearDL }
};

LodLimb gLinkChildLeftThighLimb = { 
    { -170, 57, 192 }, 0x07, LIMB_DONE,
    { gLinkChildLeftThighNearDL, gLinkChildLeftThighNearDL }
};

LodLimb gLinkChildLeftShinLimb = { 
    { 695, 0, 0 }, 0x08, LIMB_DONE,
    { gLinkChildLeftShinNearDL, gLinkChildLeftShinNearDL }
};

LodLimb gLinkChildLeftFootLimb = { 
    { 817, 8, 4 }, LIMB_DONE, LIMB_DONE,
    { gLinkChildLeftFootNearDL, gLinkChildLeftFootNearDL }
};

LodLimb gLinkChildUpperControlLimb = { 
    { 0, -103, -7 }, 0x0A, LIMB_DONE,
    { NULL, NULL }
};

LodLimb gLinkChildHeadLimb = { 
    { 996, -201, -1 }, 0x0B, 0x0C,
    { gLinkChildHeadNearDL, gLinkChildHeadNearDL }
};

LodLimb gLinkChildHatLimb = { 
    { -365, -670, 0 }, LIMB_DONE, LIMB_DONE,
    { gLinkChildHatNearDL, gLinkChildHatNearDL }
};

LodLimb gLinkChildCollarLimb = { 
    { 0, 0, 0 }, LIMB_DONE, 0x0D,
    { gLinkChildCollarNearDL, gLinkChildCollarNearDL }
};

LodLimb gLinkChildLeftshoulderLimb = { 
    { 696, -175, 466 }, 0x0E, 0x10,
    { gLinkChildLeftShoulderNearDL, gLinkChildLeftShoulderNearDL }
};

LodLimb gLinkChildLeftForearmLimb = { 
    { 581, 0, 0 }, 0x0F, LIMB_DONE,
    { gLinkChildLeftForearmNearDL, gLinkChildLeftForearmNearDL }
};

LodLimb gLinkChildLeftHandLimb = { 
    { 514, 0, 0 }, LIMB_DONE, LIMB_DONE,
    { gLinkChildLeftHandNearDL, gLinkChildLeftHandNearDL }
};

LodLimb gLinkChildRightshoulderLimb = { 
    { 696, -175, -466 }, 0x11, 0x13,
    { gLinkChildRightShoulderNearDL, gLinkChildRightShoulderNearDL }
};

LodLimb gLinkChildRightForearmLimb = { 
    { 577, 0, 0 }, 0x12, LIMB_DONE,
    { gLinkChildRightForearmNearDL, gLinkChildRightForearmNearDL }
};

LodLimb gLinkChildRightHandLimb = { 
    { 525, 0, 0 }, LIMB_DONE, LIMB_DONE,
    { gLinkChildRightHandNearDL, gLinkChildRightHandNearDL }
};

LodLimb gLinkChildSwordAndSheathLimb = { 
    { 657, -523, 367 }, LIMB_DONE, 0x14,
    { gLinkChildSwordAndSheathNearDL, gLinkChildSwordAndSheathNearDL }
};

LodLimb gLinkChildTorsoLimb = { 
    { 0, 0, 0 }, LIMB_DONE, LIMB_DONE,
    { gLinkChildTorsoNearDL, gLinkChildTorsoNearDL }
};

void* gLinkChildSkelLimbs[] = {
    &gLinkChildRootLimb,
    &gLinkChildWaistLimb,
    &gLinkChildLowerControlLimb,
    &gLinkChildRightThighLimb,
    &gLinkChildRightShinLimb,
    &gLinkChildRightFootLimb,
    &gLinkChildLeftThighLimb,
    &gLinkChildLeftShinLimb,
    &gLinkChildLeftFootLimb,
    &gLinkChildUpperControlLimb,
    &gLinkChildHeadLimb,
    &gLinkChildHatLimb,
    &gLinkChildCollarLimb,
    &gLinkChildLeftshoulderLimb,
    &gLinkChildLeftForearmLimb,
    &gLinkChildLeftHandLimb,
    &gLinkChildRightshoulderLimb,
    &gLinkChildRightForearmLimb,
    &gLinkChildRightHandLimb,
    &gLinkChildSwordAndSheathLimb,
    &gLinkChildTorsoLimb,
};

FlexSkeletonHeader gLinkChildSkel = { 
    { gLinkChildSkelLimbs, ARRAY_COUNT(gLinkChildSkelLimbs) }, 18
};
