/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100caafc */

void Unwind_100caafc(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x15c) != unaff_EBP + -0x14c) {
    thunk_FUN_10274120(*(int *)(unaff_EBP + -0x15c));
  }
  return;
}

