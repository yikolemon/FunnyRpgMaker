/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10021d56 */

void Unwind_10021d56(void)

{
  int unaff_EBP;
  
  if (**(int **)(unaff_EBP + -0x1c) != 0) {
    FUN_10043be8(**(int **)(unaff_EBP + -0x1c));
  }
  return;
}

