/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1000160e */

void Unwind_1000160e(void)

{
  int unaff_EBP;
  
  **(undefined4 **)(unaff_EBP + -0x14) = std::exception::vftable;
  FUN_10259020(*(undefined4 *)(unaff_EBP + -0x18));
  return;
}

