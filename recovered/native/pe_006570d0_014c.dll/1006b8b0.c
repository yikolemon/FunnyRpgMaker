/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1006b8b0 */

void Unwind_1006b8b0(void)

{
  int iVar1;
  int *piVar2;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + -0x2c);
  piVar2 = *(int **)(unaff_EBP + -0x20);
  *piVar2 = iVar1;
  *(int **)(iVar1 + 4) = piVar2;
  return;
}

