/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00426b42 */

void Unwind_00426b42(void)

{
  int *piVar1;
  int unaff_EBP;
  
  piVar1 = *(int **)(unaff_EBP + -0x3c);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))(piVar1 != *(int **)(unaff_EBP + -0x28));
    *(undefined4 *)(*(int *)(unaff_EBP + -0x18) + 100) = 0;
  }
  *(undefined1 *)(unaff_EBP + -0x1c) = 1;
  *(undefined1 *)(unaff_EBP + -0x1b) = 1;
  return;
}

