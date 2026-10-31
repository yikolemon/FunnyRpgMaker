/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1009123e */

void Unwind_1009123e(void)

{
  undefined1 uVar1;
  int unaff_EBP;
  
  uVar1 = *(undefined1 *)(unaff_EBP + -0x12);
  *(undefined1 *)(unaff_EBP + -0x11) = uVar1;
  if (*(char *)(unaff_EBP + -0x13) == '\x01') {
    FUN_10001134();
  }
  *(undefined1 *)(unaff_EBP + -0x11) = uVar1;
  return;
}

