/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0042ee24 */

void Unwind_0042ee24(void)

{
  int *piVar1;
  int unaff_EBP;
  
  piVar1 = *(int **)(unaff_EBP + 0x78);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))(piVar1 != (int *)(unaff_EBP + 0x54));
    *(undefined4 *)(unaff_EBP + 0x78) = 0;
  }
  return;
}

