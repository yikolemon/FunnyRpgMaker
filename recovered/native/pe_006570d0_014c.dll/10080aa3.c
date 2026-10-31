/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10080aa3 */

void Unwind_10080aa3(void)

{
  int *piVar1;
  int unaff_EBP;
  
  piVar1 = *(int **)(unaff_EBP + -0xc4);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))(piVar1 != *(int **)(unaff_EBP + -0xb8));
  }
  return;
}

