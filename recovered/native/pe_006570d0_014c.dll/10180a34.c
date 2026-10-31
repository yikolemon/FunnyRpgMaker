/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10180a34 */

void Unwind_10180a34(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  int unaff_EBP;
  
  uVar1 = *(undefined1 *)(unaff_EBP + -0x12);
  uVar2 = *(undefined1 *)(unaff_EBP + -0x11);
  *(undefined1 *)(unaff_EBP + -0x13) = uVar2;
  *(undefined1 *)(unaff_EBP + -0x17) = uVar1;
  FUN_10001fee();
  *(undefined1 *)(unaff_EBP + -0x13) = uVar2;
  *(undefined1 *)(unaff_EBP + -0x17) = uVar1;
  return;
}

