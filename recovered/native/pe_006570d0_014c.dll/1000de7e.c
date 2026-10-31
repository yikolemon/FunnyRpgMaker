/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1000de7e */

void Unwind_1000de7e(void)

{
  int iVar1;
  int unaff_EBP;
  
  iVar1 = *(int *)(*(int *)(unaff_EBP + -0x14) + 0x14);
  if (iVar1 != 0) {
    thunk_FUN_10274120(iVar1);
  }
  *(undefined4 *)(*(int *)(unaff_EBP + -0x14) + 0x14) = 0;
  return;
}

