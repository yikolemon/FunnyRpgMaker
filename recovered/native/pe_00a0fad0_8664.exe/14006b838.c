/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14006b838 */

void FUN_14006b838(longlong *param_1,ulonglong param_2)

{
  longlong lVar1;
  
  if (param_2 >> 0x3c == 0) {
    lVar1 = FUN_140006280(param_2 * 0x10);
    *param_1 = lVar1;
    param_1[1] = lVar1;
    param_1[2] = param_2 * 0x10 + lVar1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1400062c7();
}

