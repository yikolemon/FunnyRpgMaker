/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800db559 */

void FUN_1800db559(longlong *param_1,longlong *param_2,longlong *param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  lVar3 = (longlong)param_3 - (longlong)param_1 >> 3;
  if (lVar3 < 0x29) {
    lVar3 = *param_2;
    if (lVar3 < *param_1) {
      *param_2 = *param_1;
      *param_1 = lVar3;
      lVar3 = *param_2;
    }
    lVar1 = *param_3;
    if (lVar1 < lVar3) {
      *param_3 = lVar3;
      *param_2 = lVar1;
      if (lVar1 < *param_1) {
        *param_2 = *param_1;
        *param_1 = lVar1;
      }
    }
  }
  else {
    uVar4 = lVar3 + 1;
    uVar2 = uVar4 >> 3;
    lVar3 = *(longlong *)((longlong)param_1 + (uVar4 & 0xfffffffffffffff8));
    if (lVar3 < *param_1) {
      param_1[uVar2] = *param_1;
      *param_1 = lVar3;
      lVar3 = param_1[uVar2];
    }
    lVar1 = param_1[uVar2 * 2];
    if (lVar1 < lVar3) {
      param_1[uVar2 * 2] = lVar3;
      param_1[uVar2] = lVar1;
      if (lVar1 < *param_1) {
        param_1[uVar2] = *param_1;
        *param_1 = lVar1;
      }
    }
    lVar3 = *param_2;
    if (lVar3 < param_2[-uVar2]) {
      *param_2 = param_2[-uVar2];
      param_2[-uVar2] = lVar3;
      lVar3 = *param_2;
    }
    lVar1 = param_2[uVar2];
    if (lVar1 < lVar3) {
      param_2[uVar2] = lVar3;
      *param_2 = lVar1;
      if (lVar1 < param_2[-uVar2]) {
        *param_2 = param_2[-uVar2];
        param_2[-uVar2] = lVar1;
      }
    }
    lVar3 = param_3[-uVar2];
    if (lVar3 < param_3[uVar2 * -2]) {
      param_3[-uVar2] = param_3[uVar2 * -2];
      param_3[uVar2 * -2] = lVar3;
      lVar3 = param_3[-uVar2];
    }
    lVar1 = *param_3;
    if (lVar1 < lVar3) {
      *param_3 = lVar3;
      param_3[-uVar2] = lVar1;
      if (lVar1 < param_3[uVar2 * -2]) {
        param_3[-uVar2] = param_3[uVar2 * -2];
        param_3[uVar2 * -2] = lVar1;
      }
    }
    lVar3 = *param_2;
    if (lVar3 < param_1[uVar2]) {
      *param_2 = param_1[uVar2];
      param_1[uVar2] = lVar3;
      lVar3 = *param_2;
    }
    lVar1 = param_3[-uVar2];
    if (lVar1 < lVar3) {
      param_3[-uVar2] = lVar3;
      *param_2 = lVar1;
      if (lVar1 < param_1[uVar2]) {
        *param_2 = param_1[uVar2];
        param_1[uVar2] = lVar1;
      }
    }
  }
  return;
}

