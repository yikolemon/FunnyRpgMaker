/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180063242 */

longlong FUN_180063242(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = 0;
  while( true ) {
    if (*(int *)(param_1 + lVar1) == 0) {
      return -1;
    }
    if (*(int *)(param_1 + lVar1) == 0x5d) break;
    lVar1 = lVar1 + 4;
  }
  return lVar1 >> 2;
}

