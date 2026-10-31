/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100a04f0 */

void Unwind_100a04f0(void)

{
  int iVar1;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + -0x14);
  *(undefined ***)(iVar1 + 0x68) = std::ios_base::vftable;
  FUN_1022dae0(iVar1 + 0x68);
  return;
}

