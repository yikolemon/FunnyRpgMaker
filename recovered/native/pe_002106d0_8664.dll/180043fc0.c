/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180043fc0 */

void FUN_180043fc0(undefined8 param_1,undefined1 *param_2)

{
  if (param_2 == (undefined1 *)0x0) {
    return;
  }
  if (*(int *)(param_2 + 0x10) != 0) {
    FUN_180044980();
    *param_2 = 0;
    FUN_18023d6e0(param_2 + 0x18);
    FUN_18023db10(param_2 + 0x68);
    FUN_1800440c8(param_2 + 8);
  }
  if (*(int *)(param_2 + 0x10) == 0) {
    thunk_FUN_1802464a0(param_2,0xb0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_18028c2e0();
}

