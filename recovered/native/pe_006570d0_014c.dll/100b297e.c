/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100b297e */

void Unwind_100b297e(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x120) != unaff_EBP + -0x110) {
    thunk_FUN_10274120(*(int *)(unaff_EBP + -0x120));
  }
  return;
}

