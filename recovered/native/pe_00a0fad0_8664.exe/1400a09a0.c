/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400a09a0 */

longlong * FUN_1400a09a0(longlong *param_1,longlong *param_2)

{
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  FUN_14005872a(param_2,param_1[1] - *param_1,param_1,param_1 + 1);
  *(undefined1 *)(*param_2 + (longlong)(int)param_1[3]) = 0x55;
  return param_2;
}

