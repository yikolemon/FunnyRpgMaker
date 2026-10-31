/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140277caa */

undefined8 *
FUN_140277caa(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  
  *param_1 = param_2;
  param_1[1] = 0;
  lVar1 = FUN_14044ab00(0x50);
  param_1[1] = lVar1;
  FUN_140277e54(lVar1 + 0x10,param_3,param_4);
  return param_1;
}

