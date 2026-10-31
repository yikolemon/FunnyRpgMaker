/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18008819e */

void FUN_18008819e(longlong *param_1,ulonglong param_2)

{
  longlong lVar1;
  
  if (param_2 < 0x555555555555556) {
    lVar1 = FUN_1800013e0(param_2 * 0x30);
    *param_1 = lVar1;
    param_1[1] = lVar1;
    param_1[2] = lVar1 + param_2 * 0x30;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_180001427();
}

