/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800db45f */

void FUN_1800db45f(longlong param_1,longlong param_2,ulonglong param_3,longlong *param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  lVar6 = (longlong)(param_3 - 1) >> 1;
  lVar3 = param_2;
  while (lVar3 < lVar6) {
    lVar5 = lVar3 * 2;
    lVar1 = *(longlong *)(param_1 + 8 + lVar3 * 0x10);
    lVar2 = *(longlong *)(param_1 + 0x10 + lVar3 * 0x10);
    lVar4 = lVar1;
    if (lVar1 < lVar2) {
      lVar4 = lVar2;
    }
    *(longlong *)(param_1 + lVar3 * 8) = lVar4;
    lVar3 = lVar3 * 2 + 1;
    if (lVar1 <= lVar2) {
      lVar3 = lVar5 + 2;
    }
  }
  if (((param_3 & 1) == 0) && (lVar3 == lVar6)) {
    *(undefined8 *)(param_1 + lVar6 * 8) = *(undefined8 *)(param_1 + -8 + param_3 * 8);
    lVar3 = param_3 - 1;
  }
  while (param_2 < lVar3) {
    lVar5 = lVar3 + -1 >> 1;
    lVar6 = *(longlong *)(param_1 + lVar5 * 8);
    if (*param_4 <= lVar6) break;
    *(longlong *)(param_1 + lVar3 * 8) = lVar6;
    lVar3 = lVar5;
  }
  *(longlong *)(param_1 + lVar3 * 8) = *param_4;
  return;
}

