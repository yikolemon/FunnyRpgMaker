/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 102771f9 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_102771f9(int *param_1)

{
  uint *puVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  
  cVar2 = FUN_102772a4(param_1);
  if (cVar2 != '\0') {
    piVar3 = (int *)FUN_1025e77b(1);
    if (param_1 == piVar3) {
      piVar3 = &DAT_103a5474;
    }
    else {
      piVar3 = (int *)FUN_1025e77b(2);
      if (param_1 != piVar3) {
        return 0;
      }
      piVar3 = &DAT_103a5478;
    }
    _DAT_103a4d50 = _DAT_103a4d50 + 1;
    puVar1 = (uint *)(param_1 + 3);
    if ((*puVar1 & 0x4c0) == 0) {
      LOCK();
      *puVar1 = *puVar1 | 0x282;
      UNLOCK();
      if (*piVar3 == 0) {
        iVar4 = FUN_10274170(0x1000);
        *piVar3 = iVar4;
        FUN_10274120(0);
      }
      if (*piVar3 == 0) {
        param_1[2] = 2;
        param_1[1] = (int)(param_1 + 5);
        *param_1 = (int)(param_1 + 5);
        param_1[6] = 2;
      }
      else {
        param_1[1] = *piVar3;
        *param_1 = *piVar3;
        param_1[2] = 0x1000;
        param_1[6] = 0x1000;
      }
      return 1;
    }
  }
  return 0;
}

