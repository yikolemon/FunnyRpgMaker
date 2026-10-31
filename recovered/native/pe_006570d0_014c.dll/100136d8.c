/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100136d8 */

void Unwind_100136d8(void)

{
  int unaff_EBP;
  
  if (*(char *)(unaff_EBP + -0x78) == '\x01') {
    FUN_10001fee();
  }
  return;
}

