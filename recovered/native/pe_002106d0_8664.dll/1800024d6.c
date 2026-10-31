/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800024d6 */

undefined4 * FUN_1800024d6(undefined8 param_1,undefined4 *param_2,undefined4 param_3)

{
  *param_2 = param_3;
  *(undefined8 *)(param_2 + 2) = param_1;
  return param_2;
}

