/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400029c0 */

undefined4 * FUN_1400029c0(undefined8 param_1,undefined4 *param_2,undefined4 param_3)

{
  *param_2 = param_3;
  *(undefined8 *)(param_2 + 2) = param_1;
  return param_2;
}

