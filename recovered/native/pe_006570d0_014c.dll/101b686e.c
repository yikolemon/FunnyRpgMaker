/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101b686e */

void Unwind_101b686e(void)

{
  int unaff_EBP;
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(unaff_EBP + -0x18) + 0x4c;
  iVar2 = -0x40;
  do {
    if (*(int *)(iVar1 + 8) != 0) {
      FUN_100fa2cb(*(int *)(iVar1 + 8));
    }
    iVar1 = iVar1 + -0x20;
    iVar2 = iVar2 + 0x20;
  } while (iVar2 != 0);
  return;
}

