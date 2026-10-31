/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140067cbc */

undefined4 FUN_140067cbc(longlong param_1)

{
  longlong lVar1;
  int *piVar2;
  int iVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x18);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    piVar2 = *(int **)(param_1 + 8);
    iVar3 = 0xa1;
  }
  else {
    if (*(int *)(lVar1 + -4) == 2) {
      *(longlong *)(param_1 + 0x18) = lVar1 + -8;
      return *(undefined4 *)(lVar1 + -8);
    }
    piVar2 = *(int **)(param_1 + 8);
    iVar3 = 0xa0;
  }
  FUN_140067118(piVar2,iVar3);
  return 0;
}

