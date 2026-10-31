/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100ba4b5 */

void Unwind_100ba4b5(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x1c) != 0) {
    FUN_102283a0(*(int *)(unaff_EBP + -0x1c),0x28);
  }
  return;
}

