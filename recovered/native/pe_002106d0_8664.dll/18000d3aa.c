/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18000d3aa */

void FUN_18000d3aa(longlong param_1)

{
  LOCK();
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  UNLOCK();
  return;
}

