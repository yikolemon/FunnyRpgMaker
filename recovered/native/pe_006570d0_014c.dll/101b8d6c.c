/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101b8d6c */

void Unwind_101b8d6c(void)

{
  int iVar1;
  int unaff_EBP;
  
  iVar1 = *(int *)(*(int *)(unaff_EBP + -0x14) + 0x230);
  if (iVar1 != 0) {
    FUN_100fa2cb(iVar1);
  }
  return;
}

