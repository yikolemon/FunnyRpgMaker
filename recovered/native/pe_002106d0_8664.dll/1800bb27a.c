/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800bb27a */

void FUN_1800bb27a(longlong *param_1,ulonglong param_2)

{
  longlong lVar1;
  
  if (param_2 >> 0x3a == 0) {
    lVar1 = FUN_1800013e0(param_2 * 0x40);
    *param_1 = lVar1;
    param_1[1] = lVar1;
    param_1[2] = param_2 * 0x40 + lVar1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_180001427();
}

