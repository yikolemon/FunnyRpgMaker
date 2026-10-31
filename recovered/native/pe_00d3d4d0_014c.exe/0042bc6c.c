/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0042bc6c */

void Unwind_0042bc6c(void)

{
  int *piVar1;
  int unaff_EBP;
  
  if ((*(char *)(*(int *)(unaff_EBP + -0x14) + 0x98) == '\x01') &&
     (piVar1 = *(int **)(*(int *)(unaff_EBP + -0x14) + 0x94), piVar1 != (int *)0x0)) {
    (**(code **)(*piVar1 + 0x10))(piVar1 != *(int **)(unaff_EBP + -0x20));
    *(undefined4 *)(*(int *)(unaff_EBP + -0x14) + 0x94) = 0;
  }
  return;
}

