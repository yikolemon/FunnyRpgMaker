/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100f8f2c */

void Unwind_100f8f2c(void)

{
  int iVar1;
  int unaff_EBP;
  
  iVar1 = *(int *)(*(int *)(unaff_EBP + -0x14) + 3000);
  if (iVar1 != 0) {
    FUN_100fa2cb(iVar1);
  }
  return;
}

