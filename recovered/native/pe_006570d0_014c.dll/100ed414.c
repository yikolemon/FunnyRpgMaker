/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100ed414 */

void Unwind_100ed414(void)

{
  int *piVar1;
  int unaff_EBP;
  
  piVar1 = *(int **)(unaff_EBP + -0x1018);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))(piVar1 != (int *)(unaff_EBP + -0x103c));
  }
  return;
}

