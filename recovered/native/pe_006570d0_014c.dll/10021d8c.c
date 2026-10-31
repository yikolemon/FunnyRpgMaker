/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10021d8c */

void Unwind_10021d8c(void)

{
  int *piVar1;
  int unaff_EBP;
  
  piVar1 = *(int **)(*(int *)(unaff_EBP + -0x14) + 0x104);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))(piVar1 != *(int **)(unaff_EBP + -0x20));
    *(undefined4 *)(*(int *)(unaff_EBP + -0x14) + 0x104) = 0;
  }
  return;
}

