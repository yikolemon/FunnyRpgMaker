/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400301aa */

undefined8 * FUN_1400301aa(undefined8 *param_1,longlong *param_2)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_140020d68(0,param_2[1] - *param_2 >> 5,param_2,param_2 + 1,param_1,0xfffffffffffffffe);
  return param_1;
}

