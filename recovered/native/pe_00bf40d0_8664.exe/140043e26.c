/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140043e26 */

void FUN_140043e26(longlong param_1,uint param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  FUN_1400440fa(param_1);
  if (*(int *)(param_1 + 0x20) == 0) {
    iVar1 = *(int *)(*(longlong *)(param_1 + 0x200) + (ulonglong)param_2 * 4);
    uVar2 = FUN_14004406f(param_1);
    iVar3 = FUN_14001ecff(param_3,uVar2);
    *(int *)(*(longlong *)(param_1 + 0x200) + (ulonglong)param_2 * 4) = iVar3 + iVar1;
  }
  return;
}

