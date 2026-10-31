/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800431ce */

void FUN_1800431ce(longlong *param_1,ulonglong param_2)

{
  longlong lVar1;
  
  if (param_2 < 0xaaaaaaaaaaaaab) {
    lVar1 = FUN_1800013e0(param_2 * 0x180);
    *param_1 = lVar1;
    param_1[1] = lVar1;
    param_1[2] = lVar1 + param_2 * 0x180;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_180001427();
}

