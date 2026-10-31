/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14006b3eb */

undefined8 * FUN_14006b3eb(undefined8 *param_1,longlong *param_2)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_14006b45e(0,(param_2[1] - *param_2 >> 4) * -0x5555555555555555,param_2,param_2 + 1,param_1,
                0xfffffffffffffffe);
  return param_1;
}

