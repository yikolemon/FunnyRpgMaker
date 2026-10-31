/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101816b7 */

void Unwind_101816b7(void)

{
  int *piVar1;
  int unaff_EBP;
  
  piVar1 = *(int **)(unaff_EBP + -0x28);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))(piVar1 != (int *)(unaff_EBP + -0x4c));
    *(undefined4 *)(unaff_EBP + -0x28) = 0;
  }
  return;
}

