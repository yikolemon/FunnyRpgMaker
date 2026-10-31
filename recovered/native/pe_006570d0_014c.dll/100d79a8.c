/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100d79a8 */

void Unwind_100d79a8(void)

{
  int iVar1;
  int unaff_EBP;
  
  iVar1 = *(int *)(*(int *)(unaff_EBP + -0x14) + 4);
  if (iVar1 != 0) {
    FUN_102283a0(iVar1,0x50);
  }
  return;
}

