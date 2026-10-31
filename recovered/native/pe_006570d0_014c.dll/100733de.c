/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100733de */

void Unwind_100733de(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = *(undefined4 **)(unaff_EBP + -0x14);
  *puVar1 = std::ios_base::vftable;
  FUN_1022dae0(puVar1);
  return;
}

