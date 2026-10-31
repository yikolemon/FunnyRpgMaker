/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100c16e2 */

void Unwind_100c16e2(void)

{
  int iVar1;
  int unaff_EBP;
  
  *(undefined1 *)(unaff_EBP + -0x12) = 0;
  iVar1 = unaff_EBP + -0x140;
  do {
    iVar1 = iVar1 + -0x28;
    FUN_10004eae();
    FUN_10001fee();
  } while (iVar1 != unaff_EBP + -0x208);
  *(undefined1 *)(unaff_EBP + -0x12) = 0;
  return;
}

