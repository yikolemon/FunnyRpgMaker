/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 004042d6 */

void Unwind_004042d6(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = *(undefined4 **)(unaff_EBP + -0x14);
  *puVar1 = std::exception::vftable;
  FUN_004857b0(puVar1 + 1);
  return;
}

