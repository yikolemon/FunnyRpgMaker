/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00425842 */

void Unwind_00425842(void)

{
  int *piVar1;
  int unaff_EBP;
  
  *(undefined1 *)(unaff_EBP + -0x12) = 1;
  *(undefined1 *)(unaff_EBP + -0x11) = 1;
  piVar1 = *(int **)(*(int *)(unaff_EBP + -0x18) + 0x3c);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))(piVar1 != *(int **)(unaff_EBP + -0x20));
    *(undefined4 *)(*(int *)(unaff_EBP + -0x18) + 0x3c) = 0;
  }
  *(undefined1 *)(unaff_EBP + -0x12) = 1;
  *(undefined1 *)(unaff_EBP + -0x11) = 1;
  return;
}

