/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140276436 */

undefined8 FUN_140276436(undefined8 param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  
  lVar1 = param_2 + ((ulonglong)((param_3 - param_2 >> 3) * -0x5555555555555555) >> 1) * 0x18;
  FUN_140276666(param_2,lVar1,param_3 + -0x18);
  FUN_140276725(param_1,param_2,lVar1,param_3);
  return param_1;
}

