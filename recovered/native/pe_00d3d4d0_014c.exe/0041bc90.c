/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0041bc90 */

void Unwind_0041bc90(void)

{
  int *piVar1;
  int iVar2;
  int unaff_EBP;
  
  piVar1 = *(int **)(*(int *)(unaff_EBP + -0x14) + 0x3c);
  if (piVar1 != (int *)0x0) {
    iVar2 = *(int *)(unaff_EBP + -0x14);
    (**(code **)(*piVar1 + 0x10))(piVar1 != (int *)(iVar2 + 0x18));
    *(undefined4 *)(iVar2 + 0x3c) = 0;
  }
  return;
}

