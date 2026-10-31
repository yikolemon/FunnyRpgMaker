/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140029db2 */

undefined8 * FUN_140029db2(undefined8 *param_1,longlong *param_2)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_140020d68(0,param_2[1] - *param_2 >> 5,param_2,param_2 + 1);
  FUN_140006874(param_1 + 3,param_2 + 3);
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  FUN_140020d68(param_1 + 7,param_2[8] - param_2[7] >> 5,param_2 + 7,param_2 + 8);
  return param_1;
}

