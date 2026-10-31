/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140276d58 */

void FUN_140276d58(longlong *param_1,ulonglong param_2)

{
  longlong lVar1;
  
  if (param_2 >> 0x3e == 0) {
    lVar1 = FUN_1402128b0(param_2 * 4);
    *param_1 = lVar1;
    param_1[1] = lVar1;
    param_1[2] = lVar1 + param_2 * 4;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1402128f7();
}

