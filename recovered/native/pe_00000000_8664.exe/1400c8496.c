/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400c8496 */

undefined4 * FUN_1400c8496(undefined4 *param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 10) = 0;
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  *(code **)(param_1 + 4) = FUN_140014220;
  param_1[6] = 1;
  return param_1;
}

