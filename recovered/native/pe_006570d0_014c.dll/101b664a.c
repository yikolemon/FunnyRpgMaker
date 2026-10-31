/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101b664a */

void Unwind_101b664a(void)

{
  int iVar1;
  int unaff_EBP;
  int iVar2;
  
  for (iVar2 = *(int *)(unaff_EBP + -0x18); iVar2 != 0; iVar2 = iVar2 + -0xc) {
    iVar1 = *(int *)(*(int *)(unaff_EBP + -0x14) + -4 + iVar2);
    if (iVar1 != 0) {
      FUN_100fa2cb(iVar1);
    }
  }
  return;
}

