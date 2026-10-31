/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1028a195 */

void Unwind_1028a195(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x10c) & 4) != 0) {
    *(uint *)(unaff_EBP + -0x10c) = *(uint *)(unaff_EBP + -0x10c) & 0xfffffffb;
    FUN_10001fee();
    return;
  }
  return;
}

