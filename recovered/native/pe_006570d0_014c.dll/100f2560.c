/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100f2560 */

void Unwind_100f2560(void)

{
  int unaff_EBP;
  
  *(undefined ***)(*(int *)(unaff_EBP + -0x14) + 4) = std::exception::vftable;
  FUN_10259020(*(undefined4 *)(unaff_EBP + -0x1c));
  return;
}

