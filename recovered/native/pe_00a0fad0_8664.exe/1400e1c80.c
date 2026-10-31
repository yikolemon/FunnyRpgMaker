/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400e1c80 */

longlong FUN_1400e1c80(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = -1;
  do {
    lVar1 = lVar2;
    lVar2 = lVar1 + 1;
  } while (*(short *)(param_1 + 2 + lVar1 * 2) != 0);
  lVar2 = _calloc_base(lVar1 + 2,2);
  if (lVar2 != 0) {
    FUN_140135ff0(lVar2,param_1,(lVar1 + 2) * 2);
    return lVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1400d9cb0();
}

