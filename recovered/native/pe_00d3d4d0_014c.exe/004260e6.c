/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 004260e6 */

void Unwind_004260e6(void)

{
  int *piVar1;
  int unaff_EBP;
  
  if (((*(char *)(unaff_EBP + -0x1c) == '\x01') &&
      (*(char *)(*(int *)(unaff_EBP + -0x18) + 0x11c) == '\x01')) &&
     (piVar1 = *(int **)(*(int *)(unaff_EBP + -0x18) + 0x118), piVar1 != (int *)0x0)) {
    (**(code **)(*piVar1 + 0x10))(piVar1 != *(int **)(unaff_EBP + -0x38));
  }
  return;
}

