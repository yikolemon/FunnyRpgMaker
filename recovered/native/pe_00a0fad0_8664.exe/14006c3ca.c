/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14006c3ca */

void FUN_14006c3ca(longlong *param_1,ulonglong param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar4 = *param_1;
  lVar3 = param_1[1];
  uVar1 = (lVar3 - lVar4 >> 4) * -0x5555555555555555;
  if (param_2 < uVar1) {
    lVar4 = lVar4 + param_2 * 0x30;
    for (lVar2 = lVar4; lVar2 != lVar3; lVar2 = lVar2 + 0x30) {
      FUN_1400639fd(lVar2);
    }
    param_1[1] = lVar4;
  }
  else if (uVar1 < param_2) {
    if ((ulonglong)((param_1[2] - lVar4 >> 4) * -0x5555555555555555) < param_2) {
      FUN_14006c476(param_1);
      return;
    }
    if (param_2 != uVar1) {
      lVar4 = uVar1 - param_2;
      do {
        FUN_14006c6fa(lVar3);
        lVar3 = lVar3 + 0x30;
        lVar4 = lVar4 + 1;
      } while (lVar4 != 0);
    }
    param_1[1] = lVar3;
  }
  return;
}

