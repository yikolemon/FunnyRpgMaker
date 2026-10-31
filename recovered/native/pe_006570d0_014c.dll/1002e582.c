/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1002e582 */

void Unwind_1002e582(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x220) != unaff_EBP + -0x210) {
    thunk_FUN_10274120(*(int *)(unaff_EBP + -0x220));
  }
  return;
}

