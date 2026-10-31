/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0042aec8 */

void Unwind_0042aec8(void)

{
  int *piVar1;
  int unaff_EBP;
  
  piVar1 = *(int **)(unaff_EBP + -0x40);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))(piVar1 != *(int **)(unaff_EBP + -0x24));
    *(undefined4 *)(*(int *)(unaff_EBP + -0x18) + 0x3c) = 0;
  }
  *(undefined1 *)(unaff_EBP + -0x1a) = 1;
  *(undefined1 *)(unaff_EBP + -0x19) = 1;
  return;
}

