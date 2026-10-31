/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100ffb30 */

void Unwind_100ffb30(void)

{
  int iVar1;
  int unaff_EBP;
  
  iVar1 = *(int *)(*(int *)(unaff_EBP + -0x14) + 0x1fb8);
  if (iVar1 != 0) {
    FUN_100fa2cb(iVar1);
  }
  return;
}

