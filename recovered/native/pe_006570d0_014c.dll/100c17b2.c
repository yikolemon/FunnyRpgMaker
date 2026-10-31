/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100c17b2 */

void Unwind_100c17b2(void)

{
  undefined1 uVar1;
  undefined4 uVar2;
  int unaff_EBP;
  
  uVar1 = *(undefined1 *)(unaff_EBP + -0x1b);
  uVar2 = *(undefined4 *)(unaff_EBP + -0x38);
  *(undefined1 *)(unaff_EBP + -0x15) = 0;
  *(undefined4 *)(unaff_EBP + -0x2c) = uVar2;
  *(undefined1 *)(unaff_EBP + -0x16) = uVar1;
  FUN_1005b2e6();
  *(undefined1 *)(unaff_EBP + -0x15) = 0;
  *(undefined4 *)(unaff_EBP + -0x2c) = uVar2;
  *(undefined1 *)(unaff_EBP + -0x16) = uVar1;
  return;
}

