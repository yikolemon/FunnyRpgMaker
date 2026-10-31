/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10173770 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_10173770(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = _UNK_102bb4ac;
  iVar2 = _UNK_102bb4a8;
  iVar1 = _UNK_102bb4a4;
  if (param_2 != 0) {
    return;
  }
  if (*param_1 != 0x20) {
    if (*param_1 == 0x10) {
      param_1[3] = 0x7c00;
      param_1[4] = 0x3e0;
      param_1[5] = 0x1f;
      return;
    }
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    return;
  }
  param_1[3] = _DAT_102bb4a0;
  param_1[4] = iVar1;
  param_1[5] = iVar2;
  param_1[6] = iVar3;
  param_1[7] = 0;
  return;
}

