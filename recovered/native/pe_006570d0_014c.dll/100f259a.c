/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100f259a */

void Unwind_100f259a(void)

{
  int unaff_EBP;
  
  *(undefined ***)(unaff_EBP + -0x34) = std::exception::vftable;
  FUN_10259020(unaff_EBP + -0x30);
  return;
}

