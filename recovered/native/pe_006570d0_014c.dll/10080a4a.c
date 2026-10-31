/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10080a4a */

void Unwind_10080a4a(void)

{
  int *piVar1;
  int unaff_EBP;
  
  piVar1 = *(int **)(unaff_EBP + -0x90);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))(piVar1 != (int *)(unaff_EBP + -0xb4));
  }
  return;
}

