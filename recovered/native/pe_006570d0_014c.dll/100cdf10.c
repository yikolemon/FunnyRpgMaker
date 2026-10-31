/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100cdf10 */

void Unwind_100cdf10(void)

{
  int unaff_EBP;
  
  if (*(char *)(unaff_EBP + -0x60) == '\x01') {
    FUN_10004eae();
  }
  return;
}

