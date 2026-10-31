/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800428f6 */

void FUN_1800428f6(longlong *param_1,ulonglong param_2)

{
  longlong lVar1;
  
  if (param_2 >> 0x3c == 0) {
    lVar1 = FUN_1800013e0(param_2 * 0x10);
    *param_1 = lVar1;
    param_1[1] = lVar1;
    param_1[2] = param_2 * 0x10 + lVar1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_180001427();
}

