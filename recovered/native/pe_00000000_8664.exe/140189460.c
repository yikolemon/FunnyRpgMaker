/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140189460 */

longlong FUN_140189460(longlong param_1)

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
    FUN_1401c5180(lVar2,param_1,lVar1);
  }
  return lVar2;
}

