/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100a058c */

void Unwind_100a058c(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = *(undefined4 **)(unaff_EBP + -0x14);
  *puVar1 = std::ios_base::vftable;
  FUN_1022dae0(puVar1);
  return;
}

