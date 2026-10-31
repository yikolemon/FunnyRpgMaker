/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14005021f */

undefined8 *
FUN_14005021f(undefined8 *param_1,undefined1 *param_2,undefined1 *param_3,ulonglong param_4,
             uint param_5)

{
  int iVar1;
  int iVar2;
  ulonglong *puVar3;
  ulonglong *puVar4;
  ulonglong *puVar5;
  ulonglong *puVar6;
  ulonglong *puVar7;
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
  
  local_48 = DAT_1401c9640 ^ (ulonglong)auStack_398;
  if (param_4 == 0) {
    if (param_2 == param_3) {
      *param_1 = param_3;
      *(undefined4 *)(param_1 + 1) = 0x84;
    }
    else {
      *param_2 = 0x30;
      *param_1 = param_2 + 1;
      *(undefined4 *)(param_1 + 1) = 0;
    }
    goto LAB_140050496;
  }
  if ((int)param_5 < 0) {
    param_5 = 6;
LAB_1400502cd:
    puVar3 = (ulonglong *)
             ((longlong)&DAT_1401431f0 + (ulonglong)((param_5 + 10) * (param_5 - 1) & 0xfffe) * 4);
    puVar7 = puVar3 + (ulonglong)param_5 + 5;
    puVar5 = puVar7;
    puVar4 = puVar3;
joined_r0x0001400502f8:
    for (; (puVar6 = puVar5, puVar3 != puVar5 &&
           (puVar7 = puVar4, puVar6 = puVar3, *puVar3 < param_4)); puVar3 = puVar3 + 1) {
    }
  }
  else {
    if (param_5 == 0) {
      param_5 = 1;
      goto LAB_1400502cd;
    }
    puVar7 = (ulonglong *)&DAT_1401441e0;
    if (999999 < param_5) {
      param_5 = 1000000;
      goto LAB_14005032b;
    }
    if (param_5 < 0x10) goto LAB_1400502cd;
    if (param_5 < 0x136) {
      puVar3 = &DAT_140143810;
      puVar7 = (ulonglong *)(&UNK_140143838 + (ulonglong)param_5 * 8);
      puVar5 = puVar7;
      puVar4 = puVar3;
      if (0x9b < param_5) goto LAB_14005032b;
      goto joined_r0x0001400502f8;
    }
LAB_14005032b:
    uVar8 = (longlong)(puVar7 + -0x28028702) >> 3;
    if ((longlong)uVar8 < 1) {
      puVar7 = &DAT_140143810;
      puVar6 = &DAT_140143810;
    }
    else {
      puVar7 = &DAT_140143810;
      puVar6 = &DAT_140143810;
      do {
        uVar9 = uVar8 >> 1;
        uVar8 = ~uVar9 + uVar8;
        puVar3 = puVar6 + uVar9 + 1;
        if (param_4 <= puVar6[uVar9]) {
          uVar8 = uVar9;
          puVar3 = puVar6;
        }
        puVar6 = puVar3;
      } while (0 < (longlong)uVar8);
    }
  }
  iVar12 = (int)((ulonglong)((longlong)puVar6 - (longlong)puVar7) >> 3);
  iVar2 = iVar12 + -5;
  if (iVar2 < -4 || (int)param_5 <= iVar2) {
    uVar13 = 0x2ff;
    if ((int)param_5 < 0x2ff) {
      uVar13 = param_5;
    }
    iVar12 = uVar13 - 1;
    local_378 = iVar12;
    FUN_14005015e(local_368,local_358,local_53);
    lVar11 = FUN_14000d935(local_358,local_368[0],0x65);
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
    FUN_14005019b(local_368,local_358,local_53);
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
    FUN_140135ff0(param_2,local_358,lVar11);
    param_2 = param_2 + lVar11;
    if (iVar2 < -4 || (int)param_5 <= iVar2) {
      lVar15 = lVar15 - lVar16;
      if ((longlong)param_3 - (longlong)param_2 < lVar15) goto LAB_14005048f;
      FUN_140135ff0(param_2,lVar16,lVar15);
      param_2 = param_2 + lVar15;
    }
    param_3 = param_2;
    uVar14 = 0;
  }
LAB_14005048f:
  *param_1 = param_3;
  *(undefined4 *)(param_1 + 1) = uVar14;
LAB_140050496:
  if (DAT_1401c9640 == (local_48 ^ (ulonglong)auStack_398)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1400d3720(local_48 ^ (ulonglong)auStack_398);
}

