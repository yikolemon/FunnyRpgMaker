/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10081004 */

void Unwind_10081004(void)

{
  undefined4 uVar1;
  int unaff_EBP;
  
  uVar1 = *(undefined4 *)(unaff_EBP + -0x18);
  FUN_100804b4();
  *(undefined4 *)(unaff_EBP + -0x14) = uVar1;
  return;
}

