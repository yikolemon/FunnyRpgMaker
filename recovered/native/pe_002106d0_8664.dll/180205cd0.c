/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180205cd0 */

void FUN_180205cd0(undefined1 *param_1,undefined8 param_2)

{
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_1801ced57(param_2,param_1 + 8);
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  return;
}

