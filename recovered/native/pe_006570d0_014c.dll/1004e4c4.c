/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1004e4c4 */

void Unwind_1004e4c4(void)

{
  int unaff_EBP;
  
  *(undefined ***)(unaff_EBP + -0x8c) = std::exception::vftable;
  FUN_10259020(unaff_EBP + -0x88);
  return;
}

