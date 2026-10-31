/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800780ba */

void FUN_1800780ba(longlong *param_1,ulonglong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar1 = *param_1;
  lVar2 = param_1[1];
  lVar3 = param_2 - (lVar2 - lVar1);
  if (param_2 < (ulonglong)(lVar2 - lVar1)) {
    param_1[1] = lVar1 + param_2;
  }
  else if (lVar3 != 0) {
    if ((ulonglong)(param_1[2] - lVar1) < param_2) {
      FUN_180078114(param_1);
      return;
    }
    lVar3 = lVar3 + lVar2;
    FUN_18001621b(lVar2,lVar3);
    param_1[1] = lVar3;
  }
  return;
}

