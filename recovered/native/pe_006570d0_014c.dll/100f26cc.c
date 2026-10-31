/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100f26cc */

void Unwind_100f26cc(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x1c) != 0) {
    FUN_100f4cb6(*(int *)(unaff_EBP + -0x1c));
  }
  return;
}

