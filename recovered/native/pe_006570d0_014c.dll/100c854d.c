/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100c854d */

void Unwind_100c854d(void)

{
  int unaff_EBP;
  int iVar1;
  
  for (iVar1 = *(int *)(unaff_EBP + -0x4c); unaff_EBP + -0x38 != iVar1; iVar1 = iVar1 + -8) {
    FUN_100431d4();
  }
  return;
}

