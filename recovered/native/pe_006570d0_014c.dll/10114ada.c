/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10114ada */

void FUN_10114ada(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = DAT_1039d74c;
  iVar3 = *(int *)(DAT_1039d74c + 0x1484);
  iVar1 = *(int *)(DAT_1039d74c + 0x148c);
  iVar4 = *(int *)(iVar1 + -4 + iVar3 * 4);
  if ((iVar4 != param_1) && (1 < iVar3 && *(int *)(iVar4 + 0x3b0) != param_1)) {
    iVar3 = iVar3 + -1;
    iVar4 = 4;
    do {
      if (*(int *)(iVar1 + -4 + iVar3 * 4) == param_1) {
        FUN_1025b2d0(iVar1 + iVar3 * 4 + -4,iVar1 + iVar3 * 4,iVar4);
        *(int *)(*(int *)(iVar2 + 0x148c) + -4 + *(int *)(iVar2 + 0x1484) * 4) = param_1;
        return;
      }
      iVar3 = iVar3 + -1;
      iVar4 = iVar4 + 4;
    } while (0 < iVar3);
  }
  return;
}

