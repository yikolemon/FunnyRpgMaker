/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18014f566 */

undefined4 * FUN_18014f566(undefined4 *param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 10) = 0;
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  *(code **)(param_1 + 4) = FUN_18001c7c4;
  param_1[6] = 1;
  return param_1;
}

