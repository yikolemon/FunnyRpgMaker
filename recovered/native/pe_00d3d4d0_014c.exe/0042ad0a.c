/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0042ad0a */

void Unwind_0042ad0a(void)

{
  int *piVar1;
  int unaff_EBP;
  
  piVar1 = *(int **)(unaff_EBP + -0x34);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))(piVar1 != *(int **)(unaff_EBP + -0x30));
  }
  return;
}

