/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1017ebd9 */

void Unwind_1017ebd9(void)

{
  undefined4 uVar1;
  int unaff_EBP;
  
  uVar1 = *(undefined4 *)(unaff_EBP + -0x1c);
  FUN_100b15ec();
  *(undefined4 *)(unaff_EBP + 0x1c) = uVar1;
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x18);
  return;
}

