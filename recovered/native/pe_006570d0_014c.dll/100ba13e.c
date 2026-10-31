/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100ba13e */

void Unwind_100ba13e(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x18);
  FUN_100b9a98();
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(*(int *)(unaff_EBP + -0x14) + 0xc);
  return;
}

