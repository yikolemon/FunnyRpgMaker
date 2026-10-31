/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1002f429 */

void Unwind_1002f429(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x208) != unaff_EBP + -0x1f8) {
    thunk_FUN_10274120(*(int *)(unaff_EBP + -0x208));
  }
  return;
}

