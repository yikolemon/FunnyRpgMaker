/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400057d6 */

void FUN_1400057d6(longlong param_1)

{
  LOCK();
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  UNLOCK();
  return;
}

