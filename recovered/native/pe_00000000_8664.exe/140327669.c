/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140327669 */

void FUN_140327669(void)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(DAT_14062a630 + 0x1608);
  *(undefined1 *)(lVar1 + 0x199) = 0;
  if (((*(float *)(lVar1 + 0x170) < *(float *)(lVar1 + 0x158)) ||
      (*(float *)(lVar1 + 0x174) < *(float *)(lVar1 + 0x15c))) && (*(char *)(lVar1 + 0x10e) == '\0')
     ) {
    FUN_140312b68("\'t clamp.");
    return;
  }
  return;
}

