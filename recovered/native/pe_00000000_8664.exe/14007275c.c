/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14007275c */

undefined8 * FUN_14007275c(undefined8 *param_1,undefined8 param_2)

{
  longlong lVar1;
  
  *param_1 = param_2;
  param_1[1] = 0;
  lVar1 = FUN_1401887b0(0x30);
  param_1[1] = lVar1;
  FUN_140072906(lVar1 + 0x10);
  return param_1;
}

