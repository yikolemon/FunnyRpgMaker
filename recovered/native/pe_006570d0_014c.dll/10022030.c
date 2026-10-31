/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10022030 */

void Unwind_10022030(void)

{
  int iVar1;
  int unaff_EBP;
  
  iVar1 = *(int *)(*(int *)(unaff_EBP + -0x14) + 0x110);
  if (iVar1 != 0) {
    FUN_10043be8(iVar1);
  }
  return;
}

