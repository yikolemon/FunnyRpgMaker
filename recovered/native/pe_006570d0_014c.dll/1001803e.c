/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1001803e */

void Unwind_1001803e(void)

{
  int iVar1;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + -0x14);
  *(undefined ***)(iVar1 + 0x10) = std::exception::vftable;
  FUN_10259020(iVar1 + 0x14);
  return;
}

