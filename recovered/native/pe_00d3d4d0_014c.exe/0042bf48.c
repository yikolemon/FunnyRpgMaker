/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0042bf48 */

void Unwind_0042bf48(void)

{
  int *piVar1;
  int *piVar2;
  int unaff_EBP;
  
  if ((*(char *)(*(int *)(unaff_EBP + -0x14) + 0x28) == '\x01') &&
     (piVar1 = *(int **)(*(int *)(unaff_EBP + -0x14) + 0x24), piVar1 != (int *)0x0)) {
    piVar2 = *(int **)(unaff_EBP + -0x14);
    (**(code **)(*piVar1 + 0x10))(piVar1 != piVar2);
    piVar2[9] = 0;
  }
  return;
}

