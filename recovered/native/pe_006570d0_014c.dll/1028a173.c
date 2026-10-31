/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1028a173 */

void Unwind_1028a173(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x10c) & 2) != 0) {
    *(uint *)(unaff_EBP + -0x10c) = *(uint *)(unaff_EBP + -0x10c) & 0xfffffffd;
    FUN_10001fee();
    return;
  }
  return;
}

