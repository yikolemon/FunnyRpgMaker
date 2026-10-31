/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00403a14 */

void Unwind_00403a14(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = *(undefined4 **)(unaff_EBP + -0x14);
  *puVar1 = std::exception::vftable;
  FUN_004857b0(puVar1 + 1);
  return;
}

