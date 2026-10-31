/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10085a2c */

void Unwind_10085a2c(void)

{
  int unaff_EBP;
  
  *(undefined ***)(unaff_EBP + -0x94) = std::exception::vftable;
  FUN_10259020(unaff_EBP + -0x90);
  return;
}

