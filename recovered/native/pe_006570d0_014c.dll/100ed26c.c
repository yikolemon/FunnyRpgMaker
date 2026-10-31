/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100ed26c */

void Unwind_100ed26c(void)

{
  int *piVar1;
  int unaff_EBP;
  
  piVar1 = *(int **)(unaff_EBP + -0x3030);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))(piVar1 != (int *)(unaff_EBP + -0x3054));
  }
  return;
}

