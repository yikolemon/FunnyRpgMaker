/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 102891d0 */

void Unwind_102891d0(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x10) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) & 0xfffffffe;
    FUN_10235870();
    return;
  }
  return;
}

