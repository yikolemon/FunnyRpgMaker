/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10186d7e */

void Unwind_10186d7e(void)

{
  int iVar1;
  int unaff_EBP;
  
  iVar1 = *(int *)(*(int *)(unaff_EBP + -0x38) + 0x50);
  if (iVar1 != 0) {
    FUN_100fa2cb(iVar1);
  }
  return;
}

