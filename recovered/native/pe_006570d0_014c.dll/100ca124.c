/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100ca124 */

void Unwind_100ca124(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x154) != unaff_EBP + -0x144) {
    thunk_FUN_10274120(*(int *)(unaff_EBP + -0x154));
  }
  return;
}

