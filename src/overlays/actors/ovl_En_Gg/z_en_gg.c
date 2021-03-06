#include "z_en_gg.h"

#define FLAGS 0x00000089

#define THIS ((EnGg*)thisx)

void EnGg_Init(Actor* thisx, GlobalContext* globalCtx);
void EnGg_Destroy(Actor* thisx, GlobalContext* globalCtx);
void EnGg_Update(Actor* thisx, GlobalContext* globalCtx);
void EnGg_Draw(Actor* thisx, GlobalContext* globalCtx);

/*
const ActorInit En_Gg_InitVars = {
    ACTOR_EN_GG,
    ACTORTYPE_NPC,
    FLAGS,
    OBJECT_GG,
    sizeof(EnGg),
    (ActorFunc)EnGg_Init,
    (ActorFunc)EnGg_Destroy,
    (ActorFunc)EnGg_Update,
    (ActorFunc)EnGg_Draw
};
*/

GLOBAL_ASM("asm/non_matchings/ovl_En_Gg_0x80B34F70/func_80B34F70.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Gg_0x80B34F70/func_80B34FB4.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Gg_0x80B34F70/func_80B35108.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Gg_0x80B34F70/func_80B351A4.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Gg_0x80B34F70/func_80B35250.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Gg_0x80B34F70/func_80B352A4.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Gg_0x80B34F70/func_80B35450.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Gg_0x80B34F70/func_80B3556C.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Gg_0x80B34F70/func_80B35634.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Gg_0x80B34F70/func_80B357F0.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Gg_0x80B34F70/func_80B3584C.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Gg_0x80B34F70/func_80B358D8.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Gg_0x80B34F70/func_80B35968.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Gg_0x80B34F70/func_80B359DC.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Gg_0x80B34F70/func_80B35B24.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Gg_0x80B34F70/func_80B35B44.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Gg_0x80B34F70/func_80B35C84.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Gg_0x80B34F70/func_80B3610C.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Gg_0x80B34F70/func_80B363E8.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Gg_0x80B34F70/func_80B364D4.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Gg_0x80B34F70/EnGg_Init.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Gg_0x80B34F70/EnGg_Destroy.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Gg_0x80B34F70/EnGg_Update.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Gg_0x80B34F70/func_80B368B0.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Gg_0x80B34F70/func_80B368F0.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Gg_0x80B34F70/EnGg_Draw.asm")
