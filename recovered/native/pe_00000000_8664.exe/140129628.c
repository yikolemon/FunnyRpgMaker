/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140129628 */

void FUN_140129628(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  *param_1 = param_2;
  *(undefined4 *)(param_1 + 1) = param_3;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  param_1[7] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  return;
}

