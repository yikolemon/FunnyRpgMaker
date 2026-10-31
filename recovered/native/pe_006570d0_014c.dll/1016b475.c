/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1016b475 */

void Unwind_1016b475(void)

{
  int *piVar1;
  int unaff_EBP;
  
  piVar1 = *(int **)(unaff_EBP + -0x48);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))(piVar1 != (int *)(unaff_EBP + -0x3c));
    *(undefined4 *)(unaff_EBP + -0x18) = 0;
  }
  return;
}

