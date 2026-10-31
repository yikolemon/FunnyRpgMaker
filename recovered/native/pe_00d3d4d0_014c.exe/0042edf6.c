/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0042edf6 */

void Unwind_0042edf6(void)

{
  int *piVar1;
  int unaff_EBP;
  
  piVar1 = *(int **)(unaff_EBP + 0x50);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))(piVar1 != (int *)(unaff_EBP + 0x2c));
    *(undefined4 *)(unaff_EBP + 0x50) = 0;
  }
  return;
}

