/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0042a716 */

void Unwind_0042a716(void)

{
  int *piVar1;
  int unaff_EBP;
  
  piVar1 = *(int **)(unaff_EBP + -0x38);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))(piVar1 != *(int **)(unaff_EBP + -0x2c));
    *(undefined4 *)(*(int *)(unaff_EBP + -0x18) + 0x90) = 0;
  }
  *(undefined1 *)(unaff_EBP + -0x12) = 1;
  *(undefined1 *)(unaff_EBP + -0x11) = 1;
  return;
}

