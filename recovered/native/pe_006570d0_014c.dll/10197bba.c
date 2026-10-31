/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10197bba */

void Unwind_10197bba(void)

{
  int *piVar1;
  int iVar2;
  int unaff_EBP;
  
  piVar1 = *(int **)(*(int *)(unaff_EBP + -0x14) + 100);
  if (piVar1 != (int *)0x0) {
    iVar2 = *(int *)(unaff_EBP + -0x14);
    (**(code **)(*piVar1 + 0x10))(piVar1 != (int *)(iVar2 + 0x40));
    *(undefined4 *)(iVar2 + 100) = 0;
  }
  return;
}

