/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1000de2a */

void Unwind_1000de2a(void)

{
  int iVar1;
  int unaff_EBP;
  
  iVar1 = *(int *)(*(int *)(unaff_EBP + -0x14) + 0x24);
  if (iVar1 != 0) {
    thunk_FUN_10274120(iVar1);
  }
  *(undefined4 *)(*(int *)(unaff_EBP + -0x14) + 0x24) = 0;
  return;
}

