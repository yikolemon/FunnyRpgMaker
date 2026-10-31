/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401c6a96 */

void FUN_1401c6a96(void)

{
  longlong lVar1;
  
  lVar1 = FUN_1401aae30();
  if (0 < *(int *)(lVar1 + 0x30)) {
    lVar1 = FUN_1401aae30();
    *(int *)(lVar1 + 0x30) = *(int *)(lVar1 + 0x30) + -1;
  }
  return;
}

