/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101ca002 */

void Unwind_101ca002(void)

{
  int iVar1;
  int *piVar2;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + -0x20);
  piVar2 = *(int **)(unaff_EBP + -0x30);
  *piVar2 = iVar1;
  *(int **)(iVar1 + 4) = piVar2;
  return;
}

