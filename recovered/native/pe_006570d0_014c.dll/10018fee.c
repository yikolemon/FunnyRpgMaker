/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10018fee */

void Unwind_10018fee(void)

{
  int iVar1;
  int unaff_EBP;
  
  iVar1 = *(int *)(*(int *)(unaff_EBP + -0x14) + 0x38);
  if (iVar1 != *(int *)(unaff_EBP + -0x14) + 0x48) {
    thunk_FUN_10274120(iVar1);
  }
  return;
}

