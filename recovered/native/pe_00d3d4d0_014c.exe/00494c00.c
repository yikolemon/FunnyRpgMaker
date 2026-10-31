/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00494c00 */

undefined4 __cdecl
FUN_00494c00(EHExceptionRecord *param_1,EHRegistrationNode *param_2,int param_3,void *param_4,
            _s_FuncInfo *param_5,int param_6,EHRegistrationNode *param_7,byte param_8)

{
  code *pcVar1;
  PVOID pvVar2;
  uint uVar3;
  undefined4 uVar4;
  
  FUN_00495640(param_3);
  pvVar2 = FUN_00494580();
  if ((((*(int *)((int)pvVar2 + 0x20) != 0) || (*(int *)param_1 == -0x1f928c9d)) ||
      (*(int *)param_1 == -0x7fffffda)) ||
     (((param_5->magicNumber_and_bbtFlags & 0x1fffffff) < 0x19930522 ||
      ((param_5->EHFlags & 1) == 0)))) {
    if (((byte)param_1[4] & 0x66) == 0) {
      if (((param_5->nTryBlocks != 0) ||
          ((uVar3 = param_5->magicNumber_and_bbtFlags & 0x1fffffff, 0x19930520 < uVar3 &&
           (param_5->pESTypeList != (ESTypeList *)0x0)))) ||
         ((0x19930521 < uVar3 && (((uint)param_5->EHFlags >> 2 & 1) != 0)))) {
        if ((((*(int *)param_1 == -0x1f928c9d) && (2 < *(uint *)(param_1 + 0x10))) &&
            (0x19930522 < *(uint *)(param_1 + 0x14))) &&
           (pcVar1 = *(code **)(*(int *)(param_1 + 0x1c) + 8), pcVar1 != (code *)0x0)) {
          (*(code *)PTR_guard_check_icall_00508898)
                    (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
          uVar4 = (*pcVar1)();
          return uVar4;
        }
        FUN_00495060(param_1,param_2,param_3,param_4,param_5,param_8,param_6,param_7);
      }
      return 1;
    }
    if ((param_5->maxState != 0) && (param_6 == 0)) {
      FUN_00494690(param_2,param_4,param_5,-1);
    }
  }
  return 1;
}

