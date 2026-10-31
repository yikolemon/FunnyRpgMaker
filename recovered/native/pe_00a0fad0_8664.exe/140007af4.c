/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140007af4 */

longlong FUN_140007af4(longlong param_1)

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

