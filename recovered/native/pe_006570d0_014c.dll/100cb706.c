/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100cb706 */

void Unwind_100cb706(void)

{
  int *piVar1;
  int unaff_EBP;
  
  piVar1 = *(int **)(unaff_EBP + -0x20);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))(piVar1 != (int *)(unaff_EBP + -0x44));
    *(undefined4 *)(unaff_EBP + -0x20) = 0;
  }
  return;
}

