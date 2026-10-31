/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10114036 */

void FUN_10114036(void)

{
  int iVar1;
  bool bVar2;
  
  iVar1 = 0;
  do {
    if (*(char *)(DAT_1039d74c + 0xec + iVar1) != '\0') {
      return;
    }
    bVar2 = iVar1 != 4;
    iVar1 = iVar1 + 1;
  } while (bVar2);
  return;
}

