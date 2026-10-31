/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 102894af */

void Unwind_102894af(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x30) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x30) = *(uint *)(unaff_EBP + -0x30) & 0xfffffffe;
    FUN_10001fee();
    return;
  }
  return;
}

