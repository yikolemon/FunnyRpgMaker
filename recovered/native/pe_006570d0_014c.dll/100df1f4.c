/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100df1f4 */

void Unwind_100df1f4(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  int unaff_EBP;
  
  uVar1 = *(undefined1 *)(unaff_EBP + -0xaf);
  uVar2 = *(undefined1 *)(unaff_EBP + -0xb0);
  *(undefined1 *)(unaff_EBP + -0xad) = uVar2;
  *(undefined1 *)(unaff_EBP + -0xae) = uVar1;
  FUN_10001fee();
  *(undefined1 *)(unaff_EBP + -0xad) = uVar2;
  *(undefined1 *)(unaff_EBP + -0xae) = uVar1;
  return;
}

