/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100c15d2 */

void Unwind_100c15d2(void)

{
  int unaff_EBP;
  
  *(undefined1 *)(unaff_EBP + -0x17) = 1;
  *(int *)(unaff_EBP + -0x30) = unaff_EBP + -0x1e0;
  *(undefined1 *)(unaff_EBP + -0x18) = 1;
  FUN_10004eae();
  *(undefined1 *)(unaff_EBP + -0x17) = 1;
  *(int *)(unaff_EBP + -0x30) = unaff_EBP + -0x1e0;
  *(undefined1 *)(unaff_EBP + -0x18) = 1;
  return;
}

