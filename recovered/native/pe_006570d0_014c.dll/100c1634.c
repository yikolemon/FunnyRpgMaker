/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100c1634 */

void Unwind_100c1634(void)

{
  int unaff_EBP;
  
  *(int *)(unaff_EBP + -0x28) = unaff_EBP + -400;
  *(undefined1 *)(unaff_EBP + -0x13) = 1;
  *(undefined1 *)(unaff_EBP + -0x14) = 1;
  FUN_10004eae();
  *(int *)(unaff_EBP + -0x28) = unaff_EBP + -400;
  *(undefined1 *)(unaff_EBP + -0x13) = 1;
  *(undefined1 *)(unaff_EBP + -0x14) = 1;
  return;
}

