/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401a34c0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1401a34c0(ulonglong param_1,ulonglong param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  ushort in_FPUStatusWord;
  ulonglong uVar4;
  
  uVar1 = param_1 & DAT_140eb5fd0;
  uVar3 = param_2 & DAT_140eb5fd0;
  if ((longlong)DAT_140eb5f90 < (longlong)uVar3) {
    return;
  }
  if ((longlong)DAT_140eb5f90 < (longlong)uVar1) {
    return;
  }
  if (uVar1 != DAT_140eb5f90) {
    uVar4 = _DAT_140eb5fe0;
    if (uVar3 == 0) goto LAB_1401a36fc;
    if (uVar1 == uVar3) {
      return;
    }
    if ((double)(param_1 & DAT_140eb5fd0) <= (double)(param_2 & DAT_140eb5fd0)) {
      return;
    }
    uVar1 = (param_1 & DAT_140eb5f90) >> 0x34 | (param_1 & DAT_140eb5f90) << 0xc;
    uVar3 = (param_2 & DAT_140eb5f90) >> 0x34 | (param_2 & DAT_140eb5f90) << 0xc;
    if (((uVar1 == 0) || (uVar3 == 0)) || (lVar2 = uVar1 - uVar3, 0x33 < lVar2)) {
LAB_1401a3680:
      do {
      } while ((in_FPUStatusWord >> 8 & 4) == 4);
      return;
    }
    if (lVar2 != 0x7ff) {
      if (DAT_140f33260 != 0) {
        return;
      }
      uVar1 = (ulonglong)
              (double)(longlong)
                      ((double)(param_1 & DAT_140eb5fd0) / (double)(param_2 & DAT_140eb5fd0)) &
              DAT_140eb5f90;
      if ((longlong)((uVar1 >> 0x34 | uVar1 << 0xc) + (uVar3 - 0x7fe)) < 0x3ff) {
        return;
      }
      goto LAB_1401a3680;
    }
  }
  uVar4 = param_1 | (ulonglong)DAT_140eb5fc0;
LAB_1401a36fc:
  FUN_1401b9980(&DAT_140eb5f70,0x16,uVar4,1,8,0x21);
  return;
}

