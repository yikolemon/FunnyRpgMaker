/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1012a937 */

void Unwind_1012a937(void)

{
  int *piVar1;
  int iVar2;
  int unaff_EBP;
  
  iVar2 = *(int *)(unaff_EBP + -0x14);
  while (iVar2 != 0) {
    iVar2 = *(int *)(unaff_EBP + -0x5c + *(int *)(unaff_EBP + -0x14));
    if (iVar2 != 0) {
      FUN_100fa2cb(iVar2);
    }
    piVar1 = (int *)(unaff_EBP + -0x14);
    *piVar1 = *piVar1 + -0xc;
    iVar2 = *piVar1;
  }
  return;
}

