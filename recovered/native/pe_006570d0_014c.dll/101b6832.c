/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101b6832 */

void Unwind_101b6832(void)

{
  int unaff_EBP;
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(unaff_EBP + -0x14) + 0x20;
  if (iVar1 != 0) {
    iVar1 = -iVar1;
    iVar2 = *(int *)(unaff_EBP + -0x18) + *(int *)(unaff_EBP + -0x14) + 0x2c;
    do {
      if (*(int *)(iVar2 + 8) != 0) {
        FUN_100fa2cb(*(int *)(iVar2 + 8));
      }
      iVar2 = iVar2 + -0x20;
      iVar1 = iVar1 + 0x20;
    } while (iVar1 != 0);
  }
  return;
}

