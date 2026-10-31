/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10074042 */

void Unwind_10074042(void)

{
  int iVar1;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + -0x14);
  *(undefined ***)(iVar1 + 8) = std::ios_base::vftable;
  FUN_1022dae0(iVar1 + 8);
  return;
}

