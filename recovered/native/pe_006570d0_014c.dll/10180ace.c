/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10180ace */

void Unwind_10180ace(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  int unaff_EBP;
  
  uVar1 = *(undefined1 *)(unaff_EBP + -0x15);
  uVar2 = *(undefined1 *)(unaff_EBP + -0x14);
  *(undefined1 *)(unaff_EBP + -0x18) = uVar2;
  *(undefined1 *)(unaff_EBP + -0x16) = uVar1;
  FUN_10001fee();
  *(undefined1 *)(unaff_EBP + -0x18) = uVar2;
  *(undefined1 *)(unaff_EBP + -0x16) = uVar1;
  return;
}

