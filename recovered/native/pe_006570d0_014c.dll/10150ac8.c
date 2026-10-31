/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10150ac8 */

void FUN_10150ac8(void)

{
  int iVar1;
  
  if (*(char *)(*(int *)(DAT_1039d74c + 0x14cc) + 0xfe) == '\0') {
    iVar1 = *(int *)(DAT_1039d74c + 0x2358);
    if (iVar1 == 0) {
      FUN_100fcef5("Needs to be called between BeginTabBar() and EndTabBar()!");
      return;
    }
    if ((*(byte *)(*(int *)(iVar1 + 0xc) + 4 + *(short *)(iVar1 + 0x82) * 0x30) & 8) == 0) {
      iVar1 = *(int *)(*(int *)(DAT_1039d74c + 0x14cc) + 0x138);
      if (1 < iVar1) {
        *(int *)(*(int *)(DAT_1039d74c + 0x14cc) + 0x138) = iVar1 + -1;
        return;
      }
      FUN_100fcef5("Calling PopID() too many times!");
      return;
    }
  }
  return;
}

