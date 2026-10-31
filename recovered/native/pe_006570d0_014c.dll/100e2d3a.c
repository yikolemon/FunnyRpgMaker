/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100e2d3a */

void Unwind_100e2d3a(void)

{
  undefined1 uVar1;
  int unaff_EBP;
  
  uVar1 = *(undefined1 *)(unaff_EBP + -0x85);
  *(undefined1 *)(unaff_EBP + -0x7d) = uVar1;
  FUN_10001fee();
  *(undefined1 *)(unaff_EBP + -0x7d) = uVar1;
  return;
}

