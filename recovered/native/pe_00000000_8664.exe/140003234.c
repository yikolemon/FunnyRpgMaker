/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140003234 */

undefined4 * FUN_140003234(undefined8 param_1,undefined4 *param_2,undefined4 param_3)

{
  *param_2 = param_3;
  *(undefined8 *)(param_2 + 2) = param_1;
  return param_2;
}

