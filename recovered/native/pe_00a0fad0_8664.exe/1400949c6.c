/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400949c6 */

void FUN_1400949c6(longlong param_1,int param_2,undefined4 param_3)

{
  if (*(int *)(param_1 + 0x70) == param_2) {
    FUN_14009474c();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14009484e(param_1,param_3);
}

