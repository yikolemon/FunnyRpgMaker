/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1017dac0 */

void Unwind_1017dac0(void)

{
  int *piVar1;
  int unaff_EBP;
  
  piVar1 = *(int **)(unaff_EBP + -0x34);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))(piVar1 != (int *)(unaff_EBP + -0x94));
    *(undefined4 *)(unaff_EBP + -0x70) = 0;
  }
  return;
}

