#include "z_en_fish.h"

#define FLAGS 0x00000000

#define THIS ((EnFish*)thisx)

void EnFish_Init(Actor* thisx, GlobalContext* globalCtx);
void EnFish_Destroy(Actor* thisx, GlobalContext* globalCtx);
void EnFish_Update(Actor* thisx, GlobalContext* globalCtx);
void EnFish_Draw(Actor* thisx, GlobalContext* globalCtx);

/*
const ActorInit En_Fish_InitVars = {
    ACTOR_EN_FISH,
    ACTORTYPE_ITEMACTION,
    FLAGS,
    GAMEPLAY_KEEP,
    sizeof(EnFish),
    (ActorFunc)EnFish_Init,
    (ActorFunc)EnFish_Destroy,
    (ActorFunc)EnFish_Update,
    (ActorFunc)EnFish_Draw
};
*/

GLOBAL_ASM("asm/non_matchings/ovl_En_Fish_0x8091D630/func_8091D630.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Fish_0x8091D630/func_8091D660.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Fish_0x8091D630/func_8091D6C4.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Fish_0x8091D630/func_8091D728.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Fish_0x8091D630/func_8091D7C4.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Fish_0x8091D630/func_8091D840.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Fish_0x8091D630/func_8091D904.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Fish_0x8091D630/func_8091D944.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Fish_0x8091D630/func_8091DA14.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Fish_0x8091D630/EnFish_Init.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Fish_0x8091D630/EnFish_Destroy.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Fish_0x8091D630/func_8091DD48.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Fish_0x8091D630/func_8091DDF4.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Fish_0x8091D630/func_8091DEE4.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Fish_0x8091D630/func_8091DF68.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Fish_0x8091D630/func_8091E070.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Fish_0x8091D630/func_8091E128.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Fish_0x8091D630/func_8091E2E0.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Fish_0x8091D630/func_8091E34C.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Fish_0x8091D630/func_8091E5EC.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Fish_0x8091D630/func_8091E658.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Fish_0x8091D630/func_8091E810.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Fish_0x8091D630/func_8091E880.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Fish_0x8091D630/func_8091E9A4.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Fish_0x8091D630/func_8091EAF0.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Fish_0x8091D630/func_8091ECF4.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Fish_0x8091D630/func_8091ED70.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Fish_0x8091D630/func_8091EF30.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Fish_0x8091D630/func_8091EFE8.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Fish_0x8091D630/func_8091F344.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Fish_0x8091D630/func_8091F3BC.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Fish_0x8091D630/func_8091F5A4.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Fish_0x8091D630/func_8091F830.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Fish_0x8091D630/EnFish_Update.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Fish_0x8091D630/func_8091F994.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Fish_0x8091D630/EnFish_Draw.asm")