/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1002e98d */

void Unwind_1002e98d(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x230) != unaff_EBP + -0x220) {
    thunk_FUN_10274120(*(int *)(unaff_EBP + -0x230));
  }
  return;
}

