/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100cb8b8 */

void Unwind_100cb8b8(void)

{
  int *piVar1;
  int iVar2;
  int unaff_EBP;
  
  piVar1 = *(int **)(*(int *)(unaff_EBP + -0x14) + 0x2c);
  if (piVar1 != (int *)0x0) {
    iVar2 = *(int *)(unaff_EBP + -0x14);
    (**(code **)(*piVar1 + 0x10))(piVar1 != (int *)(iVar2 + 8));
    *(undefined4 *)(iVar2 + 0x2c) = 0;
  }
  return;
}

