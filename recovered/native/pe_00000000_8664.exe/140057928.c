/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140057928 */

undefined8 * FUN_140057928(undefined8 *param_1,longlong param_2,undefined4 param_3)

{
  longlong lVar1;
  
  *param_1 = 0;
  FUN_14005cbd4();
  lVar1 = FUN_1401aa6d0(param_2);
  FUN_14005ca8c(param_1,param_2,param_2 + lVar1 * 2,param_3);
  return param_1;
}

