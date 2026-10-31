/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10180aa6 */

void Unwind_10180aa6(void)

{
  undefined1 uVar1;
  int unaff_EBP;
  
  uVar1 = *(undefined1 *)(unaff_EBP + -0x1b);
  *(undefined1 *)(unaff_EBP + -0x14) = 0;
  *(undefined1 *)(unaff_EBP + -0x15) = uVar1;
  FUN_10001f04();
  *(undefined1 *)(unaff_EBP + -0x14) = 0;
  *(undefined1 *)(unaff_EBP + -0x15) = uVar1;
  return;
}

