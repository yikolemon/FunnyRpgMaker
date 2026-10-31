/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00408a5a */

void Unwind_00408a5a(void)

{
  int iVar1;
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + 0x18) != 0) {
    iVar1 = *(int *)(unaff_EBP + -0x14);
    *(undefined ***)(iVar1 + 0x20) = std::ios_base::vftable;
    FUN_00481d80(iVar1 + 0x20);
  }
  return;
}

