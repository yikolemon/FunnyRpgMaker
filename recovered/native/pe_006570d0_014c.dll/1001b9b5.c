/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1001b9b5 */

void Unwind_1001b9b5(void)

{
  undefined1 uVar1;
  int unaff_EBP;
  
  uVar1 = *(undefined1 *)(unaff_EBP + -0x14);
  *(undefined1 *)(unaff_EBP + -0x11) = uVar1;
  if (*(char *)(unaff_EBP + -0x15) == '\x01') {
    FUN_10001fee();
  }
  *(undefined1 *)(unaff_EBP + -0x11) = uVar1;
  return;
}

