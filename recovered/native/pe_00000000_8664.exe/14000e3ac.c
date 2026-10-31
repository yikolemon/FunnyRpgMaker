/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14000e3ac */

void FUN_14000e3ac(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  
  if (-1 < param_2) {
    lVar1 = FUN_140001fba(param_2);
    *param_1 = lVar1;
    param_1[1] = lVar1;
    param_1[2] = lVar1 + param_2;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1400066bc();
}

