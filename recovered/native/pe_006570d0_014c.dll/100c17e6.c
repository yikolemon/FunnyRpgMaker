/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100c17e6 */

void Unwind_100c17e6(void)

{
  undefined1 uVar1;
  undefined4 uVar2;
  int unaff_EBP;
  
  uVar1 = *(undefined1 *)(unaff_EBP + -0x16);
  uVar2 = *(undefined4 *)(unaff_EBP + -0x2c);
  *(undefined4 *)(unaff_EBP + -0x3c) = uVar2;
  *(undefined1 *)(unaff_EBP + -0x1c) = uVar1;
  if (*(char *)(unaff_EBP + -0x15) == '\x01') {
    FUN_10001fee();
  }
  *(undefined4 *)(unaff_EBP + -0x3c) = uVar2;
  *(undefined1 *)(unaff_EBP + -0x1c) = uVar1;
  return;
}

