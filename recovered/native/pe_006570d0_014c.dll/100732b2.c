/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100732b2 */

void Unwind_100732b2(void)

{
  int iVar1;
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + 0x14) != 0) {
    iVar1 = *(int *)(unaff_EBP + -0x14);
    *(undefined ***)(iVar1 + 0x78) = std::ios_base::vftable;
    FUN_1022dae0(iVar1 + 0x78);
  }
  return;
}

