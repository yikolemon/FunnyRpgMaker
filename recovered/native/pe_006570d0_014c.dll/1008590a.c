/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1008590a */

void Unwind_1008590a(void)

{
  int unaff_EBP;
  
  *(undefined ***)(unaff_EBP + -0x94) = std::exception::vftable;
  FUN_10259020(unaff_EBP + -0x90);
  return;
}

