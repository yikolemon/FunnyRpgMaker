/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180285280 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180285280(ulonglong param_1,ulonglong param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  ushort in_FPUStatusWord;
  ulonglong uVar4;
  
  uVar1 = param_1 & DAT_180351cf0;
  uVar3 = param_2 & DAT_180351cf0;
  if ((longlong)DAT_180351cb0 < (longlong)uVar3) {
    return;
  }
  if ((longlong)DAT_180351cb0 < (longlong)uVar1) {
    return;
  }
  if (uVar1 != DAT_180351cb0) {
    uVar4 = _DAT_180351d00;
    if (uVar3 == 0) goto LAB_1802854bc;
    if (uVar1 == uVar3) {
      return;
    }
    if ((double)(param_1 & DAT_180351cf0) <= (double)(param_2 & DAT_180351cf0)) {
      return;
    }
    uVar1 = (param_1 & DAT_180351cb0) >> 0x34 | (param_1 & DAT_180351cb0) << 0xc;
    uVar3 = (param_2 & DAT_180351cb0) >> 0x34 | (param_2 & DAT_180351cb0) << 0xc;
    if (((uVar1 == 0) || (uVar3 == 0)) || (lVar2 = uVar1 - uVar3, 0x33 < lVar2)) {
LAB_180285440:
      do {
      } while ((in_FPUStatusWord >> 8 & 4) == 4);
      return;
    }
    if (lVar2 != 0x7ff) {
      if (DAT_1804218b4 != 0) {
        return;
      }
      uVar1 = (ulonglong)
              (double)(longlong)
                      ((double)(param_1 & DAT_180351cf0) / (double)(param_2 & DAT_180351cf0)) &
              DAT_180351cb0;
      if ((longlong)((uVar1 >> 0x34 | uVar1 << 0xc) + (uVar3 - 0x7fe)) < 0x3ff) {
        return;
      }
      goto LAB_180285440;
    }
  }
  uVar4 = param_1 | (ulonglong)DAT_180351ce0;
LAB_1802854bc:
  FUN_18029c580(&DAT_180351c90,0x16,uVar4,1,8,0x21);
  return;
}

