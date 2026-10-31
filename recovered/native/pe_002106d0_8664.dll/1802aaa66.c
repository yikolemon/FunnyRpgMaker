/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1802aaa66 */

void FUN_1802aaa66(void)

{
  longlong lVar1;
  
  lVar1 = FUN_18028cfc0();
  if (0 < *(int *)(lVar1 + 0x30)) {
    lVar1 = FUN_18028cfc0();
    *(int *)(lVar1 + 0x30) = *(int *)(lVar1 + 0x30) + -1;
  }
  return;
}

