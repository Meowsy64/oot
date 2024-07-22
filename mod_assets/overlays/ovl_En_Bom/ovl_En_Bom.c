#include "ultra64.h"
#include "z64.h"
#include "macros.h"
#include "ovl_En_Bom.h"
#include "assets/misc/link_animetion/link_animetion.h"
#include "assets/objects/gameplay_keep/gameplay_keep.h"

Vtx ovl_En_BomVtx_002160[] = {
#include "assets/overlays/ovl_En_Bom/ovl_En_BomVtx_002160.vtx.inc"
};

u64 gPowderKegFuseTex[] = {
#include "assets/overlays/ovl_En_Bom/powder_keg_fuse.i8.inc.c"
};

Gfx gPowderKegFuseMaterialDL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPClearGeometryMode(G_CULL_BOTH),
    gsSPSetGeometryMode(G_LIGHTING),
    gsDPSetCombineMode(G_CC_MODULATEIDECALA, G_CC_MODULATEI_PRIM2),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gPowderKegFuseTex, G_IM_FMT_I, G_IM_SIZ_8b, 2, 2, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR |
                         G_TX_WRAP, 1, 1, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0, 200, 200, 0, 255),
    gsSPVertex(ovl_En_BomVtx_002160, 4, 0),
    gsSPEndDisplayList(),
};

Gfx gPowderKegFuseModel1DL[] = {
    gsSPVertex(ovl_En_BomVtx_002160, 4, 0),
    gsSP2Triangles(4, 5, 1, 0, 4, 1, 0, 0),
    gsSP2Triangles(6, 7, 3, 0, 6, 3, 2, 0),
    gsSPEndDisplayList(),
};

Gfx gPowderKegFuseModel2DL[] = {
    gsSPVertex(&ovl_En_BomVtx_002160[4], 4, 4),
    gsSP2Triangles(0, 1, 5, 0, 0, 5, 4, 0),
    gsSP2Triangles(2, 3, 7, 0, 2, 7, 6, 0),
    gsSPEndDisplayList(),
};

u64 gPowderKegBarrelTLUT[] = {
#include "assets/overlays/ovl_En_Bom/powder_keg_barrel_tlut.rgba16.inc.c"
};

u64 gPowderKegBarrelTex[] = {
#include "assets/overlays/ovl_En_Bom/powder_keg_barrel.ci8.inc.c"
};

Vtx ovl_En_BomVtx_0028B0[] = {
#include "assets/overlays/ovl_En_Bom/ovl_En_BomVtx_0028B0.vtx.inc"
};

Gfx gPowderKegBarrelDL[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(ENVIRONMENT, 0, TEXEL0, 0, 0, 0, 0, TEXEL0, COMBINED, 0, SHADE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(gPowderKegBarrelTLUT),
    gsDPLoadTextureBlock(gPowderKegBarrelTex, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(ovl_En_BomVtx_0028B0, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 15, 16, 11, 0),
    gsSP2Triangles(17, 18, 19, 0, 0, 20, 21, 0),
    gsSP2Triangles(22, 23, 24, 0, 25, 26, 27, 0),
    gsSP1Triangle(28, 29, 30, 0),
    gsSPVertex(&ovl_En_BomVtx_0028B0[31], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 15, 16, 17, 0),
    gsSP2Triangles(18, 19, 20, 0, 21, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 27, 28, 29, 0),
    gsSPVertex(&ovl_En_BomVtx_0028B0[61], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 8, 9, 6, 0),
    gsSP2Triangles(5, 10, 3, 0, 11, 12, 13, 0),
    gsSP2Triangles(2, 14, 0, 0, 15, 16, 17, 0),
    gsSP2Triangles(18, 19, 20, 0, 21, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 27, 28, 29, 0),
    gsSPVertex(&ovl_En_BomVtx_0028B0[91], 9, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP1Triangle(6, 7, 8, 0),
    gsSPEndDisplayList(),
};

u64 gPowderKegGoronSkullTLUT[] = {
#include "assets/overlays/ovl_En_Bom/powder_keg_goron_skull_tlut.rgba16.inc.c"
};

u64 gPowderKegGoronSkullTex[] = {
#include "assets/overlays/ovl_En_Bom/powder_keg_goron_skull.ci8.inc.c"
};

Vtx ovl_En_BomVtx_003448[] = {
#include "assets/overlays/ovl_En_Bom/ovl_En_BomVtx_003448.vtx.inc"
};

Gfx gPowderKegGoronSkullDL[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(ENVIRONMENT, 0, TEXEL0, 0, 0, 0, 0, TEXEL0, COMBINED, 0, SHADE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(gPowderKegGoronSkullTLUT),
    gsDPLoadTextureBlock(gPowderKegGoronSkullTex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 32, 0, G_TX_MIRROR | G_TX_CLAMP,
                         G_TX_MIRROR | G_TX_WRAP, 4, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(ovl_En_BomVtx_003448, 16, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(2, 1, 6, 0, 7, 8, 9, 0),
    gsSP2Triangles(10, 11, 12, 0, 9, 8, 13, 0),
    gsSP2Triangles(14, 4, 3, 0, 15, 11, 10, 0),
    gsSPEndDisplayList(),
};
