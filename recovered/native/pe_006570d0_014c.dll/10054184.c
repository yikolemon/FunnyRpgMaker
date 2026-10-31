/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10054184 */

void Unwind_10054184(void)

{
  int unaff_EBP;
  
  **(undefined4 **)(unaff_EBP + -0x14) = std::exception::vftable;
  FUN_10259020(*(undefined4 *)(unaff_EBP + -0x1c));
  return;
}

