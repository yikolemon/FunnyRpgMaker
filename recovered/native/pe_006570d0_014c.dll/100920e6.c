/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100920e6 */

void Unwind_100920e6(void)

{
  undefined1 uVar1;
  int unaff_EBP;
  
  uVar1 = *(undefined1 *)(unaff_EBP + -0x11);
  *(undefined1 *)(unaff_EBP + -0x12) = uVar1;
  FUN_10001fee();
  *(undefined1 *)(unaff_EBP + -0x12) = uVar1;
  return;
}

