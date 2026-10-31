/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18000d3b0 */

longlong FUN_18000d3b0(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  
  LOCK();
  piVar1 = (int *)(param_1 + 8);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  lVar2 = 0;
  if (*piVar1 == 0) {
    lVar2 = param_1;
  }
  return lVar2;
}

