/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400cdb4a */

void FUN_1400cdb4a(void)

{
  int iVar1;
  longlong lVar2;
  
  if (*(char *)(*(longlong *)(DAT_140f2a910 + 0x1608) + 0x10e) == '\0') {
    lVar2 = *(longlong *)(DAT_140f2a910 + 0x2560);
    if (lVar2 == 0) {
      FUN_14007a954("Needs to be called between BeginTabBar() and EndTabBar()!");
      return;
    }
    if ((*(byte *)(*(longlong *)(lVar2 + 0x10) + 4 + (longlong)*(short *)(lVar2 + 0x8a) * 0x38) & 8)
        == 0) {
      iVar1 = *(int *)(*(longlong *)(DAT_140f2a910 + 0x1608) + 0x148);
      if (1 < iVar1) {
        *(int *)(*(longlong *)(DAT_140f2a910 + 0x1608) + 0x148) = iVar1 + -1;
        return;
      }
      FUN_14007a954("Calling PopID() too many times!");
      return;
    }
  }
  return;
}

