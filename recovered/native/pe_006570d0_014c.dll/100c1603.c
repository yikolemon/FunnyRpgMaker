/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100c1603 */

void Unwind_100c1603(void)

{
  int unaff_EBP;
  
  *(undefined1 *)(unaff_EBP + -0x15) = 1;
  *(int *)(unaff_EBP + -0x2c) = unaff_EBP + -0x1b8;
  *(undefined1 *)(unaff_EBP + -0x16) = 1;
  FUN_10004eae();
  *(undefined1 *)(unaff_EBP + -0x15) = 1;
  *(int *)(unaff_EBP + -0x2c) = unaff_EBP + -0x1b8;
  *(undefined1 *)(unaff_EBP + -0x16) = 1;
  return;
}

