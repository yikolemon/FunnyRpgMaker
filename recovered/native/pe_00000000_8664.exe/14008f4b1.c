/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14008f4b1 */

void FUN_14008f4b1(void)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(DAT_140f2a910 + 0x1608);
  *(undefined1 *)(lVar1 + 0x199) = 0;
  if (((*(float *)(lVar1 + 0x170) < *(float *)(lVar1 + 0x158)) ||
      (*(float *)(lVar1 + 0x174) < *(float *)(lVar1 + 0x15c))) && (*(char *)(lVar1 + 0x10e) == '\0')
     ) {
    FUN_14007a954(
                 "Code uses SetCursorPos()/SetCursorScreenPos() to extend window/parent boundaries.\nPlease submit an item e.g. Dummy() afterwards in order to grow window/parent boundaries."
                 );
    return;
  }
  return;
}

