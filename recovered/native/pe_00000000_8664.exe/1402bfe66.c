/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1402bfe66 */

undefined8 *
FUN_1402bfe66(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  
  *param_1 = param_2;
  param_1[1] = 0;
  lVar1 = FUN_14044ab00(0x38);
  param_1[1] = lVar1;
  FUN_1402bfef6(lVar1 + 0x10,param_3,param_4);
  return param_1;
}

