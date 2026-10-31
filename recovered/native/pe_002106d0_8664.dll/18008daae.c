/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18008daae */

undefined8 *
FUN_18008daae(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0xf;
  FUN_18008db1c(&DAT_1802b0ea8,param_1,param_2,param_4,param_2,0xfffffffffffffffe);
  return param_2;
}

