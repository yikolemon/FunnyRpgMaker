/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 004090d8 */

void Unwind_004090d8(void)

{
  int iVar1;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + -0x14);
  *(undefined ***)(iVar1 + 0x20) = std::ios_base::vftable;
  FUN_00481d80(iVar1 + 0x20);
  return;
}

