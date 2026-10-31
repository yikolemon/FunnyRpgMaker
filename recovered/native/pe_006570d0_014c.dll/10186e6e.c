/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10186e6e */

void Unwind_10186e6e(void)

{
  int iVar1;
  int unaff_EBP;
  
  iVar1 = *(int *)(*(int *)(unaff_EBP + -0x14) + 0x44);
  if (iVar1 != 0) {
    FUN_100fa2cb(iVar1);
  }
  return;
}

