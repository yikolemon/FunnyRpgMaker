/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10013cfe */

void Unwind_10013cfe(void)

{
  int *piVar1;
  int unaff_EBP;
  
  piVar1 = *(int **)(*(int *)(unaff_EBP + -0x14) + 0x34);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))(piVar1 != (int *)(*(int *)(unaff_EBP + -0x14) + 0x10));
  }
  return;
}

