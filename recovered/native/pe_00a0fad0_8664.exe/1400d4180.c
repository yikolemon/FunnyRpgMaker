/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400d4180 */

longlong FUN_1400d4180(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = -1;
  do {
    lVar2 = lVar1 * 2;
    lVar1 = lVar1 + 1;
  } while (*(short *)(param_1 + 2 + lVar2) != 0);
  lVar1 = lVar1 * 2 + 2;
  lVar2 = _malloc_base(lVar1);
  if (lVar2 != 0) {
    FUN_140135ff0(lVar2,param_1,lVar1);
  }
  return lVar2;
}

