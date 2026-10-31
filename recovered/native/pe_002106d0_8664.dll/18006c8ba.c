/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18006c8ba */

undefined8 * FUN_18006c8ba(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  
  *param_1 = param_2;
  param_1[1] = 0;
  lVar1 = FUN_180239630(0x50);
  param_1[1] = lVar1;
  FUN_1800181b0(lVar1 + 0x10,param_3);
  return param_1;
}

