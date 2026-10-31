/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800aa6a8 */

void FUN_1800aa6a8(longlong *param_1,ulonglong param_2)

{
  longlong lVar1;
  
  if (param_2 < 0x19999999999999a) {
    lVar1 = FUN_1800013e0(param_2 * 0xa0);
    *param_1 = lVar1;
    param_1[1] = lVar1;
    param_1[2] = lVar1 + param_2 * 0xa0;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_180001427();
}

