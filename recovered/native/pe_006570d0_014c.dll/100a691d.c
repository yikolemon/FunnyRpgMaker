/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100a691d */

void Unwind_100a691d(void)

{
  int iVar1;
  int unaff_EBP;
  int iVar2;
  
  iVar1 = *(int *)(unaff_EBP + 0x1c);
  for (iVar2 = *(int *)(unaff_EBP + -0x14); iVar2 != iVar1; iVar2 = iVar2 + 0x4c) {
    FUN_100a49ca();
  }
  return;
}

