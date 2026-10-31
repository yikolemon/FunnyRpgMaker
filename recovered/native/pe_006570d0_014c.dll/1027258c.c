/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1027258c */

void FUN_1027258c(void)

{
  int iVar1;
  
  iVar1 = FUN_10272260();
  if (0 < *(int *)(iVar1 + 0x18)) {
    iVar1 = FUN_10272260();
    *(int *)(iVar1 + 0x18) = *(int *)(iVar1 + 0x18) + -1;
  }
  return;
}

