/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00427812 */

void Unwind_00427812(void)

{
  int *piVar1;
  int unaff_EBP;
  
  *(undefined1 *)(unaff_EBP + -0x1a) = 1;
  *(undefined1 *)(unaff_EBP + -0x19) = 1;
  piVar1 = *(int **)(*(int *)(unaff_EBP + -0x18) + 0x3c);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))(piVar1 != *(int **)(unaff_EBP + -0x24));
    *(undefined4 *)(*(int *)(unaff_EBP + -0x18) + 0x3c) = 0;
  }
  *(undefined1 *)(unaff_EBP + -0x1a) = 1;
  *(undefined1 *)(unaff_EBP + -0x19) = 1;
  return;
}

