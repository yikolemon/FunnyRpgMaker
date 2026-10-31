/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100134b7 */

void Unwind_100134b7(void)

{
  undefined1 uVar1;
  int unaff_EBP;
  
  uVar1 = *(undefined1 *)(unaff_EBP + -0xf5);
  *(undefined1 *)(unaff_EBP + -0xf4) = uVar1;
  FUN_10001fee();
  *(undefined1 *)(unaff_EBP + -0xf4) = uVar1;
  return;
}

