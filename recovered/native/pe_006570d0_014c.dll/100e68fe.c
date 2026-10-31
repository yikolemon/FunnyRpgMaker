/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100e68fe */

void Unwind_100e68fe(void)

{
  int iVar1;
  int unaff_EBP;
  int iVar2;
  
  iVar1 = *(int *)(unaff_EBP + 0x1c);
  for (iVar2 = *(int *)(unaff_EBP + -0x14); iVar2 != iVar1; iVar2 = iVar2 + 0x30) {
    FUN_100a90c6(iVar2);
  }
  return;
}

