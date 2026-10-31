/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10041122 */

void Unwind_10041122(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x140) != unaff_EBP + -0x130) {
    thunk_FUN_10274120(*(int *)(unaff_EBP + -0x140));
  }
  return;
}

