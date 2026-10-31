/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180154c1a */

void FUN_180154c1a(void)

{
  int iVar1;
  longlong lVar2;
  
  if (*(char *)(*(longlong *)(DAT_180419160 + 0x1608) + 0x10e) == '\0') {
    lVar2 = *(longlong *)(DAT_180419160 + 0x2560);
    if (lVar2 == 0) {
      FUN_180101698("Needs to be called between BeginTabBar() and EndTabBar()!");
      return;
    }
    if ((*(byte *)(*(longlong *)(lVar2 + 0x10) + 4 + (longlong)*(short *)(lVar2 + 0x8a) * 0x38) & 8)
        == 0) {
      iVar1 = *(int *)(*(longlong *)(DAT_180419160 + 0x1608) + 0x148);
      if (1 < iVar1) {
        *(int *)(*(longlong *)(DAT_180419160 + 0x1608) + 0x148) = iVar1 + -1;
        return;
      }
      FUN_180101698("Calling PopID() too many times!");
      return;
    }
  }
  return;
}

