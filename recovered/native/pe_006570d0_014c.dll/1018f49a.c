/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1018f49a */

void Unwind_1018f49a(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  FUN_100d6b94();
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(*(int *)(unaff_EBP + -0x18) + 0x20);
  return;
}

