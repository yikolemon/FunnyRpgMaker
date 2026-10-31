/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140769bfb */

void FUN_140769bfb(void)

{
  ulonglong uVar1;
  uint unaff_retaddr;
  
  uVar1 = (ulonglong)unaff_retaddr;
  *(undefined1 *)(uVar1 + 0xfe) = 1;
  *(undefined1 *)(uVar1 + 0x101) = 1;
  *(undefined1 *)(uVar1 + 0x11b) = 1;
  return;
}

