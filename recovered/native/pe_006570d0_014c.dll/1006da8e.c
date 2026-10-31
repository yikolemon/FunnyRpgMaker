/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1006da8e */

void Unwind_1006da8e(void)

{
  int iVar1;
  int unaff_EBP;
  
  iVar1 = *(int *)(*(int *)(unaff_EBP + -0x14) + 4);
  if (iVar1 != 0) {
    FUN_102283a0(iVar1,0x28);
  }
  return;
}

