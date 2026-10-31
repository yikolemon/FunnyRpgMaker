/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800667da */

undefined8 *
FUN_1800667da(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  
  *param_1 = param_2;
  param_1[1] = 0;
  lVar1 = FUN_180239630(0x50);
  param_1[1] = lVar1;
  FUN_180066984(lVar1 + 0x10,param_3,param_4);
  return param_1;
}

