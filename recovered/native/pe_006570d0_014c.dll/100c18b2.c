/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100c18b2 */

void Unwind_100c18b2(void)

{
  undefined1 uVar1;
  undefined4 uVar2;
  int unaff_EBP;
  
  uVar1 = *(undefined1 *)(unaff_EBP + -0x1a);
  uVar2 = *(undefined4 *)(unaff_EBP + -0x34);
  *(undefined4 *)(unaff_EBP + -0x44) = uVar2;
  *(undefined1 *)(unaff_EBP + -0x1e) = uVar1;
  if (*(char *)(unaff_EBP + -0x19) == '\x01') {
    FUN_10001fee();
  }
  *(undefined4 *)(unaff_EBP + -0x44) = uVar2;
  *(undefined1 *)(unaff_EBP + -0x1e) = uVar1;
  return;
}

