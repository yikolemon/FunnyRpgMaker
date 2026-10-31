/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100bb5db */

void Unwind_100bb5db(void)

{
  int unaff_EBP;
  int iVar1;
  
  *(undefined1 *)(unaff_EBP + -0x11) = 1;
  *(int *)(unaff_EBP + -0x1c) = unaff_EBP + -0x84;
  for (iVar1 = *(int *)(unaff_EBP + -0x18); iVar1 != -0x20; iVar1 = iVar1 + -0x20) {
    FUN_10001fee();
  }
  *(undefined1 *)(unaff_EBP + -0x11) = 1;
  *(int *)(unaff_EBP + -0x1c) = unaff_EBP + -0x84;
  return;
}

