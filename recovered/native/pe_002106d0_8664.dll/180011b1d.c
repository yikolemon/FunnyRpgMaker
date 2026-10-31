/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180011b1d */

undefined8 *
FUN_180011b1d(undefined8 *param_1,undefined1 *param_2,undefined1 *param_3,undefined *param_4,
             uint param_5)

{
  int iVar1;
  int iVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  undefined4 uVar14;
  longlong lVar15;
  longlong lVar16;
  undefined1 auStack_398 [32];
  int local_378;
  longlong local_368 [2];
  undefined1 local_358 [773];
  undefined1 local_53 [11];
  ulonglong local_48;
  uint uVar13;
  
  local_48 = DAT_180402640 ^ (ulonglong)auStack_398;
  if (param_4 == (undefined *)0x0) {
    if (param_2 == param_3) {
      *param_1 = param_3;
      *(undefined4 *)(param_1 + 1) = 0x84;
    }
    else {
      *param_2 = 0x30;
      *param_1 = param_2 + 1;
      *(undefined4 *)(param_1 + 1) = 0;
    }
    goto LAB_180011d94;
  }
  if ((int)param_5 < 0) {
    param_5 = 6;
LAB_180011bcb:
    ppuVar3 = (undefined **)
              ((longlong)&DAT_1802da900 + (ulonglong)((param_5 + 10) * (param_5 - 1) & 0xfffe) * 4);
    ppuVar7 = ppuVar3 + (ulonglong)param_5 + 5;
    ppuVar5 = ppuVar7;
    ppuVar4 = ppuVar3;
joined_r0x000180011bf6:
    for (; (ppuVar6 = ppuVar5, ppuVar3 != ppuVar5 &&
           (ppuVar7 = ppuVar4, ppuVar6 = ppuVar3, *ppuVar3 < param_4)); ppuVar3 = ppuVar3 + 1) {
    }
  }
  else {
    if (param_5 == 0) {
      param_5 = 1;
      goto LAB_180011bcb;
    }
    ppuVar7 = &PTR_s_device_or_resource_busy_1802db8f0;
    if (999999 < param_5) {
      param_5 = 1000000;
      goto LAB_180011c29;
    }
    if (param_5 < 0x10) goto LAB_180011bcb;
    if (param_5 < 0x136) {
      ppuVar3 = (undefined **)&DAT_1802daf20;
      ppuVar7 = (undefined **)(&UNK_1802daf48 + (ulonglong)param_5 * 8);
      ppuVar5 = ppuVar7;
      ppuVar4 = ppuVar3;
      if (0x9b < param_5) goto LAB_180011c29;
      goto joined_r0x000180011bf6;
    }
LAB_180011c29:
    uVar8 = (longlong)(ppuVar7 + -0x3005b5e4) >> 3;
    if ((longlong)uVar8 < 1) {
      ppuVar7 = (undefined **)&DAT_1802daf20;
      ppuVar6 = (undefined **)&DAT_1802daf20;
    }
    else {
      ppuVar7 = (undefined **)&DAT_1802daf20;
      ppuVar6 = (undefined **)&DAT_1802daf20;
      do {
        uVar9 = uVar8 >> 1;
        uVar8 = ~uVar9 + uVar8;
        ppuVar3 = ppuVar6 + uVar9 + 1;
        if (param_4 <= ppuVar6[uVar9]) {
          uVar8 = uVar9;
          ppuVar3 = ppuVar6;
        }
        ppuVar6 = ppuVar3;
      } while (0 < (longlong)uVar8);
    }
  }
  iVar12 = (int)((ulonglong)((longlong)ppuVar6 - (longlong)ppuVar7) >> 3);
  iVar2 = iVar12 + -5;
  if (iVar2 < -4 || (int)param_5 <= iVar2) {
    uVar13 = 0x2ff;
    if ((int)param_5 < 0x2ff) {
      uVar13 = param_5;
    }
    iVar12 = uVar13 - 1;
    local_378 = iVar12;
    FUN_180011a5c(local_368,local_358,local_53);
    lVar11 = FUN_180006039(local_358,local_368[0],0x65);
    lVar15 = local_368[0];
    lVar16 = lVar11;
  }
  else {
    iVar1 = (param_5 - iVar12) + 4;
    iVar12 = 0x42;
    if (iVar1 < 0x42) {
      iVar12 = iVar1;
    }
    local_378 = iVar12;
    FUN_180011a99(local_368,local_358,local_53);
    lVar11 = local_368[0];
    lVar15 = 0;
    lVar16 = 0;
  }
  if (0 < iVar12) {
    do {
      lVar10 = lVar11;
      lVar11 = lVar10 + -1;
    } while (*(char *)(lVar10 + -1) == '0');
    if (*(char *)(lVar10 + -1) != '.') {
      lVar11 = lVar10;
    }
  }
  lVar11 = lVar11 - (longlong)local_358;
  uVar14 = 0x84;
  if (lVar11 <= (longlong)param_3 - (longlong)param_2) {
    FUN_1802a82f0(param_2,local_358,lVar11);
    param_2 = param_2 + lVar11;
    if (iVar2 < -4 || (int)param_5 <= iVar2) {
      lVar15 = lVar15 - lVar16;
      if ((longlong)param_3 - (longlong)param_2 < lVar15) goto LAB_180011d8d;
      FUN_1802a82f0(param_2,lVar16,lVar15);
      param_2 = param_2 + lVar15;
    }
    param_3 = param_2;
    uVar14 = 0;
  }
LAB_180011d8d:
  *param_1 = param_3;
  *(undefined4 *)(param_1 + 1) = uVar14;
LAB_180011d94:
  if (DAT_180402640 == (local_48 ^ (ulonglong)auStack_398)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_48 ^ (ulonglong)auStack_398);
}

