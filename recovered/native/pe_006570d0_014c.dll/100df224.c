/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100df224 */

void Unwind_100df224(void)

{
  undefined1 uVar1;
  int unaff_EBP;
  
  uVar1 = *(undefined1 *)(unaff_EBP + -0xae);
  *(undefined1 *)(unaff_EBP + -0xa5) = uVar1;
  if (*(char *)(unaff_EBP + -0xad) == '\x01') {
    FUN_10001f04();
  }
  *(undefined1 *)(unaff_EBP + -0xa5) = uVar1;
  return;
}

