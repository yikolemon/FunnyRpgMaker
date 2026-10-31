/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800f036b */

void FUN_1800f036b(undefined8 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  *(undefined4 *)(param_1 + 2) = *param_2;
  *param_1 = 0x1000000000000000;
  *(undefined4 *)((longlong)param_1 + 0x14) = *param_3;
  param_1[1] = 0x1000000000000004;
  return;
}

