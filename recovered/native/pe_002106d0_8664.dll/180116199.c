/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180116199 */

void FUN_180116199(void)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(DAT_180419160 + 0x1608);
  *(undefined1 *)(lVar1 + 0x199) = 0;
  if (((*(float *)(lVar1 + 0x170) < *(float *)(lVar1 + 0x158)) ||
      (*(float *)(lVar1 + 0x174) < *(float *)(lVar1 + 0x15c))) && (*(char *)(lVar1 + 0x10e) == '\0')
     ) {
    FUN_180101698(
                 "Code uses SetCursorPos()/SetCursorScreenPos() to extend window/parent boundaries.\nPlease submit an item e.g. Dummy() afterwards in order to grow window/parent boundaries."
                 );
    return;
  }
  return;
}

