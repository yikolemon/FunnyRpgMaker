/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1002fc5a */

void Unwind_1002fc5a(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0xcc) != unaff_EBP + -0xbc) {
    thunk_FUN_10274120(*(int *)(unaff_EBP + -0xcc));
  }
  return;
}

