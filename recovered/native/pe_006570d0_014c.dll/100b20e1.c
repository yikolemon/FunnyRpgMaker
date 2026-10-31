/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100b20e1 */

void Unwind_100b20e1(void)

{
  int iVar1;
  int unaff_EBP;
  int iVar2;
  
  iVar1 = *(int *)(unaff_EBP + 0x1c);
  for (iVar2 = *(int *)(unaff_EBP + -0x14); iVar2 != iVar1; iVar2 = iVar2 + 0x20) {
    FUN_100b2188(iVar2);
  }
  return;
}

