/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14011d440 */

longlong FUN_14011d440(longlong param_1,undefined8 param_2,ulonglong param_3)

{
  ulonglong uVar1;
  
  uVar1 = FUN_14011d0a0(param_2,param_3);
  FUN_140135ff0(param_1,param_2,uVar1 * 2);
  if (uVar1 < param_3) {
    FUN_1401366a0(uVar1 * 2 + param_1,0,(param_3 - uVar1) * 2);
  }
  return param_1;
}

