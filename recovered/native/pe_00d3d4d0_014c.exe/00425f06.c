/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00425f06 */

void Unwind_00425f06(void)

{
  int *piVar1;
  int unaff_EBP;
  
  piVar1 = *(int **)(unaff_EBP + -0x28);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))(piVar1 != *(int **)(unaff_EBP + -0x24));
    *(undefined4 *)(*(int *)(unaff_EBP + -0x18) + 100) = 0;
  }
  *(undefined1 *)(unaff_EBP + -0x19) = 1;
  *(undefined1 *)(unaff_EBP + -0x13) = 1;
  return;
}

