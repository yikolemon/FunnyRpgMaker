/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1002f95e */

void Unwind_1002f95e(void)

{
  int *piVar1;
  int unaff_EBP;
  
  piVar1 = (int *)**(int **)(unaff_EBP + -0x14);
  if (piVar1 != *(int **)(unaff_EBP + -0x14) + 4) {
    thunk_FUN_10274120(piVar1);
  }
  return;
}

