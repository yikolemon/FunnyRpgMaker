/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100870fa */

void Unwind_100870fa(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x14) != 0) {
    FUN_102283a0(*(int *)(unaff_EBP + -0x14),0xc);
  }
  return;
}

