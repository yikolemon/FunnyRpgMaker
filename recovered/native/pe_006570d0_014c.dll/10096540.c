/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10096540 */

void Unwind_10096540(void)

{
  int iVar1;
  int unaff_EBP;
  int iVar2;
  
  iVar1 = *(int *)(unaff_EBP + 0x14);
  for (iVar2 = *(int *)(unaff_EBP + -0x14); iVar2 != iVar1; iVar2 = iVar2 + 0xa44) {
    FUN_1008d95c();
  }
  return;
}

