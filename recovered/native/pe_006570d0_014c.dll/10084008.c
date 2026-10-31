/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10084008 */

void Unwind_10084008(void)

{
  int unaff_EBP;
  
  *(undefined ***)(unaff_EBP + -0x7c) = std::exception::vftable;
  FUN_10259020(unaff_EBP + -0x78);
  return;
}

