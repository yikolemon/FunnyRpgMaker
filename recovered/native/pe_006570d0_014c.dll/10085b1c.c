/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10085b1c */

void Unwind_10085b1c(void)

{
  int unaff_EBP;
  
  *(undefined ***)(unaff_EBP + -0xa4) = std::exception::vftable;
  FUN_10259020(unaff_EBP + -0xa0);
  return;
}

