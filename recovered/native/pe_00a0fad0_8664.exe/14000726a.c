/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14000726a */

undefined4 * FUN_14000726a(undefined8 param_1,undefined4 *param_2,undefined4 param_3)

{
  *param_2 = param_3;
  *(undefined8 *)(param_2 + 2) = param_1;
  return param_2;
}

