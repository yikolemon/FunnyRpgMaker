/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100caab4 */

void Unwind_100caab4(void)

{
  int unaff_EBP;
  
  *(undefined ***)(unaff_EBP + -0x50) = std::exception::vftable;
  FUN_10259020(unaff_EBP + -0x4c);
  return;
}

