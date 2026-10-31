/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801e1c93 */

void FUN_1801e1c93(undefined8 *param_1)

{
  UnmapViewOfFile((LPCVOID)param_1[2]);
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  *param_1 = 0;
  return;
}

