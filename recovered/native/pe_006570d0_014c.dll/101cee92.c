/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101cee92 */

void Unwind_101cee92(void)

{
  int *piVar1;
  int unaff_EBP;
  
  piVar1 = *(int **)(unaff_EBP + -0x34);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))(piVar1 != *(int **)(unaff_EBP + -0x30));
  }
  return;
}

