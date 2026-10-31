/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0042ec74 */

void Unwind_0042ec74(void)

{
  int *piVar1;
  int unaff_EBP;
  
  if ((*(char *)(*(int *)(unaff_EBP + -0x14) + 0x120) == '\x01') &&
     (piVar1 = *(int **)(*(int *)(unaff_EBP + -0x14) + 0x11c), piVar1 != (int *)0x0)) {
    (**(code **)(*piVar1 + 0x10))(piVar1 != *(int **)(unaff_EBP + -0x18));
    *(undefined4 *)(*(int *)(unaff_EBP + -0x14) + 0x11c) = 0;
  }
  return;
}

