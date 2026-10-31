/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140304063 */

void FUN_140304063(undefined8 *param_1,undefined4 *param_2,undefined8 *param_3)

{
  *(undefined4 *)(param_1 + 2) = *param_2;
  *param_1 = 0x1000000000000000;
  *(undefined8 *)((longlong)param_1 + 0x14) = *param_3;
  param_1[1] = 0xb000000000000004;
  return;
}

