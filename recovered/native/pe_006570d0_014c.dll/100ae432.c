/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100ae432 */

int * __fastcall FUN_100ae432(int *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  int *piVar5;
  short sVar6;
  uint uVar7;
  uint *puVar8;
  int iVar9;
  uint *puVar10;
  uint *puVar11;
  uint *puVar12;
  uint *puVar13;
  short sVar14;
  uint *puVar15;
  
  puVar4 = (uint *)param_1[7];
  puVar11 = (uint *)*param_1;
  puVar8 = puVar4;
  if (7 < puVar4[5]) {
    puVar8 = (uint *)*puVar4;
  }
  uVar1 = puVar4[4];
  iVar9 = param_1[5];
  if (puVar8 != puVar11) {
    if ((((short)*puVar11 == 0x5c) || ((short)*puVar11 == 0x2f)) && (iVar9 == 0)) {
      *param_1 = (int)((int)puVar11 + 2);
      return param_1;
    }
    puVar11 = (uint *)((int)puVar11 + iVar9 * 2);
    *param_1 = (int)puVar11;
    goto LAB_100ae472;
  }
  puVar11 = (uint *)((int)puVar11 + iVar9 * 2);
  *param_1 = (int)puVar11;
  uVar2 = puVar4[4];
  if (7 < puVar4[5]) {
    puVar4 = (uint *)*puVar4;
  }
  puVar15 = puVar4;
  if (1 < (int)uVar2) {
    uVar3 = *puVar4;
    if ((uVar3 & 0xffffffdf) - 0x3a0041 < 0x1a) {
      puVar15 = puVar4 + 1;
    }
    else if (((short)uVar3 == 0x5c) || ((uVar3 & 0xffff) == 0x2f)) {
      uVar7 = uVar3 >> 0x10;
      sVar6 = (short)(uVar3 >> 0x10);
      if (uVar2 < 4) {
        if (uVar2 != 2) goto LAB_100ae5ce;
      }
      else if (((*(short *)((int)puVar4 + 6) == 0x5c) || (*(short *)((int)puVar4 + 6) == 0x2f)) &&
              ((uVar2 == 4 || (((short)puVar4[2] != 0x2f && ((short)puVar4[2] != 0x5c)))))) {
        puVar10 = (uint *)((int)puVar4 + 6);
        puVar15 = puVar10;
        if ((sVar6 == 0x2f) || (uVar7 == 0x5c)) {
          sVar14 = (short)puVar4[1];
          if ((sVar14 != 0x2e) && (sVar14 != 0x3f)) {
            if (uVar7 != 0x3f) goto LAB_100ae5ce;
            goto LAB_100ae62e;
          }
        }
        else {
          puVar15 = puVar4;
          if (uVar7 == 0x3f) {
            sVar14 = (short)puVar4[1];
LAB_100ae62e:
            puVar15 = puVar10;
            if (sVar14 != 0x3f) {
              puVar15 = puVar4;
            }
          }
        }
      }
      else {
LAB_100ae5ce:
        if ((((sVar6 == 0x5c) || (puVar15 = puVar4, uVar7 == 0x2f)) &&
            (puVar15 = puVar4, (short)puVar4[1] != 0x2f)) &&
           (((short)puVar4[1] != 0x5c && (puVar15 = (uint *)((int)puVar4 + 6), uVar2 != 3)))) {
          iVar9 = uVar2 * 2 + -6;
          do {
            if (((short)*puVar15 == 0x2f) || ((short)*puVar15 == 0x5c)) goto LAB_100ae637;
            puVar15 = (uint *)((int)puVar15 + 2);
            iVar9 = iVar9 + -2;
          } while (iVar9 != 0);
          goto LAB_100ae472;
        }
      }
    }
  }
LAB_100ae637:
  puVar10 = (uint *)((int)puVar4 + uVar2 * 2);
  for (puVar12 = puVar15;
      (puVar13 = puVar10, puVar12 != puVar10 &&
      (((short)*puVar12 == 0x5c || (puVar13 = puVar12, (short)*puVar12 == 0x2f))));
      puVar12 = (uint *)((int)puVar12 + 2)) {
  }
  if ((puVar4 != puVar15) && (puVar15 != puVar13)) {
    iVar9 = (int)puVar13 - (int)puVar15;
LAB_100ae67d:
    FUN_10004664(puVar15,iVar9 >> 1);
    return param_1;
  }
LAB_100ae472:
  puVar8 = (uint *)((int)puVar8 + uVar1 * 2);
  if (puVar11 == puVar8) {
    param_1[5] = 0;
    piVar5 = param_1 + 1;
    if (7 < (uint)param_1[6]) {
      piVar5 = (int *)param_1[1];
    }
    *(undefined2 *)piVar5 = 0;
  }
  else {
    piVar5 = param_1 + 1;
    puVar4 = puVar11;
    do {
      puVar15 = puVar4;
      sVar6 = (short)*puVar15;
      if ((sVar6 != 0x5c) && (sVar6 != 0x2f)) {
        puVar4 = puVar8;
        puVar10 = puVar15;
        if (puVar15 != puVar8) {
          while (((puVar4 = puVar10, puVar10 = (uint *)((int)puVar4 + 2), sVar6 != 0x2f &&
                  (sVar6 != 0x5c)) && (puVar4 = puVar8, puVar10 != puVar8))) {
            sVar6 = *(short *)puVar10;
          }
        }
        iVar9 = (int)puVar4 - (int)puVar11;
        goto LAB_100ae67d;
      }
      puVar4 = (uint *)((int)puVar15 + 2);
      *param_1 = (int)puVar4;
      puVar11 = (uint *)((int)puVar11 + 2);
    } while (puVar4 != puVar8);
    *param_1 = (int)puVar15;
    param_1[5] = 0;
    if (7 < (uint)param_1[6]) {
      piVar5 = (int *)param_1[1];
    }
    *(undefined2 *)piVar5 = 0;
  }
  return param_1;
}

