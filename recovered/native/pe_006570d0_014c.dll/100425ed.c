/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100425ed */

void Unwind_100425ed(void)

{
  int iVar1;
  int unaff_EBP;
  
  iVar1 = *(int *)(*(int *)(unaff_EBP + 8) + 0x38);
  if (iVar1 != *(int *)(unaff_EBP + 8) + 0x48) {
    thunk_FUN_10274120(iVar1);
  }
  return;
}

