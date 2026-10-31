/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14013137f */

void FUN_14013137f(undefined8 *param_1)

{
  UnmapViewOfFile((LPCVOID)param_1[2]);
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  *param_1 = 0;
  return;
}

