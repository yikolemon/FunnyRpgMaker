/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100cb6e0 */

void Unwind_100cb6e0(void)

{
  int *piVar1;
  int unaff_EBP;
  
  piVar1 = *(int **)(unaff_EBP + -0x20);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))(piVar1 != (int *)(unaff_EBP + -0x44));
  }
  return;
}

