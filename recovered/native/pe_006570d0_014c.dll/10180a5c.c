/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10180a5c */

void Unwind_10180a5c(void)

{
  undefined1 uVar1;
  int unaff_EBP;
  
  uVar1 = *(undefined1 *)(unaff_EBP + -0x13);
  *(undefined1 *)(unaff_EBP + -0x1a) = uVar1;
  if (*(char *)(unaff_EBP + -0x17) == '\x01') {
    FUN_10001f04();
  }
  *(undefined1 *)(unaff_EBP + -0x1a) = uVar1;
  return;
}

