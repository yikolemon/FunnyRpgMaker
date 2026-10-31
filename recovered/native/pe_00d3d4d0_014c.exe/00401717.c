/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00401717 */

void Unwind_00401717(void)

{
  int *piVar1;
  int unaff_EBP;
  
  piVar1 = *(int **)(unaff_EBP + -0xe0);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))(piVar1 != (int *)(unaff_EBP + -0x114));
    *(undefined4 *)(unaff_EBP + -0xf0) = 0;
  }
  return;
}

