/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140072c50 */

void FUN_140072c50(undefined8 *param_1,undefined8 *param_2,ulonglong param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  char cVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  bool bVar15;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 *local_78;
  undefined8 local_70;
  undefined8 *local_68;
  ulonglong local_60;
  undefined8 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_140f17b40 ^ (ulonglong)auStack_a8;
  uVar7 = (longlong)param_2 - (longlong)param_1;
  local_78 = param_2;
  local_70 = param_4;
  if ((longlong)uVar7 < 0x101) {
LAB_140072f88:
    local_50 = local_70;
    if ((param_1 != local_78) && (puVar13 = param_1 + 1, puVar13 != local_78)) {
      lVar10 = 0;
      puVar12 = puVar13;
      do {
        uVar4 = *puVar12;
        lVar6 = lVar10;
        local_58 = uVar4;
        do {
          cVar3 = FUN_1400730d3(&local_50,&local_58,(longlong)param_1 + lVar6);
          if (cVar3 == '\0') {
            puVar5 = (undefined8 *)(lVar6 + (longlong)puVar13);
            break;
          }
          *(undefined8 *)((longlong)puVar13 + lVar6) = *(undefined8 *)((longlong)param_1 + lVar6);
          lVar6 = lVar6 + -8;
          puVar5 = param_1;
        } while (lVar6 != -8);
        *puVar5 = uVar4;
        puVar12 = puVar12 + 1;
        lVar10 = lVar10 + 8;
      } while (puVar12 != local_78);
    }
LAB_1400730a0:
    if (DAT_140f17b40 != (local_48 ^ (ulonglong)auStack_a8)) {
                    /* WARNING: Subroutine does not return */
      FUN_140188a00(local_48 ^ (ulonglong)auStack_a8);
    }
    return;
  }
LAB_140072c9a:
  uVar4 = local_70;
  if (0 < (longlong)param_3) {
    puVar12 = param_1 + (uVar7 >> 4);
    puVar13 = local_78 + -1;
    lVar10 = (longlong)puVar13 - (longlong)param_1 >> 3;
    puVar5 = param_1;
    local_68 = local_78;
    local_60 = param_3;
    if (0x28 < lVar10) {
      uVar7 = lVar10 * 2 + 2U & 0xfffffffffffffff0;
      uVar11 = lVar10 + 1U & 0xfffffffffffffff8;
      FUN_14007329c(param_1,(undefined8 *)((longlong)param_1 + uVar11),(longlong)param_1 + uVar7,
                    local_70);
      FUN_14007329c((longlong)puVar12 - uVar11,puVar12,uVar11 + (longlong)puVar12,uVar4);
      FUN_14007329c((longlong)puVar13 - uVar7,(undefined8 *)((longlong)puVar13 - uVar11),puVar13,
                    local_70);
      puVar5 = (undefined8 *)((longlong)param_1 + uVar11);
      puVar13 = (undefined8 *)((longlong)puVar13 - uVar11);
    }
    uVar4 = local_70;
    FUN_14007329c(puVar5,puVar12,puVar13,local_70);
    local_50 = uVar4;
    puVar13 = puVar12;
    while (puVar5 = puVar13, puVar8 = local_78, param_1 < puVar5) {
      puVar13 = puVar5 + -1;
      cVar3 = FUN_1400730d3(&local_50,puVar13,puVar5);
      puVar8 = local_78;
      if ((cVar3 != '\0') ||
         (cVar3 = FUN_1400730d3(&local_50,puVar5,puVar13), puVar8 = local_78, cVar3 != '\0')) break;
    }
    do {
      puVar13 = puVar12;
      puVar12 = puVar13 + 1;
      if (puVar8 <= puVar12) goto LAB_140072dbb;
      cVar3 = FUN_1400730d3(&local_50,puVar12,puVar5);
      if ((cVar3 != '\0') || (cVar3 = FUN_1400730d3(&local_50,puVar5,puVar12), cVar3 != '\0'))
      goto LAB_140072dbb;
    } while( true );
  }
  uVar11 = uVar7 >> 4;
  do {
    uVar9 = uVar11 - 1;
    local_50 = param_1[uVar9];
    local_88 = uVar4;
    FUN_140073146(param_1,uVar9,uVar7 >> 3,&local_50);
    bVar15 = 1 < uVar11;
    uVar11 = uVar9;
  } while (bVar15);
  lVar10 = (longlong)local_78 - (longlong)param_1;
  puVar13 = local_78;
  do {
    puVar13 = puVar13 + -1;
    local_50 = *puVar13;
    *puVar13 = *param_1;
    lVar10 = lVar10 + -8;
    local_88 = uVar4;
    FUN_140073146(param_1,0,lVar10 >> 3,&local_50);
  } while (8 < lVar10);
  goto LAB_1400730a0;
LAB_140072dbb:
  puVar13 = puVar13 + 1;
  puVar12 = puVar5;
  puVar14 = puVar13;
LAB_140072dc5:
  for (; puVar1 = puVar5, puVar14 < puVar8; puVar14 = puVar14 + 1) {
    cVar3 = FUN_1400730d3(&local_50,puVar5,puVar14);
    if (cVar3 == '\0') {
      cVar3 = FUN_1400730d3(&local_50,puVar14,puVar5);
      if (cVar3 != '\0') break;
      if (puVar14 != puVar13) {
        uVar4 = *puVar13;
        *puVar13 = *puVar14;
        *puVar14 = uVar4;
      }
      puVar13 = puVar13 + 1;
    }
  }
  while (puVar2 = puVar12, param_1 < puVar2) {
    puVar12 = puVar2 + -1;
    cVar3 = FUN_1400730d3(&local_50,puVar12,puVar1);
    if (cVar3 == '\0') {
      cVar3 = FUN_1400730d3(&local_50,puVar1,puVar12);
      if (cVar3 != '\0') break;
      puVar5 = puVar1 + -1;
      bVar15 = puVar2 != puVar1;
      puVar1 = puVar5;
      if (bVar15) {
        uVar4 = *puVar5;
        *puVar5 = *puVar12;
        *puVar12 = uVar4;
      }
    }
  }
  if ((puVar14 != local_78) || (puVar2 != param_1)) {
    puVar8 = local_78;
    if (puVar2 == param_1) {
      if (puVar13 != puVar14) {
        uVar4 = *puVar1;
        *puVar1 = *puVar13;
        *puVar13 = uVar4;
      }
      puVar13 = puVar13 + 1;
      uVar4 = *puVar1;
      *puVar1 = *puVar14;
      *puVar14 = uVar4;
      puVar5 = puVar1 + 1;
      puVar12 = param_1;
    }
    else {
      puVar12 = puVar2 + -1;
      if (puVar14 == local_78) {
        puVar5 = puVar1 + -1;
        uVar4 = puVar1[-1];
        if (puVar2 != puVar1) {
          uVar4 = *puVar12;
          *puVar12 = puVar1[-1];
          *puVar5 = uVar4;
        }
        *puVar5 = puVar13[-1];
        puVar13[-1] = uVar4;
        puVar13 = puVar13 + -1;
        goto LAB_140072dc5;
      }
      uVar4 = *puVar14;
      *puVar14 = *puVar12;
      *puVar12 = uVar4;
      puVar5 = puVar1;
    }
    puVar14 = puVar14 + 1;
    goto LAB_140072dc5;
  }
  param_3 = (local_60 >> 2) + (local_60 >> 1);
  if ((longlong)puVar1 - (longlong)param_1 < (longlong)local_68 - (longlong)puVar13) {
    FUN_140072c50(param_1,puVar1,param_3,local_70);
    param_1 = puVar13;
  }
  else {
    FUN_140072c50(puVar13,local_78,param_3,local_70);
    local_78 = puVar1;
  }
  uVar7 = (longlong)local_78 - (longlong)param_1;
  if ((longlong)uVar7 < 0x101) goto LAB_140072f88;
  goto LAB_140072c9a;
}

