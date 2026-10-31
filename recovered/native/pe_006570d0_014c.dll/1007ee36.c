/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1007ee36 */

void Unwind_1007ee36(void)

{
  int iVar1;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + -0x14);
  if (*(int *)(unaff_EBP + 0x1c) != 0) {
    *(undefined ***)(iVar1 + 8) = std::ios_base::vftable;
    FUN_1022dae0(iVar1 + 8);
  }
  return;
}

