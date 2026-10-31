/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1007ed64 */

void Unwind_1007ed64(void)

{
  int iVar1;
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + 0x20) != 0) {
    iVar1 = *(int *)(unaff_EBP + -0x14);
    *(undefined ***)(iVar1 + 0x68) = std::ios_base::vftable;
    FUN_1022dae0(iVar1 + 0x68);
  }
  return;
}

