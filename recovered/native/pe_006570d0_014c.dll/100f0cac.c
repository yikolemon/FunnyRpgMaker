/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100f0cac */

void Unwind_100f0cac(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  FUN_100f0cde();
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(*(int *)(unaff_EBP + -0x18) + 4);
  return;
}

