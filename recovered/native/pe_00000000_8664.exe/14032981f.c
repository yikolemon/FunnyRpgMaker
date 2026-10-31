/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14032981f */

void FUN_14032981f(void)

{
  int iVar1;
  
  iVar1 = *(int *)(*(longlong *)(DAT_14062a630 + 0x1608) + 0x148);
  if (1 < iVar1) {
    *(int *)(*(longlong *)(DAT_14062a630 + 0x1608) + 0x148) = iVar1 + -1;
    return;
  }
  FUN_140312b68("dSettings ");
  return;
}

