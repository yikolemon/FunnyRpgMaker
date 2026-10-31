/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1005eaf5 */

void Unwind_1005eaf5(void)

{
  undefined1 uVar1;
  int unaff_EBP;
  
  uVar1 = *(undefined1 *)(unaff_EBP + -0x347);
  *(undefined1 *)(unaff_EBP + -0x331) = uVar1;
  if (*(char *)(unaff_EBP + -0x346) == '\x01') {
    FUN_10001f04();
  }
  *(undefined1 *)(unaff_EBP + -0x331) = uVar1;
  return;
}

