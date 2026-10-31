/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100b1ac2 */

void Unwind_100b1ac2(void)

{
  undefined4 uVar1;
  int unaff_EBP;
  
  uVar1 = *(undefined4 *)(unaff_EBP + -0x18);
  FUN_10004eae();
  *(undefined4 *)(unaff_EBP + 0x10) = uVar1;
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x1c);
  return;
}

