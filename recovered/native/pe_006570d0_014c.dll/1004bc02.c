/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1004bc02 */

void Unwind_1004bc02(void)

{
  int unaff_EBP;
  
  *(undefined ***)(unaff_EBP + -0xcc) = std::exception::vftable;
  FUN_10259020(unaff_EBP + -200);
  return;
}

