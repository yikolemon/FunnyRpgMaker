/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1005e9d5 */

void Unwind_1005e9d5(void)

{
  undefined1 uVar1;
  int unaff_EBP;
  
  uVar1 = *(undefined1 *)(unaff_EBP + -0x336);
  *(undefined1 *)(unaff_EBP + -0x334) = uVar1;
  if (*(char *)(unaff_EBP + -0x335) == '\x01') {
    FUN_10001f04();
  }
  *(undefined1 *)(unaff_EBP + -0x334) = uVar1;
  return;
}

