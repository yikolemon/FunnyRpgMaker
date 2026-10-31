/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400587c0 */

void FUN_1400587c0(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  
  if (-1 < param_2) {
    lVar1 = FUN_140006280(param_2);
    *param_1 = lVar1;
    param_1[1] = lVar1;
    param_1[2] = lVar1 + param_2;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14000a2c6();
}

