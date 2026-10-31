/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100819c0 */

void Unwind_100819c0(void)

{
  int unaff_EBP;
  
  *(undefined ***)(unaff_EBP + -0xdc) = std::exception::vftable;
  FUN_10259020(unaff_EBP + -0xd8);
  return;
}

