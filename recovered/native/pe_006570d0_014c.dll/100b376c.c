/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100b376c */

void Unwind_100b376c(void)

{
  int *piVar1;
  int unaff_EBP;
  
  piVar1 = *(int **)(unaff_EBP + -0x30);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))(piVar1 != (int *)(unaff_EBP + -0x54));
    *(undefined4 *)(unaff_EBP + -0x30) = 0;
  }
  return;
}

