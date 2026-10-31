/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140007aee */

void FUN_140007aee(longlong param_1)

{
  LOCK();
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  UNLOCK();
  return;
}

