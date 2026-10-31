/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100c1679 */

void Unwind_100c1679(void)

{
  int unaff_EBP;
  
  *(int *)(unaff_EBP + -0x24) = unaff_EBP + -0x168;
  *(undefined1 *)(unaff_EBP + -0x11) = 1;
  FUN_10001fee();
  *(int *)(unaff_EBP + -0x24) = unaff_EBP + -0x168;
  *(undefined1 *)(unaff_EBP + -0x11) = 1;
  return;
}

