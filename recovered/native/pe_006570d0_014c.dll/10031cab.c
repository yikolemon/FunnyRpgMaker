/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10031cab */

void Unwind_10031cab(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x220) != unaff_EBP + -0x210) {
    thunk_FUN_10274120(*(int *)(unaff_EBP + -0x220));
  }
  return;
}

