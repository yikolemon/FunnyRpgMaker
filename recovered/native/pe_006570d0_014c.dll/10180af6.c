/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10180af6 */

void Unwind_10180af6(void)

{
  undefined1 uVar1;
  int unaff_EBP;
  
  uVar1 = *(undefined1 *)(unaff_EBP + -0x16);
  *(undefined1 *)(unaff_EBP + -0x1c) = uVar1;
  if (*(char *)(unaff_EBP + -0x18) == '\x01') {
    FUN_10001f04();
  }
  *(undefined1 *)(unaff_EBP + -0x1c) = uVar1;
  return;
}

