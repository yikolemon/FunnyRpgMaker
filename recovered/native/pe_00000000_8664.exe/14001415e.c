/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14001415e */

void FUN_14001415e(longlong param_1)

{
  LOCK();
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  UNLOCK();
  return;
}

