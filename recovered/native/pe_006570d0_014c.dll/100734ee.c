/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100734ee */

void Unwind_100734ee(void)

{
  int iVar1;
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + 0x18) != 0) {
    iVar1 = *(int *)(unaff_EBP + -0x14);
    *(undefined ***)(iVar1 + 0x20) = std::ios_base::vftable;
    FUN_1022dae0(iVar1 + 0x20);
  }
  return;
}

