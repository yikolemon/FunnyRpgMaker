/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18001d8e4 */

void FUN_18001d8e4(longlong param_1,int param_2,undefined4 param_3)

{
  if (*(int *)(param_1 + 0x70) == param_2) {
    FUN_18001d674();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_18001d772(param_1,param_3);
}

