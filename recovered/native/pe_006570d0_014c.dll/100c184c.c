/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100c184c */

void Unwind_100c184c(void)

{
  undefined1 uVar1;
  undefined4 uVar2;
  int unaff_EBP;
  
  uVar1 = *(undefined1 *)(unaff_EBP + -0x18);
  uVar2 = *(undefined4 *)(unaff_EBP + -0x30);
  *(undefined4 *)(unaff_EBP + -0x40) = uVar2;
  *(undefined1 *)(unaff_EBP + -0x1d) = uVar1;
  if (*(char *)(unaff_EBP + -0x17) == '\x01') {
    FUN_10001fee();
  }
  *(undefined4 *)(unaff_EBP + -0x40) = uVar2;
  *(undefined1 *)(unaff_EBP + -0x1d) = uVar1;
  return;
}

