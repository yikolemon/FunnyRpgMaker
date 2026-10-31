/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10165a3a */

int FUN_10165a3a(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(DAT_1039d74c + 0x2308);
  iVar2 = 0;
  if ((iVar1 != 0) && ((*(byte *)(iVar1 + 4) & 8) != 0)) {
    if (*(char *)(iVar1 + 0x1ed) == '\0') {
      FUN_10161186(iVar1);
    }
    FUN_10162e22(iVar1);
    iVar2 = iVar1 + 0x1a8;
  }
  return iVar2;
}

