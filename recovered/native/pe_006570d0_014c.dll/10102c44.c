/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10102c44 */

undefined4 FUN_10102c44(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(DAT_1039d74c + 0x2044);
  if (((iVar1 != 0) && (iVar1 == *(int *)(DAT_1039d74c + 0x1e80))) &&
     ((iVar2 = *(int *)(DAT_1039d74c + 0x14cc), iVar1 != *(int *)(iVar2 + 8) ||
      (*(char *)(iVar2 + 0xfb) == '\0')))) {
    return CONCAT31((int3)((uint)iVar2 >> 8),1);
  }
  return 0;
}

