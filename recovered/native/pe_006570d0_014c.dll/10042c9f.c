/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10042c9f */

void Unwind_10042c9f(void)

{
  int iVar1;
  int unaff_EBP;
  int iVar2;
  
  iVar1 = *(int *)(unaff_EBP + 0x1c);
  for (iVar2 = *(int *)(unaff_EBP + -0x14); iVar2 != iVar1; iVar2 = iVar2 + 0x148) {
    FUN_10042583(iVar2);
  }
  return;
}

