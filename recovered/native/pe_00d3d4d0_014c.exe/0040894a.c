/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0040894a */

void Unwind_0040894a(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = *(undefined4 **)(unaff_EBP + -0x14);
  *puVar1 = std::ios_base::vftable;
  FUN_00481d80((int)puVar1);
  return;
}

