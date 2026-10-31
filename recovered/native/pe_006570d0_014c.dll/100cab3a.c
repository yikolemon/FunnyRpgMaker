/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100cab3a */

void Unwind_100cab3a(void)

{
  int unaff_EBP;
  
  **(undefined4 **)(unaff_EBP + -0x18) = std::exception::vftable;
  FUN_10259020(*(undefined4 *)(unaff_EBP + -0x20));
  return;
}

