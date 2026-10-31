/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100b9de1 */

void Unwind_100b9de1(void)

{
  int iVar1;
  int unaff_EBP;
  int iVar2;
  
  iVar1 = *(int *)(unaff_EBP + 0x1c);
  for (iVar2 = *(int *)(unaff_EBP + -0x14); iVar2 != iVar1; iVar2 = iVar2 + 0x1c) {
    FUN_100b9a02();
  }
  return;
}

