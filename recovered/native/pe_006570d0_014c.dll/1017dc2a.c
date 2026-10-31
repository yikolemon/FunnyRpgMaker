/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1017dc2a */

void Unwind_1017dc2a(void)

{
  int *piVar1;
  int unaff_EBP;
  
  piVar1 = *(int **)(unaff_EBP + -0x70);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))(piVar1 != (int *)(unaff_EBP + -0x94));
    *(undefined4 *)(unaff_EBP + -0x70) = 0;
  }
  return;
}

