/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140086e86 */

undefined8 FUN_140086e86(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  uint uVar4;
  undefined4 uVar5;
  longlong local_f38;
  undefined8 uStack_f30;
  undefined8 local_f28;
  undefined1 local_150 [56];
  undefined1 local_118 [56];
  undefined8 local_e0;
  char *local_d8;
  char *local_d0;
  undefined1 local_c8 [32];
  undefined1 local_a8 [32];
  undefined8 local_88;
  char *local_80;
  char *local_78;
  uint local_68 [8];
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  lVar1 = param_2 + 0x10;
  cVar3 = FUN_14008ab9c(lVar1);
  *(char *)(param_1 + 0x78) = cVar3;
  if ((cVar3 == -0x34) || (cVar3 == -0x6d)) {
    DAT_1401cc8c4 = 1;
    *(undefined1 *)(param_1 + 0x7a) = 1;
    local_f38 = CONCAT71(local_f38._1_7_,1);
    FUN_14008a286(param_2);
  }
  uVar4 = FUN_14008aab0(lVar1);
  local_f38 = 0;
  uStack_f30 = 0;
  local_f28 = 0;
  FUN_1400993d8(&local_f38,uVar4);
  plVar2 = (longlong *)(param_1 + 0x60);
  if (plVar2 != &local_f38) {
    FUN_14008d172(plVar2);
    *(longlong *)(param_1 + 0x60) = local_f38;
    *(undefined8 *)(param_1 + 0x68) = uStack_f30;
    *(undefined8 *)(param_1 + 0x70) = local_f28;
    local_f38 = 0;
    uStack_f30 = 0;
    local_f28 = 0;
  }
  FUN_14008d172(&local_f38);
  local_68[0] = 0;
  if (uVar4 != 0) {
    do {
      FUN_140098bcc(&local_f38,param_2,local_68);
      FUN_14009904a((ulonglong)local_68[0] * 0xde0 + *plVar2,&local_f38);
      FUN_14008d1ec(&local_f38);
      local_68[0] = local_68[0] + 1;
    } while (local_68[0] < uVar4);
  }
  uVar5 = FUN_14008ab9c(lVar1);
  *(byte *)(param_1 + 0x79) = (byte)uVar5;
  if (0x88 < (byte)uVar5) {
    if ((*(int *)(param_2 + 4) == 0) && (*(uint *)(param_2 + 0x3c) <= *(uint *)(param_2 + 0x38))) {
      return CONCAT71((uint7)(uint3)(*(uint *)(param_2 + 0x3c) >> 8),1);
    }
    local_88 = 0x1b00000192;
    local_80 = 
    "C:\\Users\\Administrator\\Downloads\\FunnyGamePlayer\\cmake\\UberWolf\\UberWolfLib\\WolfRPG/CommonEvents.hpp"
    ;
    local_78 = "virtual bool __cdecl CommonEvents::load(FileCoder &)";
    FUN_140087f79(local_68);
    FUN_14000ed8c(&local_f38,local_68,"CommonEvent has more data than expected");
    FUN_1400886d4(local_118,&local_f38);
                    /* WARNING: Subroutine does not return */
    FUN_140106270(local_118,&DAT_1401a5720);
  }
  FUN_1400992c3(&local_88,uVar5);
  local_e0 = 0x1b0000018f;
  local_d8 = 
  "C:\\Users\\Administrator\\Downloads\\FunnyGamePlayer\\cmake\\UberWolf\\UberWolfLib\\WolfRPG/CommonEvents.hpp"
  ;
  local_d0 = "virtual bool __cdecl CommonEvents::load(FileCoder &)";
  FUN_140087f79(local_a8);
  FUN_14000ed8c(local_c8,local_a8,"CommonEvent data terminator smaller than 0x89 (got ");
  FUN_140018470(local_68);
  FUN_14000ed8c(&local_f38,local_68,")");
  FUN_1400886d4(local_150,&local_f38);
                    /* WARNING: Subroutine does not return */
  FUN_140106270(local_150,&DAT_1401a5720);
}

