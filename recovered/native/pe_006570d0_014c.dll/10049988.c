/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10049988 */

void Unwind_10049988(void)

{
  undefined1 uVar1;
  int unaff_EBP;
  
  uVar1 = *(undefined1 *)(unaff_EBP + -0x12);
  *(undefined1 *)(unaff_EBP + -0x13) = uVar1;
  if (*(char *)(unaff_EBP + -0x11) == '\x01') {
    FUN_10001134();
  }
  *(undefined1 *)(unaff_EBP + -0x13) = uVar1;
  return;
}

