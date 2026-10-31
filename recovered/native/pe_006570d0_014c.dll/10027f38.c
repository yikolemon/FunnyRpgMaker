/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10027f38 */

void Unwind_10027f38(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x808) != unaff_EBP + -0x7f8) {
    thunk_FUN_10274120(*(int *)(unaff_EBP + -0x808));
  }
  return;
}

