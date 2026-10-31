/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10018e72 */

void Unwind_10018e72(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x124) != unaff_EBP + -0x114) {
    thunk_FUN_10274120(*(int *)(unaff_EBP + -0x124));
  }
  return;
}

