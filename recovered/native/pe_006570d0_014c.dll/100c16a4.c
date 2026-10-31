/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100c16a4 */

void Unwind_100c16a4(void)

{
  int iVar1;
  int unaff_EBP;
  
  *(undefined1 *)(unaff_EBP + -0x12) = 0;
  for (iVar1 = *(int *)(unaff_EBP + -0x50); unaff_EBP + -0x208 != iVar1; iVar1 = iVar1 + -0x28) {
    FUN_10004eae();
    FUN_10001fee();
  }
  *(undefined1 *)(unaff_EBP + -0x12) = 0;
  return;
}

