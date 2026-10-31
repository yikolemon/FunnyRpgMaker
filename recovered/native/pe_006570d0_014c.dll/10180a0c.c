/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10180a0c */

void Unwind_10180a0c(void)

{
  undefined1 uVar1;
  int unaff_EBP;
  
  uVar1 = *(undefined1 *)(unaff_EBP + -0x19);
  *(undefined1 *)(unaff_EBP + -0x11) = uVar1;
  *(undefined1 *)(unaff_EBP + -0x12) = 0;
  FUN_10001f04();
  *(undefined1 *)(unaff_EBP + -0x11) = uVar1;
  *(undefined1 *)(unaff_EBP + -0x12) = 0;
  return;
}

