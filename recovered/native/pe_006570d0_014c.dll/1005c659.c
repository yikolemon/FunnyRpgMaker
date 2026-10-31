/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1005c659 */

void Unwind_1005c659(void)

{
  int *piVar1;
  int unaff_EBP;
  
  piVar1 = *(int **)(unaff_EBP + -0x40);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))(piVar1 != (int *)(unaff_EBP + -0x3c));
  }
  return;
}

