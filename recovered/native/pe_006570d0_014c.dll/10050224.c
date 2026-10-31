/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10050224 */

void Unwind_10050224(void)

{
  int unaff_EBP;
  
  *(undefined ***)(unaff_EBP + -0x94) = std::exception::vftable;
  FUN_10259020(unaff_EBP + -0x90);
  return;
}

