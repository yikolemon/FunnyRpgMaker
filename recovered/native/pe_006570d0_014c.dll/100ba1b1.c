/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100ba1b1 */

void Unwind_100ba1b1(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x20) != 0) {
    FUN_102283a0(*(int *)(unaff_EBP + -0x20),0x28);
  }
  return;
}

