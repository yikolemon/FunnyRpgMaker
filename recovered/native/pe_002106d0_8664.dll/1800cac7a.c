/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800cac7a */

void FUN_1800cac7a(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  
  if (-1 < param_2) {
    lVar1 = FUN_1800013e0(param_2 * 2);
    *param_1 = lVar1;
    param_1[1] = lVar1;
    param_1[2] = lVar1 + param_2 * 2;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_180001427();
}

