/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100e7100 */

void Unwind_100e7100(void)

{
  int iVar1;
  int *piVar2;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + -0x2c);
  piVar2 = *(int **)(unaff_EBP + -0x1c);
  *piVar2 = iVar1;
  *(int **)(iVar1 + 4) = piVar2;
  return;
}

