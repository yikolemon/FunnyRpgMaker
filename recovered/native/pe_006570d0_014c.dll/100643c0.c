/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100643c0 */

void Unwind_100643c0(void)

{
  int unaff_EBP;
  
  **(undefined4 **)(unaff_EBP + -0x14) = std::exception::vftable;
  FUN_10259020(*(undefined4 *)(unaff_EBP + -0x18));
  return;
}

