/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18024b720 */

longlong FUN_18024b720(longlong param_1)

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
    FUN_1802a82f0(lVar2,param_1,(lVar1 + 2) * 2);
    return lVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_180239770();
}

