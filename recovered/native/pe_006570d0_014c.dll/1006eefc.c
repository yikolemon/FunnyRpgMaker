/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1006eefc */

void Unwind_1006eefc(void)

{
  undefined1 uVar1;
  int unaff_EBP;
  
  uVar1 = *(undefined1 *)(unaff_EBP + -0x139);
  *(undefined1 *)(unaff_EBP + -0x137) = uVar1;
  if (*(char *)(unaff_EBP + -0x138) == '\x01') {
    FUN_10001f04();
  }
  *(undefined1 *)(unaff_EBP + -0x137) = uVar1;
  return;
}

