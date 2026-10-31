/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800a32ee */

void FUN_1800a32ee(longlong *param_1,ulonglong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar4 = *param_1;
  lVar1 = param_1[1];
  lVar3 = lVar1 - lVar4 >> 3;
  lVar2 = param_2 + lVar3 * -0x2e8ba2e8ba2e8ba3;
  if (param_2 < (ulonglong)(lVar3 * 0x2e8ba2e8ba2e8ba3)) {
    lVar4 = lVar4 + param_2 * 0x58;
    for (lVar2 = lVar4; lVar2 != lVar1; lVar2 = lVar2 + 0x58) {
      FUN_18009ffb5(lVar2);
    }
    param_1[1] = lVar4;
  }
  else if (lVar2 != 0) {
    if ((ulonglong)((param_1[2] - lVar4 >> 3) * 0x2e8ba2e8ba2e8ba3) < param_2) {
      FUN_1800a338a(param_1);
      return;
    }
    lVar4 = FUN_1800a34f8(lVar1,lVar2,param_1);
    param_1[1] = lVar4;
  }
  return;
}

