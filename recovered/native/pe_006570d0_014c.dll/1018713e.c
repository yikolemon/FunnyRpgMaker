/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1018713e */

void Unwind_1018713e(void)

{
  int iVar1;
  int unaff_EBP;
  
  iVar1 = *(int *)(*(int *)(unaff_EBP + -0x14) + 0x98);
  if (iVar1 != 0) {
    FUN_100fa2cb(iVar1);
  }
  return;
}

