/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100deb1e */

void Unwind_100deb1e(void)

{
  undefined4 uVar1;
  int unaff_EBP;
  
  uVar1 = *(undefined4 *)(unaff_EBP + -0x14);
  *(undefined4 *)(unaff_EBP + 0x14) = uVar1;
  FUN_102283a0(*(undefined4 *)(unaff_EBP + -0x18),0x10);
  *(undefined4 *)(unaff_EBP + 0x14) = uVar1;
  return;
}

