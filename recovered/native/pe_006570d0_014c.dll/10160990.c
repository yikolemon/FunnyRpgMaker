/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10160990 */

void Unwind_10160990(void)

{
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  FUN_1012c87c();
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(*(int *)(unaff_EBP + -0x18) + 0x18);
  return;
}

