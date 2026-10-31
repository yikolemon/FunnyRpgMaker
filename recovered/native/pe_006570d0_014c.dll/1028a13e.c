/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1028a13e */

void Unwind_1028a13e(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x10c) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x10c) = *(uint *)(unaff_EBP + -0x10c) & 0xfffffffe;
    FUN_10001fee();
    return;
  }
  return;
}

