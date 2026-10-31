/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100e0f03 */

void Unwind_100e0f03(void)

{
  undefined1 uVar1;
  int unaff_EBP;
  
  uVar1 = *(undefined1 *)(unaff_EBP + -0x616c);
  *(undefined1 *)(unaff_EBP + -0x6161) = uVar1;
  if (*(char *)(unaff_EBP + -0x616d) == '\x01') {
    FUN_10001f04();
  }
  *(undefined1 *)(unaff_EBP + -0x6161) = uVar1;
  return;
}

