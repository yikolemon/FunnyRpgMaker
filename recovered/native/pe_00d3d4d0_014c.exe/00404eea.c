/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00404eea */

void Unwind_00404eea(void)

{
  int *piVar1;
  int *piVar2;
  int unaff_EBP;
  
  piVar1 = *(int **)(*(int *)(unaff_EBP + -0x14) + 0x24);
  if (piVar1 != (int *)0x0) {
    piVar2 = *(int **)(unaff_EBP + -0x14);
    (**(code **)(*piVar1 + 0x10))(piVar1 != piVar2);
    piVar2[9] = 0;
  }
  return;
}

