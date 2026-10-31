/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10111b3c */

bool FUN_10111b3c(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(DAT_1039d74c + 0x14a8) * 0x70;
  iVar1 = *(int *)(DAT_1039d74c + 0x14a8) + 1;
  do {
    iVar2 = iVar2 + -0x70;
    iVar1 = iVar1 + -1;
    if (iVar1 < 1) break;
  } while (*(int *)(*(int *)(DAT_1039d74c + 0x14b0) + iVar2) != param_1);
  return 0 < iVar1;
}

