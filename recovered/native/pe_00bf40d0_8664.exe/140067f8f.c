/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140067f8f */

int FUN_140067f8f(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x18);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    FUN_140067118(*(int **)(param_1 + 8),0xa1);
    iVar2 = 0;
  }
  else {
    *(longlong *)(param_1 + 0x18) = lVar1 + -8;
    iVar2 = *(int *)(lVar1 + -8);
    if (*(int *)(lVar1 + -4) == 1) {
      iVar2 = (iVar2 >> 0x1f) + iVar2 + 0x2000 >> 0xe;
    }
    else if (*(int *)(lVar1 + -4) == 2) {
      iVar2 = iVar2 << 0x10;
    }
  }
  return iVar2;
}

