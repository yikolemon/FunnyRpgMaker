/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100bb621 */

void Unwind_100bb621(void)

{
  int unaff_EBP;
  int iVar1;
  
  *(undefined1 *)(unaff_EBP + -0x11) = 1;
  *(int *)(unaff_EBP + -0x1c) = unaff_EBP + -0x84;
  iVar1 = 0x28;
  do {
    FUN_10001fee();
    iVar1 = iVar1 + -0x20;
  } while (iVar1 != -0x18);
  *(undefined1 *)(unaff_EBP + -0x11) = 1;
  *(int *)(unaff_EBP + -0x1c) = unaff_EBP + -0x84;
  return;
}

