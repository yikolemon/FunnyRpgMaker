/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180183935 */

void FUN_180183935(undefined8 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  *(undefined4 *)(param_1 + 3) = *param_2;
  *param_1 = 0x1000000000000000;
  *(undefined4 *)((longlong)param_1 + 0x1c) = *param_3;
  param_1[1] = 0x1000000000000004;
  *(undefined4 *)(param_1 + 4) = *param_4;
  param_1[2] = 0x1000000000000008;
  return;
}

