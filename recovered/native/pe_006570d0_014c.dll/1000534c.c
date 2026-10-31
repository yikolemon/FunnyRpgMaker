/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1000534c */

void Unwind_1000534c(void)

{
  undefined1 uVar1;
  int unaff_EBP;
  
  uVar1 = *(undefined1 *)(unaff_EBP + -0x12);
  *(undefined1 *)(unaff_EBP + -0x11) = uVar1;
  FUN_10001fee();
  *(undefined1 *)(unaff_EBP + -0x11) = uVar1;
  return;
}

