/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14009366e */

void FUN_14009366e(void)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(DAT_140f2a910 + 0x1608);
  iVar1 = *(int *)(lVar2 + 0x248);
  if (0 < (longlong)iVar1) {
    *(undefined4 *)(lVar2 + 0x23c) =
         *(undefined4 *)(*(longlong *)(lVar2 + 0x250) + -4 + (longlong)iVar1 * 4);
    *(int *)(lVar2 + 0x248) = iVar1 + -1;
    return;
  }
  FUN_14007a954("Calling PopItemWidth() too many times!");
  return;
}

