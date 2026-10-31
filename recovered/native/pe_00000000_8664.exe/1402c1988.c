/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1402c1988 */

void FUN_1402c1988(longlong *param_1,ulonglong param_2)

{
  longlong lVar1;
  
  if (param_2 < 0x333333333333334) {
    lVar1 = FUN_1402128b0(param_2 * 0x50);
    *param_1 = lVar1;
    param_1[1] = lVar1;
    param_1[2] = lVar1 + param_2 * 0x50;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1402128f7();
}

