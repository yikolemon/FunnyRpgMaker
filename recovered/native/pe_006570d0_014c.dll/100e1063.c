/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100e1063 */

void Unwind_100e1063(void)

{
  undefined1 uVar1;
  int unaff_EBP;
  
  uVar1 = *(undefined1 *)(unaff_EBP + -0x616b);
  *(undefined1 *)(unaff_EBP + -0x616a) = uVar1;
  FUN_10001fee();
  *(undefined1 *)(unaff_EBP + -0x616a) = uVar1;
  return;
}

