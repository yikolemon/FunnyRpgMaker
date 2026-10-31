/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100c84dc */

void Unwind_100c84dc(void)

{
  int unaff_EBP;
  int iVar1;
  
  for (iVar1 = *(int *)(unaff_EBP + -0x48); unaff_EBP + -0x38 != iVar1; iVar1 = iVar1 + -8) {
    FUN_100431d4();
  }
  return;
}

