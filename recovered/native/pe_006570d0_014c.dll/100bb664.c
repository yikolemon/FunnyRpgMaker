/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100bb664 */

void Unwind_100bb664(void)

{
  int iVar1;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + -0x1c);
  if (unaff_EBP + -0xa4 != iVar1 && (*(byte *)(unaff_EBP + -0x11) & 1) == 0) {
    do {
      iVar1 = iVar1 + -0x20;
      FUN_10001fee();
    } while (iVar1 != unaff_EBP + -0xa4);
  }
  return;
}

