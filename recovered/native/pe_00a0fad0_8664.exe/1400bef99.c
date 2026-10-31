/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400bef99 */

undefined8 FUN_1400bef99(undefined8 param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  
  lVar1 = param_2 + ((ulonglong)((param_3 - param_2 >> 3) * -0x3333333333333333) >> 1) * 0x28;
  FUN_1400bf26f(param_2,lVar1,param_3 + -0x28);
  FUN_1400bf32c(param_1,param_2,lVar1,param_3);
  return param_1;
}

