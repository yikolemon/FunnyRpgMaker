/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1001c462 */

void Unwind_1001c462(void)

{
  undefined1 uVar1;
  int unaff_EBP;
  
  uVar1 = *(undefined1 *)(unaff_EBP + -0x11);
  *(undefined1 *)(unaff_EBP + -0x12) = uVar1;
  FUN_10001fee();
  *(undefined1 *)(unaff_EBP + -0x12) = uVar1;
  return;
}

