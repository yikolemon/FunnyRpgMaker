/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10061039 */

void Unwind_10061039(void)

{
  int iVar1;
  int unaff_EBP;
  int iVar2;
  
  iVar1 = *(int *)(unaff_EBP + 0x1c);
  for (iVar2 = *(int *)(unaff_EBP + -0x14); iVar2 != iVar1; iVar2 = iVar2 + 0x30) {
    FUN_10061bef(iVar2);
  }
  return;
}

