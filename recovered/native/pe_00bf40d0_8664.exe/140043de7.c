/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140043de7 */

void FUN_140043de7(longlong param_1,uint param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  
  FUN_1400440fa(param_1);
  if (*(int *)(param_1 + 0x20) == 0) {
    uVar1 = FUN_14004406f(param_1);
    iVar2 = FUN_14001ecff(param_3,uVar1);
    *(int *)(*(longlong *)(param_1 + 0x200) + (ulonglong)param_2 * 4) = iVar2;
  }
  return;
}

