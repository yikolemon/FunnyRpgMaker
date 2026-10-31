/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101007c8 */

void Unwind_101007c8(void)

{
  int iVar1;
  int unaff_EBP;
  
  iVar1 = *(int *)(*(int *)(unaff_EBP + -0x14) + 0xc);
  if (iVar1 != 0) {
    FUN_100fa2cb(iVar1);
  }
  return;
}

