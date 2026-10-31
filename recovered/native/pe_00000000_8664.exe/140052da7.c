/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140052da7 */

undefined8 *
FUN_140052da7(undefined8 *param_1,undefined1 *param_2,undefined1 *param_3,uint param_4,uint param_5)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  ulonglong uVar4;
  uint *puVar5;
  uint *puVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  undefined4 uVar11;
  longlong lVar12;
  longlong lVar13;
  undefined1 auStack_108 [32];
  int local_e8;
  longlong local_d8 [2];
  undefined1 local_c8 [117];
  undefined1 local_53 [11];
  ulonglong local_48;
  uint uVar10;
  
  local_48 = DAT_140f17b40 ^ (ulonglong)auStack_108;
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
    goto LAB_140052fb0;
  }
  if ((int)param_5 < 0) {
    param_5 = 6;
LAB_140052e2b:
    puVar3 = (uint *)(&DAT_140e80ea0 + (ulonglong)((param_5 + 10) * (param_5 - 1) & 0xfe) * 2);
    uVar4 = (ulonglong)param_5;
  }
  else {
    if (param_5 == 0) {
      param_5 = 1;
      goto LAB_140052e2b;
    }
    if (param_5 < 1000000) {
      if (param_5 < 8) goto LAB_140052e2b;
      uVar4 = 0x27;
      if (param_5 < 0x27) {
        uVar4 = (ulonglong)param_5;
      }
    }
    else {
      uVar4 = 0x27;
      param_5 = 1000000;
    }
    puVar3 = &DAT_140e80fa0;
  }
  puVar6 = puVar3;
  for (puVar5 = puVar3; (puVar5 != puVar3 + uVar4 + 5 && (puVar6 = puVar5, *puVar5 < param_4));
      puVar5 = puVar5 + 1) {
    puVar6 = puVar3 + uVar4 + 5;
  }
  iVar9 = (int)((ulonglong)((longlong)puVar6 - (longlong)puVar3) >> 2);
  iVar2 = iVar9 + -5;
  if (iVar2 < -4 || (int)param_5 <= iVar2) {
    uVar10 = 0x70;
    if ((int)param_5 < 0x70) {
      uVar10 = param_5;
    }
    iVar9 = uVar10 - 1;
    local_e8 = iVar9;
    FUN_140052cde(local_d8,local_c8,local_53);
    lVar8 = FUN_140049c87(local_c8,local_d8[0],0x65);
    lVar12 = local_d8[0];
    lVar13 = lVar8;
  }
  else {
    iVar1 = (param_5 - iVar9) + 4;
    iVar9 = 0x25;
    if (iVar1 < 0x25) {
      iVar9 = iVar1;
    }
    local_e8 = iVar9;
    FUN_140052d1f(local_d8,local_c8,local_53);
    lVar8 = local_d8[0];
    lVar12 = 0;
    lVar13 = 0;
  }
  if (0 < iVar9) {
    do {
      lVar7 = lVar8;
      lVar8 = lVar7 + -1;
    } while (*(char *)(lVar7 + -1) == '0');
    if (*(char *)(lVar7 + -1) != '.') {
      lVar8 = lVar7;
    }
  }
  lVar8 = lVar8 - (longlong)local_c8;
  uVar11 = 0x84;
  if (lVar8 <= (longlong)param_3 - (longlong)param_2) {
    FUN_1401c5180(param_2,local_c8,lVar8);
    param_2 = param_2 + lVar8;
    if (iVar2 < -4 || (int)param_5 <= iVar2) {
      lVar12 = lVar12 - lVar13;
      if ((longlong)param_3 - (longlong)param_2 < lVar12) goto LAB_140052fa9;
      FUN_1401c5180(param_2,lVar13,lVar12);
      param_2 = param_2 + lVar12;
    }
    param_3 = param_2;
    uVar11 = 0;
  }
LAB_140052fa9:
  *param_1 = param_3;
  *(undefined4 *)(param_1 + 1) = uVar11;
LAB_140052fb0:
  if (DAT_140f17b40 == (local_48 ^ (ulonglong)auStack_108)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_48 ^ (ulonglong)auStack_108);
}

