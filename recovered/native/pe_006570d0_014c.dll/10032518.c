/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10032518 */

void Unwind_10032518(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x21c) != unaff_EBP + -0x20c) {
    thunk_FUN_10274120(*(int *)(unaff_EBP + -0x21c));
  }
  return;
}

