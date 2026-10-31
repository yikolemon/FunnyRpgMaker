/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1028a0b0 */

void Unwind_1028a0b0(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x14) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x14) = *(uint *)(unaff_EBP + -0x14) & 0xfffffffe;
    FUN_10247360();
    return;
  }
  return;
}

