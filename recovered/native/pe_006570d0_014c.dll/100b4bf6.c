/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100b4bf6 */

void Unwind_100b4bf6(void)

{
  undefined1 uVar1;
  int unaff_EBP;
  
  uVar1 = *(undefined1 *)(unaff_EBP + -0x1c9);
  *(undefined1 *)(unaff_EBP + -0x1ca) = uVar1;
  FUN_10001fee();
  *(undefined1 *)(unaff_EBP + -0x1ca) = uVar1;
  return;
}

