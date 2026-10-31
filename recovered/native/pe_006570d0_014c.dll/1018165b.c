/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1018165b */

void Unwind_1018165b(void)

{
  int *piVar1;
  int unaff_EBP;
  
  piVar1 = *(int **)(unaff_EBP + -0x18);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))(piVar1 != (int *)(unaff_EBP + -0x4c));
    *(undefined4 *)(unaff_EBP + -0x28) = 0;
  }
  return;
}

