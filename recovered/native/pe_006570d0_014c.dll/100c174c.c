/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100c174c */

void Unwind_100c174c(void)

{
  undefined1 uVar1;
  undefined4 uVar2;
  int unaff_EBP;
  
  uVar1 = *(undefined1 *)(unaff_EBP + -0x11);
  uVar2 = *(undefined4 *)(unaff_EBP + -0x24);
  *(undefined4 *)(unaff_EBP + -0x28) = uVar2;
  *(undefined1 *)(unaff_EBP + -0x13) = 0;
  *(undefined1 *)(unaff_EBP + -0x14) = uVar1;
  FUN_1005b2e6();
  *(undefined4 *)(unaff_EBP + -0x28) = uVar2;
  *(undefined1 *)(unaff_EBP + -0x13) = 0;
  *(undefined1 *)(unaff_EBP + -0x14) = uVar1;
  return;
}

