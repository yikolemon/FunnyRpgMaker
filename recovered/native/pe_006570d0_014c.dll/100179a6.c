/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100179a6 */

void Unwind_100179a6(void)

{
  int unaff_EBP;
  
  *(undefined ***)(*(int *)(unaff_EBP + -0x14) + 0x10) = std::exception::vftable;
  FUN_10259020(*(undefined4 *)(unaff_EBP + -0x18));
  return;
}

