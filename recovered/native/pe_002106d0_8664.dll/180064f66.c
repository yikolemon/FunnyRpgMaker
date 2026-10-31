/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180064f66 */

undefined8 FUN_180064f66(undefined8 param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  
  lVar1 = param_2 + ((ulonglong)((param_3 - param_2 >> 3) * -0x5555555555555555) >> 1) * 0x18;
  FUN_180065196(param_2,lVar1,param_3 + -0x18);
  FUN_180065255(param_1,param_2,lVar1,param_3);
  return param_1;
}

