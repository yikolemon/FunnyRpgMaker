/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801e205e */

void FUN_1801e205e(longlong param_1,undefined8 *param_2)

{
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 3);
  *(undefined8 *)(param_1 + 8) = *param_2;
  *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)((longlong)param_2 + 0x1c);
  FUN_1801e829d(param_1,param_2,0);
  FUN_1801e829d(param_1,param_2,1);
  return;
}

