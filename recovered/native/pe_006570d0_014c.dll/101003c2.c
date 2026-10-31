/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101003c2 */

void Unwind_101003c2(void)

{
  int iVar1;
  int unaff_EBP;
  
  iVar1 = *(int *)(*(int *)(unaff_EBP + -0x14) + 0x10);
  if (iVar1 != 0) {
    FUN_100fa2cb(iVar1);
  }
  return;
}

