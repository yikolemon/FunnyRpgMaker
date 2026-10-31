/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140058294 */

bool FUN_140058294(undefined8 *param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  
  lVar2 = FUN_14011cf50(param_2);
  plVar1 = param_1 + 2;
  if (7 < (ulonglong)param_1[3]) {
    param_1 = (undefined8 *)*param_1;
  }
  if (*plVar1 == lVar2) {
    if (lVar2 == 0) {
      bVar4 = true;
    }
    else {
      lVar3 = thunk_FUN_1400db6c0(param_1,param_2,lVar2);
      bVar4 = lVar3 == lVar2;
    }
  }
  else {
    bVar4 = false;
  }
  return bVar4;
}

