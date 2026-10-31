/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0040344a */

void Unwind_0040344a(void)

{
  int unaff_EBP;
  
  **(undefined4 **)(unaff_EBP + -0x14) = std::exception::vftable;
  FUN_004857b0(*(undefined4 **)(unaff_EBP + -0x18));
  return;
}

