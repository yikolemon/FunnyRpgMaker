/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101b67f2 */

void Unwind_101b67f2(void)

{
  int iVar1;
  int unaff_EBP;
  
  iVar1 = *(int *)(*(int *)(unaff_EBP + -0x18) + 0x54 + *(int *)(unaff_EBP + -0x14));
  if (iVar1 != 0) {
    FUN_100fa2cb(iVar1);
  }
  return;
}

