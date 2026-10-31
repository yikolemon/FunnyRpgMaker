/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100c15a1 */

void Unwind_100c15a1(void)

{
  int unaff_EBP;
  
  *(undefined1 *)(unaff_EBP + -0x19) = 1;
  *(int *)(unaff_EBP + -0x34) = unaff_EBP + -0x208;
  *(undefined1 *)(unaff_EBP + -0x1a) = 1;
  FUN_10004eae();
  *(undefined1 *)(unaff_EBP + -0x19) = 1;
  *(int *)(unaff_EBP + -0x34) = unaff_EBP + -0x208;
  *(undefined1 *)(unaff_EBP + -0x1a) = 1;
  return;
}

