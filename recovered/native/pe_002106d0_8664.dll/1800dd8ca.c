/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800dd8ca */

void FUN_1800dd8ca(longlong *param_1,ulonglong param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar4 = *param_1;
  lVar3 = param_1[1];
  uVar1 = lVar3 - lVar4 >> 4;
  if (param_2 < uVar1) {
    lVar4 = lVar4 + param_2 * 0x10;
    for (lVar2 = lVar4; lVar2 != lVar3; lVar2 = lVar2 + 0x10) {
      FUN_1800137c6(lVar2);
    }
    param_1[1] = lVar4;
  }
  else if (uVar1 < param_2) {
    if ((ulonglong)(param_1[2] - lVar4 >> 4) < param_2) {
      FUN_1800dd962(param_1);
      return;
    }
    if (param_2 != uVar1) {
      lVar4 = uVar1 - param_2;
      do {
        FUN_18004c358(lVar3,0);
        lVar3 = lVar3 + 0x10;
        lVar4 = lVar4 + 1;
      } while (lVar4 != 0);
    }
    param_1[1] = lVar3;
  }
  return;
}

