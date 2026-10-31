/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10042e31 */

void Unwind_10042e31(void)

{
  int unaff_EBP;
  
  if (**(int **)(unaff_EBP + -0x14) != *(int *)(unaff_EBP + -0x18)) {
    thunk_FUN_10274120(**(int **)(unaff_EBP + -0x14));
  }
  return;
}

