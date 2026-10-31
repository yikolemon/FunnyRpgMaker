/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100c1818 */

void Unwind_100c1818(void)

{
  undefined1 uVar1;
  undefined4 uVar2;
  int unaff_EBP;
  
  uVar1 = *(undefined1 *)(unaff_EBP + -0x1c);
  uVar2 = *(undefined4 *)(unaff_EBP + -0x3c);
  *(undefined1 *)(unaff_EBP + -0x17) = 0;
  *(undefined4 *)(unaff_EBP + -0x30) = uVar2;
  *(undefined1 *)(unaff_EBP + -0x18) = uVar1;
  FUN_1005b2e6();
  *(undefined1 *)(unaff_EBP + -0x17) = 0;
  *(undefined4 *)(unaff_EBP + -0x30) = uVar2;
  *(undefined1 *)(unaff_EBP + -0x18) = uVar1;
  return;
}

