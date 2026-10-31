/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800fbd46 */

void FUN_1800fbd46(undefined8 *param_1)

{
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[9] = *(undefined8 *)(((ulonglong)param_1 & 0xffffffffffff0000) + 0x10);
  *(undefined8 **)(((ulonglong)param_1 & 0xffffffffffff0000) + 0x10) = param_1;
  return;
}

