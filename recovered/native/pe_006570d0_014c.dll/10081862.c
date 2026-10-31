/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10081862 */

void Unwind_10081862(void)

{
  int unaff_EBP;
  
  *(undefined ***)(unaff_EBP + -0x11c) = std::exception::vftable;
  FUN_10259020(unaff_EBP + -0x118);
  return;
}

