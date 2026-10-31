/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14005e026 */

void FUN_14005e026(longlong param_1,int param_2,undefined4 param_3)

{
  if (*(int *)(param_1 + 0x70) == param_2) {
    FUN_14005ddac();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14005deae(param_1,param_3);
}

