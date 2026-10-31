/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101022d6 */

void Unwind_101022d6(void)

{
  int iVar1;
  int unaff_EBP;
  
  iVar1 = *(int *)(*(int *)(unaff_EBP + -0x14) + 0xf4);
  if (iVar1 != 0) {
    FUN_100fa2cb(iVar1);
  }
  return;
}

