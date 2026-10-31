/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10080a77 */

void Unwind_10080a77(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0xc4) = 0;
  FUN_1008136e();
  *(undefined4 *)(unaff_EBP + -0xc4) = *(undefined4 *)(*(int *)(unaff_EBP + -0xc0) + 0x30);
  return;
}

