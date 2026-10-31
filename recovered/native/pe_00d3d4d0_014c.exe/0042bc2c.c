/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0042bc2c */

void Unwind_0042bc2c(void)

{
  int *piVar1;
  int unaff_EBP;
  
  if ((*(char *)(*(int *)(unaff_EBP + -0x14) + 200) == '\x01') &&
     (piVar1 = *(int **)(*(int *)(unaff_EBP + -0x14) + 0xc4), piVar1 != (int *)0x0)) {
    (**(code **)(*piVar1 + 0x10))(piVar1 != *(int **)(unaff_EBP + -0x1c));
    *(undefined4 *)(*(int *)(unaff_EBP + -0x14) + 0xc4) = 0;
  }
  return;
}

