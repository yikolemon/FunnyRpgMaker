/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100e4256 */

void Unwind_100e4256(void)

{
  int unaff_EBP;
  
  if (*(char *)(unaff_EBP + -0x13) == '\x01') {
    FUN_10001fee();
  }
  return;
}

