/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10112c1d */

int FUN_10112c1d(void)

{
  int iVar1;
  int iVar2;
  
  iVar2 = DAT_1039d74c;
  iVar1 = *(int *)(DAT_1039d74c + 0x5c);
  if ((*(int *)(iVar1 + 0x290) == 0) || (*(int *)(iVar1 + 0x54) == 0)) {
    FUN_1018eb1c(iVar1);
  }
  iVar2 = *(int *)(iVar2 + 0x60);
  if (iVar2 == 0) {
    iVar2 = **(int **)(iVar1 + 0x5c);
  }
  return iVar2;
}

