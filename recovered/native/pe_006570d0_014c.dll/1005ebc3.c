/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1005ebc3 */

void Unwind_1005ebc3(void)

{
  undefined1 uVar1;
  int unaff_EBP;
  
  uVar1 = *(undefined1 *)(unaff_EBP + -0x330);
  *(undefined1 *)(unaff_EBP + -0x342) = uVar1;
  FUN_10001fee();
  *(undefined1 *)(unaff_EBP + -0x342) = uVar1;
  return;
}

