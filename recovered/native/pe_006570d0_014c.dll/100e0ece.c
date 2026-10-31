/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100e0ece */

void Unwind_100e0ece(void)

{
  undefined1 uVar1;
  int unaff_EBP;
  
  uVar1 = *(undefined1 *)(unaff_EBP + -0x615a);
  *(undefined1 *)(unaff_EBP + -0x616d) = uVar1;
  *(undefined1 *)(unaff_EBP + -0x616c) = uVar1;
  if (*(char *)(unaff_EBP + -0x6159) == '\x01') {
    FUN_10001fee();
  }
  *(undefined1 *)(unaff_EBP + -0x616d) = uVar1;
  *(undefined1 *)(unaff_EBP + -0x616c) = uVar1;
  return;
}

