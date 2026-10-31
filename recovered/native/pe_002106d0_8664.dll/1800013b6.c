/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800013b6 */

void FUN_1800013b6(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  
  lVar1 = *param_2 + 1;
  *param_2 = lVar1;
  if (-1 < lVar1) {
    FUN_1800013e0(lVar1 * 2);
    *param_2 = *param_2 + -1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_180001427();
}

