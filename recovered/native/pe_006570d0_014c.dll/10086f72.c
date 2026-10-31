/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10086f72 */

void Unwind_10086f72(void)

{
  int iVar1;
  int unaff_EBP;
  int iVar2;
  
  iVar1 = *(int *)(unaff_EBP + 0x1c);
  for (iVar2 = *(int *)(unaff_EBP + -0x14); iVar2 != iVar1; iVar2 = iVar2 + 0x28) {
    FUN_100803d3(iVar2);
  }
  return;
}

