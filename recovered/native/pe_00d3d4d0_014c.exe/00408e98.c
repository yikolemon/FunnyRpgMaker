/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00408e98 */

void Unwind_00408e98(void)

{
  int iVar1;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + -0x14);
  *(undefined ***)(iVar1 + 0x18) = std::ios_base::vftable;
  FUN_00481d80(iVar1 + 0x18);
  return;
}

