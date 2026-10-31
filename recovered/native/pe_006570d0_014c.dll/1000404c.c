/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1000404c */

uint * __thiscall FUN_1000404c(uint *param_1,uint *param_2)

{
  uint *puVar1;
  uint *puVar2;
  char cVar3;
  uint uVar4;
  uint *puVar5;
  uint uVar6;
  int iVar7;
  uint *puVar8;
  uint *puVar9;
  short sVar10;
  uint *puVar11;
  uint uVar12;
  uint uVar13;
  short sVar14;
  uint uVar15;
  uint *local_28;
  
  cVar3 = FUN_100044ea();
  if (cVar3 != '\0') goto LAB_10004064;
  puVar11 = param_1;
  if (7 < param_1[5]) {
    puVar11 = (uint *)*param_1;
  }
  uVar4 = param_1[4];
  puVar5 = param_2;
  if (7 < param_2[5]) {
    puVar5 = (uint *)*param_2;
  }
  uVar12 = param_2[4];
  puVar1 = (uint *)((int)puVar11 + uVar4 * 2);
  local_28 = puVar11;
  if (1 < (int)uVar4) {
    uVar13 = *puVar11;
    if ((uVar13 & 0xffffffdf) - 0x3a0041 < 0x1a) {
      local_28 = puVar11 + 1;
    }
    else if (((short)uVar13 == 0x5c) || ((uVar13 & 0xffff) == 0x2f)) {
      uVar15 = uVar13 >> 0x10;
      sVar10 = (short)(uVar13 >> 0x10);
      if (uVar4 < 4) {
        if (uVar4 != 2) goto LAB_10004160;
      }
      else if (((*(short *)((int)puVar11 + 6) == 0x5c) || (*(short *)((int)puVar11 + 6) == 0x2f)) &&
              ((uVar4 == 4 || (((short)puVar11[2] != 0x2f && ((short)puVar11[2] != 0x5c)))))) {
        puVar9 = (uint *)((int)puVar11 + 6);
        local_28 = puVar9;
        if ((sVar10 == 0x2f) || (uVar15 == 0x5c)) {
          sVar14 = (short)puVar11[1];
          if ((sVar14 != 0x2e) && (sVar14 != 0x3f)) {
            if (uVar15 != 0x3f) goto LAB_10004160;
            goto LAB_100041bc;
          }
        }
        else {
          local_28 = puVar11;
          if (uVar15 == 0x3f) {
            sVar14 = (short)puVar11[1];
LAB_100041bc:
            local_28 = puVar9;
            if (sVar14 != 0x3f) {
              local_28 = puVar11;
            }
          }
        }
      }
      else {
LAB_10004160:
        if ((((sVar10 == 0x5c) || (local_28 = puVar11, uVar15 == 0x2f)) &&
            (local_28 = puVar11, (short)puVar11[1] != 0x2f)) &&
           (((short)puVar11[1] != 0x5c &&
            (puVar9 = (uint *)((int)puVar11 + 6), local_28 = puVar9, uVar4 != 3)))) {
          iVar7 = uVar4 * 2 + -6;
          do {
            local_28 = puVar9;
            if (((short)*puVar9 == 0x2f) || ((short)*puVar9 == 0x5c)) break;
            puVar9 = (uint *)((int)puVar9 + 2);
            iVar7 = iVar7 + -2;
            local_28 = puVar1;
          } while (iVar7 != 0);
        }
      }
    }
  }
  puVar2 = (uint *)((int)puVar5 + uVar12 * 2);
  puVar9 = puVar5;
  if (1 < (int)uVar12) {
    uVar13 = *puVar5;
    if ((uVar13 & 0xffffffdf) - 0x3a0041 < 0x1a) {
      puVar8 = puVar5 + 1;
LAB_10004234:
      uVar13 = (int)puVar8 - (int)puVar5 >> 1;
      uVar15 = (int)local_28 - (int)puVar11 >> 1;
      uVar12 = uVar15;
      if (uVar13 < uVar15) {
        uVar12 = uVar13;
      }
      uVar6 = FUN_100047c3(puVar11,puVar5,uVar12);
      if ((uVar15 != uVar13) || (puVar9 = puVar8, uVar6 != uVar12)) {
LAB_10004064:
        if (param_1 == param_2) {
          return param_1;
        }
        puVar11 = param_2 + 4;
        if (7 < param_2[5]) {
          param_2 = (uint *)*param_2;
        }
        FUN_10004664(param_2,*puVar11);
        return param_1;
      }
    }
    else if (((short)uVar13 == 0x5c) || ((uVar13 & 0xffff) == 0x2f)) {
      uVar15 = uVar13 >> 0x10;
      sVar10 = (short)(uVar13 >> 0x10);
      if (uVar12 < 4) {
        if (uVar12 != 2) goto LAB_10004341;
      }
      else if (((*(short *)((int)puVar5 + 6) == 0x5c) || (*(short *)((int)puVar5 + 6) == 0x2f)) &&
              ((uVar12 == 4 || (((short)puVar5[2] != 0x2f && ((short)puVar5[2] != 0x5c)))))) {
        puVar8 = (uint *)((int)puVar5 + 6);
        if ((sVar10 == 0x2f) || (uVar15 == 0x5c)) {
          sVar14 = (short)puVar5[1];
          if ((sVar14 == 0x2e) || (sVar14 == 0x3f)) goto LAB_10004234;
          if (uVar15 != 0x3f) goto LAB_10004341;
        }
        else {
          if (uVar15 != 0x3f) goto LAB_100041d2;
          sVar14 = (short)puVar5[1];
        }
        puVar9 = puVar8;
        if (sVar14 != 0x3f) {
          puVar9 = puVar5;
        }
LAB_100043f2:
        puVar8 = puVar9;
        if (puVar5 != puVar9) goto LAB_10004234;
      }
      else {
LAB_10004341:
        if ((((sVar10 == 0x5c) || (uVar15 == 0x2f)) && ((short)puVar5[1] != 0x2f)) &&
           ((short)puVar5[1] != 0x5c)) {
          puVar9 = (uint *)((int)puVar5 + 6);
          puVar8 = puVar9;
          if (uVar12 != 3) {
            iVar7 = uVar12 * 2 + -6;
            do {
              if (((short)*puVar9 == 0x2f) || ((short)*puVar9 == 0x5c)) goto LAB_100043f2;
              puVar9 = (uint *)((int)puVar9 + 2);
              iVar7 = iVar7 + -2;
              puVar8 = puVar2;
            } while (iVar7 != 0);
          }
          goto LAB_10004234;
        }
      }
    }
  }
LAB_100041d2:
  if ((puVar9 == puVar2) || (((short)*puVar9 != 0x5c && ((short)*puVar9 != 0x2f)))) {
    if (local_28 == puVar1) {
      if ((int)(uVar4 * 2) < 5) goto LAB_100042a9;
    }
    else if ((*(short *)((int)puVar1 + -2) == 0x2f) || (*(short *)((int)puVar1 + -2) == 0x5c))
    goto LAB_100042a9;
    FUN_100045e8(0x5c);
  }
  else {
    uVar4 = (int)local_28 - (int)puVar11 >> 1;
    if (param_1[4] < uVar4) {
                    /* WARNING: Subroutine does not return */
      FUN_100047d6();
    }
    param_1[4] = uVar4;
    puVar5 = param_1;
    if (7 < param_1[5]) {
      puVar5 = (uint *)*param_1;
    }
    *(undefined2 *)((int)puVar5 + ((int)local_28 - (int)puVar11)) = 0;
  }
LAB_100042a9:
  FUN_100048de(puVar9,(int)puVar2 - (int)puVar9 >> 1);
  return param_1;
}

