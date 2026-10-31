/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800b04b8 */

void FUN_1800b04b8(longlong *param_1,ulonglong param_2)

{
  longlong lVar1;
  
  if (param_2 < 0x333333333333334) {
    lVar1 = FUN_1800013e0(param_2 * 0x50);
    *param_1 = lVar1;
    param_1[1] = lVar1;
    param_1[2] = lVar1 + param_2 * 0x50;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_180001427();
}

