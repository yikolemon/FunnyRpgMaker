/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100c1780 */

void Unwind_100c1780(void)

{
  undefined1 uVar1;
  undefined4 uVar2;
  int unaff_EBP;
  
  uVar1 = *(undefined1 *)(unaff_EBP + -0x14);
  uVar2 = *(undefined4 *)(unaff_EBP + -0x28);
  *(undefined4 *)(unaff_EBP + -0x38) = uVar2;
  *(undefined1 *)(unaff_EBP + -0x1b) = uVar1;
  if (*(char *)(unaff_EBP + -0x13) == '\x01') {
    FUN_10001fee();
  }
  *(undefined4 *)(unaff_EBP + -0x38) = uVar2;
  *(undefined1 *)(unaff_EBP + -0x1b) = uVar1;
  return;
}

