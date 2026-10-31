/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10022e8a */

void Unwind_10022e8a(void)

{
  int iVar1;
  int unaff_EBP;
  
  iVar1 = *(int *)(*(int *)(unaff_EBP + -0x14) + 0x18);
  if (iVar1 != *(int *)(unaff_EBP + -0x14) + 0x28) {
    thunk_FUN_10274120(iVar1);
  }
  return;
}

