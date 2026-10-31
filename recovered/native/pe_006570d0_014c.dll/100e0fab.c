/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100e0fab */

void Unwind_100e0fab(void)

{
  int *piVar1;
  int unaff_EBP;
  
  piVar1 = *(int **)(unaff_EBP + -0x4058);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))(piVar1 != (int *)(unaff_EBP + -0x407c));
  }
  return;
}

