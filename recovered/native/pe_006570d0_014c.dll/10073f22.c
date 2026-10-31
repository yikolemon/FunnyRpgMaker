/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10073f22 */

void Unwind_10073f22(void)

{
  int iVar1;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + -0x14);
  *(undefined ***)(iVar1 + 0x18) = std::ios_base::vftable;
  FUN_1022dae0(iVar1 + 0x18);
  return;
}

