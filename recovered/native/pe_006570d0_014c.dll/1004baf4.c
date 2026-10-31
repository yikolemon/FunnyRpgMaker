/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1004baf4 */

void Unwind_1004baf4(void)

{
  int unaff_EBP;
  
  *(undefined ***)(unaff_EBP + -300) = std::exception::vftable;
  FUN_10259020(unaff_EBP + -0x128);
  return;
}

