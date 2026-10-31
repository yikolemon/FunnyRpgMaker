/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1007e166 */

void Unwind_1007e166(void)

{
  int iVar1;
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + 0x20) != 0) {
    iVar1 = *(int *)(unaff_EBP + -0x14);
    *(undefined ***)(iVar1 + 0x78) = std::ios_base::vftable;
    FUN_1022dae0(iVar1 + 0x78);
  }
  return;
}

