/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1402c43c4 */

longlong * FUN_1402c43c4(longlong *param_1)

{
  uint uVar1;
  ulonglong uVar2;
  short sVar3;
  uint *puVar4;
  uint *puVar5;
  longlong *plVar6;
  uint *puVar7;
  short sVar8;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  uint *puVar12;
  uint *puVar13;
  uint *puVar14;
  uint *puVar15;
  
  puVar7 = (uint *)param_1[5];
  puVar4 = (uint *)*param_1;
  puVar14 = puVar7;
  if (7 < *(ulonglong *)(puVar7 + 6)) {
    puVar14 = *(uint **)puVar7;
  }
  lVar11 = *(longlong *)(puVar7 + 4);
  plVar6 = param_1 + 1;
  lVar10 = param_1[3];
  if (puVar14 != puVar4) {
    if ((((short)*puVar4 == 0x5c) || ((short)*puVar4 == 0x2f)) && (lVar10 == 0)) {
      *param_1 = (longlong)((longlong)puVar4 + 2);
      return param_1;
    }
    puVar4 = (uint *)((longlong)puVar4 + lVar10 * 2);
    *param_1 = (longlong)puVar4;
    goto LAB_1402c4414;
  }
  puVar4 = (uint *)((longlong)puVar4 + lVar10 * 2);
  *param_1 = (longlong)puVar4;
  uVar2 = *(ulonglong *)(puVar7 + 4);
  if (7 < *(ulonglong *)(puVar7 + 6)) {
    puVar7 = *(uint **)puVar7;
  }
  puVar5 = puVar7;
  if (1 < (longlong)uVar2) {
    uVar1 = *puVar7;
    if ((uVar1 & 0xffffffdf) - 0x3a0041 < 0x1a) {
      puVar5 = puVar7 + 1;
    }
    else if (((short)uVar1 == 0x5c) || ((uVar1 & 0xffff) == 0x2f)) {
      uVar9 = uVar1 >> 0x10;
      sVar8 = (short)(uVar1 >> 0x10);
      if (uVar2 < 4) {
        if (uVar2 != 2) goto LAB_1402c4573;
      }
      else if (((*(short *)((longlong)puVar7 + 6) == 0x5c) ||
               (*(short *)((longlong)puVar7 + 6) == 0x2f)) &&
              ((uVar2 == 4 || (((short)puVar7[2] != 0x2f && ((short)puVar7[2] != 0x5c)))))) {
        puVar15 = (uint *)((longlong)puVar7 + 6);
        puVar5 = puVar15;
        if ((sVar8 == 0x2f) || (uVar9 == 0x5c)) {
          sVar3 = (short)puVar7[1];
          if ((sVar3 != 0x2e) && (sVar3 != 0x3f)) {
            if (uVar9 != 0x3f) goto LAB_1402c4573;
            goto LAB_1402c45db;
          }
        }
        else {
          puVar5 = puVar7;
          if (uVar9 == 0x3f) {
            sVar3 = (short)puVar7[1];
LAB_1402c45db:
            puVar5 = puVar15;
            if (sVar3 != 0x3f) {
              puVar5 = puVar7;
            }
          }
        }
      }
      else {
LAB_1402c4573:
        if ((((sVar8 == 0x5c) || (puVar5 = puVar7, uVar9 == 0x2f)) &&
            (puVar5 = puVar7, (short)puVar7[1] != 0x2f)) &&
           (((short)puVar7[1] != 0x5c && (puVar5 = (uint *)((longlong)puVar7 + 6), uVar2 != 3)))) {
          lVar10 = uVar2 * 2 + -6;
          do {
            if (((short)*puVar5 == 0x2f) || ((short)*puVar5 == 0x5c)) goto LAB_1402c45e6;
            puVar5 = (uint *)((longlong)puVar5 + 2);
            lVar10 = lVar10 + -2;
          } while (lVar10 != 0);
          goto LAB_1402c4414;
        }
      }
    }
  }
LAB_1402c45e6:
  puVar15 = (uint *)((longlong)puVar7 + uVar2 * 2);
  for (puVar12 = puVar5;
      (puVar13 = puVar15, puVar12 != puVar15 &&
      (((short)*puVar12 == 0x5c || (puVar13 = puVar12, (short)*puVar12 == 0x2f))));
      puVar12 = (uint *)((longlong)puVar12 + 2)) {
  }
  if ((puVar7 != puVar5) && (puVar5 != puVar13)) {
    lVar11 = (longlong)puVar13 - (longlong)puVar5;
LAB_1402c4627:
    FUN_140215958(plVar6,puVar5,lVar11 >> 1);
    return param_1;
  }
LAB_1402c4414:
  puVar14 = (uint *)((longlong)puVar14 + lVar11 * 2);
  puVar7 = puVar4;
  if (puVar4 != puVar14) {
    do {
      puVar5 = puVar7;
      sVar8 = (short)*puVar5;
      if ((sVar8 != 0x5c) && (sVar8 != 0x2f)) {
        puVar7 = puVar14;
        puVar15 = puVar5;
        if (puVar5 != puVar14) {
          while (((puVar7 = puVar15, puVar15 = (uint *)((longlong)puVar7 + 2), sVar8 != 0x2f &&
                  (sVar8 != 0x5c)) && (puVar7 = puVar14, puVar15 != puVar14))) {
            sVar8 = *(short *)puVar15;
          }
        }
        lVar11 = (longlong)puVar7 - (longlong)puVar4;
        goto LAB_1402c4627;
      }
      puVar7 = (uint *)((longlong)puVar5 + 2);
      *param_1 = (longlong)puVar7;
      puVar4 = (uint *)((longlong)puVar4 + 2);
    } while (puVar7 != puVar14);
    *param_1 = (longlong)puVar5;
  }
  param_1[3] = 0;
  if (7 < (ulonglong)param_1[4]) {
    plVar6 = (longlong *)param_1[1];
  }
  *(undefined2 *)plVar6 = 0;
  return param_1;
}

