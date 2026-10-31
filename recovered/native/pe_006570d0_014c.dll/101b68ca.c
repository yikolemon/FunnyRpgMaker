/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101b68ca */

void Unwind_101b68ca(void)

{
  int iVar1;
  int unaff_EBP;
  int iVar2;
  
  iVar2 = 0x18;
  do {
    iVar1 = *(int *)(*(int *)(unaff_EBP + -0x18) + -4 + iVar2);
    if (iVar1 != 0) {
      FUN_100fa2cb(iVar1);
    }
    iVar2 = iVar2 + -0xc;
  } while (iVar2 != 0);
  return;
}

