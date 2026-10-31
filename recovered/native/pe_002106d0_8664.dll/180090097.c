/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180090097 */

ulonglong FUN_180090097(longlong param_1,ulonglong param_2,ulonglong param_3,undefined8 param_4,
                       ulonglong param_5)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  uVar3 = 0xffffffffffffffff;
  if ((param_3 <= param_2 - param_5 && param_5 <= param_2) && (uVar3 = param_3, param_5 != 0)) {
    lVar1 = param_1 + param_2 * 2;
    lVar2 = thunk_FUN_18023b8c0(param_1 + param_3 * 2,lVar1,param_4,param_5);
    uVar3 = 0xffffffffffffffff;
    if (lVar2 != lVar1) {
      uVar3 = lVar2 - param_1 >> 1;
    }
  }
  return uVar3;
}

