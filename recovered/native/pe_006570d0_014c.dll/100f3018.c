/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100f3018 */

void Unwind_100f3018(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = *(undefined4 **)(unaff_EBP + -0x14);
  *puVar1 = std::exception::vftable;
  FUN_10259020(puVar1 + 1);
  return;
}

