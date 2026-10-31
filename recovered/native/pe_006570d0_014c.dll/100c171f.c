/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100c171f */

void Unwind_100c171f(void)

{
  undefined1 uVar1;
  int unaff_EBP;
  
  uVar1 = *(undefined1 *)(unaff_EBP + -0x12);
  *(int *)(unaff_EBP + -0x24) = unaff_EBP + -0x168;
  *(undefined1 *)(unaff_EBP + -0x11) = uVar1;
  FUN_1005b2e6();
  *(int *)(unaff_EBP + -0x24) = unaff_EBP + -0x168;
  *(undefined1 *)(unaff_EBP + -0x11) = uVar1;
  return;
}

