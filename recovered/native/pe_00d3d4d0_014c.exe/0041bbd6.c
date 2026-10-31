/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0041bbd6 */

void Unwind_0041bbd6(void)

{
  int *piVar1;
  int iVar2;
  int unaff_EBP;
  
  if ((*(char *)(*(int *)(unaff_EBP + -0x14) + 200) == '\x01') &&
     (piVar1 = *(int **)(*(int *)(unaff_EBP + -0x14) + 0xc4), piVar1 != (int *)0x0)) {
    iVar2 = *(int *)(unaff_EBP + -0x14);
    (**(code **)(*piVar1 + 0x10))(piVar1 != (int *)(iVar2 + 0xa0));
    *(undefined4 *)(iVar2 + 0xc4) = 0;
  }
  return;
}

