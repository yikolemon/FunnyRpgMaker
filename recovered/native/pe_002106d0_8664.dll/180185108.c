/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180185108 */

undefined4 * FUN_180185108(undefined4 *param_1,undefined8 param_2,undefined8 *param_3)

{
  *param_1 = *(undefined4 *)*param_3;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  return param_1;
}

