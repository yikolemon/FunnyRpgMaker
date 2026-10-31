/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100818b2 */

void Unwind_100818b2(void)

{
  int *piVar1;
  int unaff_EBP;
  
  piVar1 = *(int **)(*(int *)(unaff_EBP + -0x13c) + 0x28);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))(piVar1 != *(int **)(unaff_EBP + -0x134));
  }
  return;
}

