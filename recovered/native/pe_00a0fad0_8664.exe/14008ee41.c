/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14008ee41 */

ulonglong FUN_14008ee41(longlong param_1,ulonglong param_2,ulonglong param_3,undefined8 param_4,
                       ulonglong param_5)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  uVar3 = 0xffffffffffffffff;
  if ((param_3 <= param_2 - param_5 && param_5 <= param_2) && (uVar3 = param_3, param_5 != 0)) {
    lVar1 = param_1 + param_2 * 2;
    lVar2 = thunk_FUN_1400db480(param_1 + param_3 * 2,lVar1,param_4,param_5);
    uVar3 = 0xffffffffffffffff;
    if (lVar2 != lVar1) {
      uVar3 = lVar2 - param_1 >> 1;
    }
  }
  return uVar3;
}

