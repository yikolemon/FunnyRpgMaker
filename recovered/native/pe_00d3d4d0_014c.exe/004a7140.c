/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 004a7140 */

void Unwind_004a7140(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x10) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) & 0xfffffffe;
    FUN_00480da0(&PTR_vftable_0050e910);
    return;
  }
  return;
}

