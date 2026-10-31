/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100c187e */

void Unwind_100c187e(void)

{
  undefined1 uVar1;
  undefined4 uVar2;
  int unaff_EBP;
  
  uVar1 = *(undefined1 *)(unaff_EBP + -0x1d);
  uVar2 = *(undefined4 *)(unaff_EBP + -0x40);
  *(undefined1 *)(unaff_EBP + -0x19) = 0;
  *(undefined4 *)(unaff_EBP + -0x34) = uVar2;
  *(undefined1 *)(unaff_EBP + -0x1a) = uVar1;
  FUN_1005b2e6();
  *(undefined1 *)(unaff_EBP + -0x19) = 0;
  *(undefined4 *)(unaff_EBP + -0x34) = uVar2;
  *(undefined1 *)(unaff_EBP + -0x1a) = uVar1;
  return;
}

