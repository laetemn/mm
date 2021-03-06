#include "z_en_boj_04.h"

#define FLAGS 0x00000019

#define THIS ((EnBoj04*)thisx)

void EnBoj04_Init(Actor* thisx, GlobalContext* globalCtx);
void EnBoj04_Destroy(Actor* thisx, GlobalContext* globalCtx);
void EnBoj04_Update(Actor* thisx, GlobalContext* globalCtx);
void EnBoj04_Draw(Actor* thisx, GlobalContext* globalCtx);

/*
const ActorInit En_Boj_04_InitVars = {
    ACTOR_EN_BOJ_04,
    ACTORTYPE_NPC,
    FLAGS,
    GAMEPLAY_KEEP,
    sizeof(EnBoj04),
    (ActorFunc)EnBoj04_Init,
    (ActorFunc)EnBoj04_Destroy,
    (ActorFunc)EnBoj04_Update,
    (ActorFunc)EnBoj04_Draw
};
*/

GLOBAL_ASM("asm/non_matchings/ovl_En_Boj_04_0x809CB200/EnBoj04_Init.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Boj_04_0x809CB200/EnBoj04_Destroy.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Boj_04_0x809CB200/EnBoj04_Update.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Boj_04_0x809CB200/EnBoj04_Draw.asm")
