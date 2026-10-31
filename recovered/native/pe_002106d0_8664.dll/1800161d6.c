/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800161d6 */

void FUN_1800161d6(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  
  if (-1 < param_2) {
    lVar1 = FUN_1800013e0(param_2);
    *param_1 = lVar1;
    param_1[1] = lVar1;
    param_1[2] = lVar1 + param_2;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_18001620a();
}

