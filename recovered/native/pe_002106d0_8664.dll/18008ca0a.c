/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18008ca0a */

longlong * FUN_18008ca0a(longlong *param_1,longlong *param_2)

{
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  FUN_1800448ea(param_2,param_1[1] - *param_1,param_1,param_1 + 1);
  *(undefined1 *)(*param_2 + (longlong)(int)param_1[3]) = 0x55;
  return param_2;
}

