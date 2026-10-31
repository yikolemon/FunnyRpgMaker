/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10073344 */

void Unwind_10073344(void)

{
  int iVar1;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + -0x14);
  *(undefined ***)(iVar1 + 0x78) = std::ios_base::vftable;
  FUN_1022dae0(iVar1 + 0x78);
  return;
}

