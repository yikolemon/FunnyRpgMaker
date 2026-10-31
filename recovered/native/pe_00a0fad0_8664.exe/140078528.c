/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140078528 */

void FUN_140078528(int *param_1)

{
  FUN_140078576();
  *param_1 = (int)((ulonglong)(DAT_1401cc260 - DAT_1401cc258) >> 4) * -0x33333333 +
             (int)((ulonglong)(*(longlong *)(param_1 + 4) - *(longlong *)(param_1 + 2)) >> 4) *
             -0x33333333 + -1;
  return;
}

