/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00407420 */

void Unwind_00407420(void)

{
  int iVar1;
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + 0x14) != 0) {
    iVar1 = *(int *)(unaff_EBP + -0x14);
    *(undefined ***)(iVar1 + 0x68) = std::ios_base::vftable;
    FUN_00481d80(iVar1 + 0x68);
  }
  return;
}

