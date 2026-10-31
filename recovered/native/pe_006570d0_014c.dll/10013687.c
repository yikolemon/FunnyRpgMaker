/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10013687 */

void Unwind_10013687(void)

{
  undefined1 uVar1;
  int unaff_EBP;
  
  uVar1 = *(undefined1 *)(unaff_EBP + -0xf3);
  *(undefined1 *)(unaff_EBP + -0xf2) = uVar1;
  FUN_10001fee();
  *(undefined1 *)(unaff_EBP + -0xf2) = uVar1;
  return;
}

