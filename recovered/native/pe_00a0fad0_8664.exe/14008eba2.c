/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14008eba2 */

undefined8 * FUN_14008eba2(undefined8 *param_1,longlong param_2,undefined4 param_3)

{
  longlong lVar1;
  
  *param_1 = 0;
  FUN_14009350c();
  lVar1 = FUN_14011cf50(param_2);
  FUN_1400933c4(param_1,param_2,param_2 + lVar1 * 2,param_3);
  return param_1;
}

