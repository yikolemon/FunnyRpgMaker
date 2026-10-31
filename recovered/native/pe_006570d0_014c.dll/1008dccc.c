/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1008dccc */

void Unwind_1008dccc(void)

{
  int unaff_EBP;
  int iVar1;
  
  for (iVar1 = *(int *)(unaff_EBP + -0x18); iVar1 != -0x18; iVar1 = iVar1 + -0x18) {
    FUN_10001134();
  }
  return;
}

