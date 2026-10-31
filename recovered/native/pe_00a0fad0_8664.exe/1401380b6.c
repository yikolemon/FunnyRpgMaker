/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1401380b6 */

void FUN_1401380b6(void)

{
  longlong lVar1;
  
  lVar1 = FUN_14011d6e0();
  if (0 < *(int *)(lVar1 + 0x30)) {
    lVar1 = FUN_14011d6e0();
    *(int *)(lVar1 + 0x30) = *(int *)(lVar1 + 0x30) + -1;
  }
  return;
}

