/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100bdfab */

void Unwind_100bdfab(void)

{
  int *piVar1;
  int unaff_EBP;
  
  piVar1 = *(int **)(unaff_EBP + -0x40);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))(piVar1 != (int *)(unaff_EBP + -0x3c));
  }
  return;
}

