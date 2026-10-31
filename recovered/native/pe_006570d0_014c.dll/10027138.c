/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10027138 */

void Unwind_10027138(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x264) != unaff_EBP + -0x254) {
    thunk_FUN_10274120(*(int *)(unaff_EBP + -0x264));
  }
  return;
}

