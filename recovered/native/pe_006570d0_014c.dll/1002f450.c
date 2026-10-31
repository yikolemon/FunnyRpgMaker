/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1002f450 */

void Unwind_1002f450(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x170) != unaff_EBP + -0x160) {
    thunk_FUN_10274120(*(int *)(unaff_EBP + -0x170));
  }
  return;
}

