/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100b5f16 */

void Unwind_100b5f16(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x18) != 0) {
    FUN_102283a0(*(int *)(unaff_EBP + -0x18),0x24);
  }
  return;
}

