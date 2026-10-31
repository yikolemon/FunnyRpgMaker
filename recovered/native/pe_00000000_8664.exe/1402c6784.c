/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1402c6784 */

void FUN_1402c6784(longlong *param_1,ulonglong param_2)

{
  longlong lVar1;
  
  if (param_2 < 0x666666666666667) {
    lVar1 = FUN_1402128b0(param_2 * 0x28);
    *param_1 = lVar1;
    param_1[1] = lVar1;
    param_1[2] = lVar1 + param_2 * 0x28;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1402128f7();
}

