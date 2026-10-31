/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100df1c0 */

void Unwind_100df1c0(void)

{
  undefined1 uVar1;
  int unaff_EBP;
  
  uVar1 = *(undefined1 *)(unaff_EBP + -0xb1);
  *(undefined1 *)(unaff_EBP + -0xb0) = 0;
  *(undefined1 *)(unaff_EBP + -0xaf) = uVar1;
  FUN_10001f04();
  *(undefined1 *)(unaff_EBP + -0xb0) = 0;
  *(undefined1 *)(unaff_EBP + -0xaf) = uVar1;
  return;
}

