/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14027f1d6 */

void FUN_14027f1d6(longlong *param_1,ulonglong param_2)

{
  longlong lVar1;
  
  if (param_2 >> 0x3b == 0) {
    lVar1 = FUN_1402128b0(param_2 * 0x20);
    *param_1 = lVar1;
    param_1[1] = lVar1;
    param_1[2] = param_2 * 0x20 + lVar1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1402128f7();
}

