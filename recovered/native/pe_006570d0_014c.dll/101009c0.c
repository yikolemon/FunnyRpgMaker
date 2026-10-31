/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101009c0 */

void Unwind_101009c0(void)

{
  int iVar1;
  int unaff_EBP;
  
  iVar1 = *(int *)(*(int *)(unaff_EBP + -0x14) + 8);
  if (iVar1 != 0) {
    FUN_100fa2cb(iVar1);
  }
  return;
}

