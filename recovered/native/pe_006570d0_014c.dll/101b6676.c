/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101b6676 */

void Unwind_101b6676(void)

{
  int iVar1;
  int unaff_EBP;
  int iVar2;
  
  iVar1 = *(int *)(unaff_EBP + -0x18);
  if (*(int *)(unaff_EBP + -0x1c) != -0x14) {
    iVar2 = -*(int *)(unaff_EBP + -0x1c);
    do {
      if (*(int *)(iVar1 + 8) != 0) {
        FUN_100fa2cb(*(int *)(iVar1 + 8));
      }
      iVar2 = iVar2 + -0x20;
      iVar1 = iVar1 + -0x20;
    } while (iVar2 != 0x14);
  }
  return;
}

