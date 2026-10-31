/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100ef570 */

void Unwind_100ef570(void)

{
  int *piVar1;
  int unaff_EBP;
  
  piVar1 = *(int **)(unaff_EBP + -0xa8);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))(piVar1 != (int *)(unaff_EBP + -0xcc));
  }
  return;
}

