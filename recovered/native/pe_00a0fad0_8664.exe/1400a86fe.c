/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400a86fe */

void FUN_1400a86fe(longlong *param_1,ulonglong param_2)

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
      FUN_1400a710b(lVar2);
    }
    param_1[1] = lVar4;
  }
  else if (lVar2 != 0) {
    if ((ulonglong)((param_1[2] - lVar4 >> 3) * 0x2e8ba2e8ba2e8ba3) < param_2) {
      FUN_1400a879a(param_1);
      return;
    }
    lVar4 = FUN_1400a8908(lVar1,lVar2,param_1);
    param_1[1] = lVar4;
  }
  return;
}

