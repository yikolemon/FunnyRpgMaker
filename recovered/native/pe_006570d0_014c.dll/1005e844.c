/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1005e844 */

void Unwind_1005e844(void)

{
  int *piVar1;
  int unaff_EBP;
  
  piVar1 = *(int **)(unaff_EBP + -0x1d0);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))(piVar1 != (int *)(unaff_EBP + -0x1c4));
    *(undefined4 *)(unaff_EBP + -0x1a0) = 0;
  }
  return;
}

