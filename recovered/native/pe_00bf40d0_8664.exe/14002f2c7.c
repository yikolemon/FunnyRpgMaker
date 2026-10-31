/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14002f2c7 */

void FUN_14002f2c7(undefined8 *param_1)

{
  UnmapViewOfFile((LPCVOID)param_1[2]);
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  *param_1 = 0;
  return;
}

