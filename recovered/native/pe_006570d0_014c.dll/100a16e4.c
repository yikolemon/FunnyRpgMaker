/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100a16e4 */

void Unwind_100a16e4(void)

{
  undefined1 uVar1;
  int unaff_EBP;
  
  uVar1 = *(undefined1 *)(unaff_EBP + -0x12);
  *(undefined1 *)(unaff_EBP + -0x11) = uVar1;
  FUN_1000dcbe();
  *(undefined1 *)(unaff_EBP + -0x11) = uVar1;
  return;
}

