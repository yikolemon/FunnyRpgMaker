/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180003e34 */

uint * FUN_180003e34(uint *param_1,uint *param_2)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  char cVar4;
  ulonglong uVar5;
  uint *puVar6;
  ulonglong uVar7;
  longlong lVar8;
  uint *puVar9;
  short sVar10;
  uint uVar11;
  short sVar12;
  uint *puVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  uint *puVar16;
  uint *puVar17;
  ulonglong uVar18;
  
  cVar4 = FUN_18000433e(param_2);
  if (cVar4 != '\0') goto LAB_180003e56;
  puVar9 = param_1;
  if (7 < *(ulonglong *)(param_1 + 6)) {
    puVar9 = *(uint **)param_1;
  }
  uVar5 = *(ulonglong *)(param_1 + 4);
  puVar6 = param_2;
  if (7 < *(ulonglong *)(param_2 + 6)) {
    puVar6 = *(uint **)param_2;
  }
  uVar15 = *(ulonglong *)(param_2 + 4);
  puVar1 = (uint *)((longlong)puVar9 + uVar5 * 2);
  puVar13 = puVar9;
  if (1 < (longlong)uVar5) {
    uVar3 = *puVar9;
    if ((uVar3 & 0xffffffdf) - 0x3a0041 < 0x1a) {
      puVar13 = puVar9 + 1;
    }
    else if (((short)uVar3 == 0x5c) || ((uVar3 & 0xffff) == 0x2f)) {
      uVar11 = uVar3 >> 0x10;
      sVar10 = (short)(uVar3 >> 0x10);
      if (uVar5 < 4) {
        if (uVar5 != 2) goto LAB_180003f54;
      }
      else if (((*(short *)((longlong)puVar9 + 6) == 0x5c) ||
               (*(short *)((longlong)puVar9 + 6) == 0x2f)) &&
              ((uVar5 == 4 || (((short)puVar9[2] != 0x2f && ((short)puVar9[2] != 0x5c)))))) {
        puVar17 = (uint *)((longlong)puVar9 + 6);
        puVar13 = puVar17;
        if ((sVar10 == 0x2f) || (uVar11 == 0x5c)) {
          sVar12 = (short)puVar9[1];
          if ((sVar12 != 0x2e) && (sVar12 != 0x3f)) {
            if (uVar11 != 0x3f) goto LAB_180003f54;
            goto LAB_180003fc4;
          }
        }
        else {
          puVar13 = puVar9;
          if (uVar11 == 0x3f) {
            sVar12 = (short)puVar9[1];
LAB_180003fc4:
            puVar13 = puVar17;
            if (sVar12 != 0x3f) {
              puVar13 = puVar9;
            }
          }
        }
      }
      else {
LAB_180003f54:
        if ((((sVar10 == 0x5c) || (puVar13 = puVar9, uVar11 == 0x2f)) &&
            (puVar13 = puVar9, (short)puVar9[1] != 0x2f)) &&
           (((short)puVar9[1] != 0x5c &&
            (puVar17 = (uint *)((longlong)puVar9 + 6), puVar13 = puVar17, uVar5 != 3)))) {
          lVar8 = uVar5 * 2 + -6;
          do {
            puVar13 = puVar17;
            if (((short)*puVar17 == 0x2f) || ((short)*puVar17 == 0x5c)) break;
            puVar17 = (uint *)((longlong)puVar17 + 2);
            lVar8 = lVar8 + -2;
            puVar13 = puVar1;
          } while (lVar8 != 0);
        }
      }
    }
  }
  puVar2 = (uint *)((longlong)puVar6 + uVar15 * 2);
  puVar17 = puVar6;
  if (1 < (longlong)uVar15) {
    uVar3 = *puVar6;
    if ((uVar3 & 0xffffffdf) - 0x3a0041 < 0x1a) {
      puVar16 = puVar6 + 1;
LAB_180004047:
      uVar18 = (longlong)puVar16 - (longlong)puVar6 >> 1;
      uVar14 = (longlong)puVar13 - (longlong)puVar9 >> 1;
      uVar15 = uVar14;
      if (uVar18 < uVar14) {
        uVar15 = uVar18;
      }
      uVar7 = thunk_FUN_18023bb00(puVar9,puVar6,uVar15);
      if ((uVar14 != uVar18) || (puVar17 = puVar16, uVar7 != uVar15)) {
LAB_180003e56:
        if (param_1 == param_2) {
          return param_1;
        }
        puVar9 = param_2 + 4;
        if (7 < *(ulonglong *)(param_2 + 6)) {
          param_2 = *(uint **)param_2;
        }
        FUN_180004488(param_1,param_2,*(undefined8 *)puVar9);
        return param_1;
      }
    }
    else if (((short)uVar3 == 0x5c) || ((uVar3 & 0xffff) == 0x2f)) {
      uVar11 = uVar3 >> 0x10;
      sVar10 = (short)(uVar3 >> 0x10);
      if (uVar15 < 4) {
        if (uVar15 != 2) goto LAB_18000418c;
      }
      else if (((*(short *)((longlong)puVar6 + 6) == 0x5c) ||
               (*(short *)((longlong)puVar6 + 6) == 0x2f)) &&
              ((uVar15 == 4 || (((short)puVar6[2] != 0x2f && ((short)puVar6[2] != 0x5c)))))) {
        puVar16 = (uint *)((longlong)puVar6 + 6);
        if ((sVar10 == 0x2f) || (uVar11 == 0x5c)) {
          sVar12 = (short)puVar6[1];
          if ((sVar12 == 0x2e) || (sVar12 == 0x3f)) goto LAB_180004047;
          if (uVar11 != 0x3f) goto LAB_18000418c;
        }
        else {
          if (uVar11 != 0x3f) goto LAB_180003fdd;
          sVar12 = (short)puVar6[1];
        }
        puVar17 = puVar16;
        if (sVar12 != 0x3f) {
          puVar17 = puVar6;
        }
LAB_18000421d:
        puVar16 = puVar17;
        if (puVar6 != puVar17) goto LAB_180004047;
      }
      else {
LAB_18000418c:
        if ((((sVar10 == 0x5c) || (uVar11 == 0x2f)) && ((short)puVar6[1] != 0x2f)) &&
           ((short)puVar6[1] != 0x5c)) {
          puVar17 = (uint *)((longlong)puVar6 + 6);
          puVar16 = puVar17;
          if (uVar15 != 3) {
            lVar8 = uVar15 * 2 + -6;
            do {
              if (((short)*puVar17 == 0x2f) || ((short)*puVar17 == 0x5c)) goto LAB_18000421d;
              puVar17 = (uint *)((longlong)puVar17 + 2);
              lVar8 = lVar8 + -2;
              puVar16 = puVar2;
            } while (lVar8 != 0);
          }
          goto LAB_180004047;
        }
      }
    }
  }
LAB_180003fdd:
  if ((puVar17 == puVar2) || (((short)*puVar17 != 0x5c && ((short)*puVar17 != 0x2f)))) {
    if (puVar13 == puVar1) {
      if ((longlong)(uVar5 * 2) < 5) goto LAB_1800040d3;
    }
    else if ((*(short *)((longlong)puVar1 + -2) == 0x2f) ||
            (*(short *)((longlong)puVar1 + -2) == 0x5c)) goto LAB_1800040d3;
    FUN_180004450(param_1,0x5c);
  }
  else {
    uVar5 = (longlong)puVar13 - (longlong)puVar9 >> 1;
    if (*(ulonglong *)(param_1 + 4) < uVar5) {
                    /* WARNING: Subroutine does not return */
      FUN_1800045d8();
    }
    *(ulonglong *)(param_1 + 4) = uVar5;
    puVar6 = param_1;
    if (7 < *(ulonglong *)(param_1 + 6)) {
      puVar6 = *(uint **)param_1;
    }
    *(undefined2 *)((longlong)puVar6 + ((longlong)puVar13 - (longlong)puVar9)) = 0;
  }
LAB_1800040d3:
  FUN_180004718(param_1,puVar17,(longlong)puVar2 - (longlong)puVar17 >> 1);
  return param_1;
}

