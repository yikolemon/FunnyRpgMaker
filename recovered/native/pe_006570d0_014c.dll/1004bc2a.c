/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1004bc2a */

void Unwind_1004bc2a(void)

{
  int unaff_EBP;
  
  *(undefined ***)(unaff_EBP + -0xdc) = std::exception::vftable;
  FUN_10259020(unaff_EBP + -0xd8);
  return;
}

