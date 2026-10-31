/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14075206f */

void FUN_14075206f(void)

{
  ulonglong unaff_RDI;
  uint unaff_retaddr;
  
  if (unaff_retaddr != 0) {
    if (unaff_retaddr != 1) {
      FUN_1408c86d0();
    }
    *(undefined1 *)(((unaff_RDI >> 0x20) - 1) + (ulonglong)unaff_retaddr) = 0;
  }
  return;
}

