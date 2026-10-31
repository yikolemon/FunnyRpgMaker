/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0042eda2 */

void Unwind_0042eda2(void)

{
  int *piVar1;
  int unaff_EBP;
  
  piVar1 = *(int **)(*(int *)(unaff_EBP + -0x14) + 0x3c);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))(piVar1 != *(int **)(unaff_EBP + -0x28));
    *(undefined4 *)(*(int *)(unaff_EBP + -0x14) + 0x3c) = 0;
  }
  return;
}

