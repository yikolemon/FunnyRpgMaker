/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1005eabd */

void Unwind_1005eabd(void)

{
  undefined1 uVar1;
  int unaff_EBP;
  
  uVar1 = *(undefined1 *)(unaff_EBP + -0x333);
  *(undefined1 *)(unaff_EBP + -0x347) = uVar1;
  *(undefined1 *)(unaff_EBP + -0x346) = uVar1;
  if (*(char *)(unaff_EBP + -0x332) == '\x01') {
    FUN_10001f04();
  }
  *(undefined1 *)(unaff_EBP + -0x347) = uVar1;
  *(undefined1 *)(unaff_EBP + -0x346) = uVar1;
  return;
}

