/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100f31b3 */

void Unwind_100f31b3(void)

{
  int unaff_EBP;
  
  *(undefined ***)(unaff_EBP + 0x18) = std::exception::vftable;
  FUN_10259020(unaff_EBP + 0x1c);
  return;
}

