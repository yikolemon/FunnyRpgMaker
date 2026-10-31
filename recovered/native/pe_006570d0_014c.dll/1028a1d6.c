/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1028a1d6 */

void Unwind_1028a1d6(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x10c) & 0x10) != 0) {
    *(uint *)(unaff_EBP + -0x10c) = *(uint *)(unaff_EBP + -0x10c) & 0xffffffef;
    FUN_10001fee();
    return;
  }
  return;
}

