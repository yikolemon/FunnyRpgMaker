/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1001f50a */

void Unwind_1001f50a(void)

{
  undefined4 uVar1;
  int unaff_EBP;
  
  uVar1 = *(undefined4 *)(unaff_EBP + -0x14);
  *(undefined4 *)(unaff_EBP + -0x18) = uVar1;
  FUN_102283a0(*(undefined4 *)(unaff_EBP + -0x1c),0x14);
  *(undefined4 *)(unaff_EBP + -0x18) = uVar1;
  return;
}

