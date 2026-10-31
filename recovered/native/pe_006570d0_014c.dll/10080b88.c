/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10080b88 */

void Unwind_10080b88(void)

{
  int iVar1;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + -0x14);
  *(undefined ***)(iVar1 + 0x70) = std::ios_base::vftable;
  FUN_1022dae0(iVar1 + 0x70);
  return;
}

