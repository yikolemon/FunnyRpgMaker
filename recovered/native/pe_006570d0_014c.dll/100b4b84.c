/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100b4b84 */

void Unwind_100b4b84(void)

{
  undefined1 uVar1;
  int unaff_EBP;
  
  uVar1 = *(undefined1 *)(unaff_EBP + -0x1cc);
  *(undefined1 *)(unaff_EBP + -0x1cb) = uVar1;
  FUN_10001fee();
  *(undefined1 *)(unaff_EBP + -0x1cb) = uVar1;
  return;
}

