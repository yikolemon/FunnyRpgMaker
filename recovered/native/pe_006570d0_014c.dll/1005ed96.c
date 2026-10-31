/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1005ed96 */

void Unwind_1005ed96(void)

{
  undefined1 uVar1;
  int unaff_EBP;
  
  uVar1 = *(undefined1 *)(unaff_EBP + -0x32d);
  *(undefined1 *)(unaff_EBP + -0x343) = uVar1;
  if (*(char *)(unaff_EBP + -0x32e) == '\x01') {
    FUN_1006abae();
  }
  *(undefined1 *)(unaff_EBP + -0x343) = uVar1;
  return;
}

