/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400cba69 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_1400cba69(longlong param_1)

{
  float *pfVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  char cVar12;
  int iVar13;
  undefined8 uVar14;
  int *piVar15;
  longlong lVar16;
  int *piVar17;
  longlong lVar18;
  uint uVar19;
  int iVar20;
  ulonglong uVar21;
  byte bVar22;
  uint uVar23;
  int iVar24;
  longlong lVar25;
  ulonglong uVar26;
  longlong lVar27;
  longlong lVar28;
  bool bVar29;
  bool bVar30;
  float fVar31;
  float fVar32;
  undefined4 uVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  undefined1 local_198 [44];
  int local_16c;
  char *local_168;
  int *local_160;
  ulonglong local_158;
  ulonglong local_150;
  ulonglong local_148;
  float local_13c;
  float local_138;
  int local_134;
  undefined8 local_130;
  float local_128;
  undefined1 auStack_124 [8];
  float fStack_11c;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  ulonglong local_f0;
  
  lVar3 = DAT_140f2a910;
  local_f0 = DAT_140f17b40 ^ (ulonglong)local_198;
  *(undefined1 *)(param_1 + 0x83) = 0;
  fVar40 = *(float *)(param_1 + 0x40) - *(float *)(param_1 + 0x38);
  fVar37 = *(float *)(param_1 + 0x48);
  *(float *)(param_1 + 0x48) = fVar40;
  local_108 = 0;
  uStack_100 = 0;
  local_118 = 0;
  uStack_110 = 0;
  _local_128 = 0;
  stack0xfffffffffffffee0 = 0;
  uVar23 = *(uint *)(param_1 + 8);
  if ((int)uVar23 < 1) {
    bVar22 = 0;
    uVar19 = 0;
  }
  else {
    uVar19 = 0;
    lVar18 = 0;
    uVar21 = 0;
    bVar22 = 0;
    do {
      lVar27 = *(longlong *)(param_1 + 0x10);
      piVar15 = (int *)(lVar27 + lVar18);
      if ((*(int *)(lVar27 + 0x10 + lVar18) < *(int *)(param_1 + 0x34)) ||
         (*(char *)(lVar27 + 0x30 + lVar18) == '\x01')) {
        iVar24 = *piVar15;
        if (*(int *)(param_1 + 0x2c) == iVar24) {
          *(undefined4 *)(param_1 + 0x2c) = 0;
          iVar24 = *piVar15;
        }
        if (*(int *)(param_1 + 0x20) == iVar24) {
          *(undefined4 *)(param_1 + 0x20) = 0;
          iVar24 = *piVar15;
        }
        if (*(int *)(param_1 + 0x24) == iVar24) {
          *(undefined4 *)(param_1 + 0x24) = 0;
        }
      }
      else {
        if (uVar21 != uVar19) {
          lVar25 = (longlong)(int)uVar19 * 0x38;
          *(undefined8 *)(lVar27 + 0x30 + lVar25) = *(undefined8 *)(piVar15 + 0xc);
          iVar24 = *piVar15;
          iVar13 = piVar15[1];
          iVar20 = piVar15[2];
          iVar4 = piVar15[3];
          iVar5 = piVar15[4];
          iVar6 = piVar15[5];
          iVar7 = piVar15[6];
          iVar8 = piVar15[7];
          iVar9 = piVar15[9];
          iVar10 = piVar15[10];
          iVar11 = piVar15[0xb];
          piVar17 = (int *)(lVar27 + 0x20 + lVar25);
          *piVar17 = piVar15[8];
          piVar17[1] = iVar9;
          piVar17[2] = iVar10;
          piVar17[3] = iVar11;
          piVar15 = (int *)(lVar27 + 0x10 + lVar25);
          *piVar15 = iVar5;
          piVar15[1] = iVar6;
          piVar15[2] = iVar7;
          piVar15[3] = iVar8;
          piVar15 = (int *)(lVar27 + lVar25);
          *piVar15 = iVar24;
          piVar15[1] = iVar13;
          piVar15[2] = iVar20;
          piVar15[3] = iVar4;
          lVar27 = *(longlong *)(param_1 + 0x10);
        }
        lVar25 = (longlong)(int)uVar19 * 0x38;
        *(short *)(lVar27 + 0x2e + lVar25) = (short)uVar19;
        uVar23 = *(uint *)(lVar27 + 4 + lVar25);
        iVar24 = 0;
        if ((uVar23 & 0x40) == 0) {
          iVar24 = ((char)(byte)uVar23 < '\0') + 1;
        }
        if (0 < (int)uVar19) {
          uVar2 = *(uint *)(*(longlong *)(param_1 + 0x10) + -0x34 + (ulonglong)uVar19 * 0x38);
          bVar22 = (uVar2 & 0x40) == 0 & (byte)uVar23 >> 6 | bVar22 |
                   ((uVar23 & 0xc0) != 0x80 && (uVar2 & 0xc0) == 0x80);
        }
        piVar15 = (int *)((longlong)&local_128 + (ulonglong)(uint)(iVar24 << 4));
        *piVar15 = *piVar15 + 1;
        uVar19 = uVar19 + 1;
        uVar23 = *(uint *)(param_1 + 8);
      }
      uVar21 = uVar21 + 1;
      lVar18 = lVar18 + 0x38;
    } while ((longlong)uVar21 < (longlong)(int)uVar23);
  }
  if (uVar23 != uVar19) {
    iVar24 = *(int *)(param_1 + 0xc);
    if (iVar24 < (int)uVar19) {
      if (iVar24 == 0) {
        uVar23 = 8;
      }
      else {
        uVar23 = iVar24 / 2 + iVar24;
      }
      if ((int)uVar23 <= (int)uVar19) {
        uVar23 = uVar19;
      }
      uVar14 = FUN_140077ab4((longlong)(int)uVar23 * 0x38);
      if (*(longlong *)(param_1 + 0x10) != 0) {
        FUN_1401c5180(uVar14,*(longlong *)(param_1 + 0x10),(longlong)*(int *)(param_1 + 8) * 0x38);
        FUN_140077b90(*(undefined8 *)(param_1 + 0x10));
      }
      *(undefined8 *)(param_1 + 0x10) = uVar14;
      *(uint *)(param_1 + 0xc) = uVar23;
    }
    *(uint *)(param_1 + 8) = uVar19;
  }
  if ((~bVar22 & 1) == 0 && 1 < uVar19) {
    FUN_1401a7460(*(undefined8 *)(param_1 + 0x10),(longlong)(int)uVar19,0x38,&LAB_1400cfa57);
  }
  fVar35 = *(float *)(lVar3 + 0xe0c);
  fVar34 = local_128;
  uVar21 = local_118 & 0xffffffff;
  iVar24 = (int)local_108;
  fVar38 = fVar35;
  if ((int)local_108 + (int)local_118 < 1) {
    fVar38 = 0.0;
  }
  if ((int)local_128 < 1) {
    fVar38 = 0.0;
  }
  stack0xfffffffffffffee0 = CONCAT44(fVar38,auStack_124._4_4_);
  fVar39 = fVar35;
  if ((int)local_108 < 1) {
    fVar39 = 0.0;
  }
  if ((int)local_118 < 1) {
    fVar39 = 0.0;
  }
  uStack_110 = CONCAT44(fVar39,(undefined4)uStack_110);
  iVar13 = *(int *)(param_1 + 0x28);
  if (iVar13 != 0) {
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  iVar20 = *(int *)(param_1 + 0x24);
  if (iVar20 != 0) {
    *(int *)(param_1 + 0x20) = iVar20;
    *(undefined4 *)(param_1 + 0x24) = 0;
    iVar13 = iVar20;
  }
  if (*(int *)(param_1 + 0x7c) != 0) {
    cVar12 = FUN_1400ccad4(param_1);
    if ((cVar12 != '\0') && (*(int *)(param_1 + 0x7c) == *(int *)(param_1 + 0x20))) {
      iVar13 = *(int *)(param_1 + 0x7c);
    }
    *(undefined4 *)(param_1 + 0x7c) = 0;
  }
  if (((*(byte *)(param_1 + 0x18) & 4) != 0) &&
     (piVar15 = (int *)FUN_1400cfa99(param_1), piVar15 != (int *)0x0)) {
    iVar13 = *piVar15;
    *(int *)(param_1 + 0x20) = iVar13;
  }
  local_134 = 0;
  local_130._0_4_ = iVar24 + (int)fVar34;
  uVar26 = (ulonglong)(uint)local_130;
  local_130._4_4_ = fVar34;
  iVar24 = *(int *)(param_1 + 8);
  iVar20 = *(int *)(lVar3 + 0x25a4);
  if (iVar20 < iVar24) {
    if (iVar20 == 0) {
      iVar20 = 8;
    }
    else {
      iVar20 = iVar20 / 2 + iVar20;
    }
    if (iVar20 <= iVar24) {
      iVar20 = iVar24;
    }
    uVar14 = FUN_140077ab4((longlong)iVar20 * 0xc);
    if (*(longlong *)(lVar3 + 0x25a8) != 0) {
      FUN_1401c5180(uVar14,*(longlong *)(lVar3 + 0x25a8),(longlong)*(int *)(lVar3 + 0x25a0) * 0xc);
      FUN_140077b90(*(undefined8 *)(lVar3 + 0x25a8));
    }
    *(undefined8 *)(lVar3 + 0x25a8) = uVar14;
    *(int *)(lVar3 + 0x25a4) = iVar20;
  }
  *(int *)(lVar3 + 0x25a0) = iVar24;
  fVar34 = DAT_1401c86c8;
  fVar36 = DAT_1401c86c8;
  if ((*(byte *)(param_1 + 0x18) & 0x80) != 0) {
    fVar36 = *(float *)(lVar3 + 0xe58);
  }
  local_168 = (char *)0x0;
  if (*(int *)(param_1 + 8) < 1) {
    local_158 = 0;
    piVar15 = (int *)0x0;
  }
  else {
    lVar27 = 0;
    lVar18 = 0;
    local_160 = (int *)0x0;
    local_158 = 0;
    local_16c = iVar13;
    uVar23 = 0xffffffff;
    local_150 = uVar26;
    local_148 = uVar21;
    do {
      lVar25 = *(longlong *)(param_1 + 0x10);
      if (((local_160 == (int *)0x0) || (local_160[5] < *(int *)(lVar25 + 0x14 + lVar27))) &&
         ((*(byte *)(lVar25 + 6 + lVar27) & 0x20) == 0)) {
        local_160 = (int *)(lVar25 + lVar27);
      }
      iVar13 = *(int *)(lVar25 + lVar27);
      iVar24 = *(int *)(param_1 + 0x20);
      if ((local_16c == 0) && (local_16c = iVar13, *(int *)(lVar3 + 0x23cc) != iVar13)) {
        local_16c = 0;
      }
      uVar14 = FUN_1400cc790(param_1);
      uVar19 = *(uint *)(lVar25 + 4 + lVar27);
      fVar31 = *(float *)(lVar25 + 0x24 + lVar27);
      if (fVar31 < 0.0) {
        FUN_1400cdbef(&local_13c,uVar14,(uVar19 & 0x100001) != 0x100000);
        uVar19 = *(uint *)(lVar25 + 4 + lVar27);
        fVar31 = local_13c;
      }
      *(float *)(lVar25 + 0x20 + lVar27) = fVar31;
      if ((uVar19 >> 0x15 & 1) == 0) {
        fVar31 = (float)FUN_14007b71f(fVar31,*(undefined4 *)(lVar3 + 0xe54));
        *(float *)(lVar25 + 0x20 + lVar27) = fVar31;
        uVar19 = *(uint *)(lVar25 + 4 + lVar27);
      }
      uVar2 = ((char)uVar19 < '\0') + 1;
      if ((uVar19 & 0x40) != 0) {
        uVar2 = 0;
      }
      fVar41 = fVar35;
      if (uVar2 != uVar23) {
        fVar41 = 0.0;
      }
      local_158 = CONCAT71((int7)(local_158 >> 8),(byte)local_158 | iVar13 == iVar24);
      fVar32 = (float)FUN_14004863e(fVar31,fVar36);
      *(ulonglong *)(auStack_124 + (uVar2 << 4)) =
           CONCAT44((float)((ulonglong)*(undefined8 *)(auStack_124 + (uVar2 << 4)) >> 0x20) +
                    fVar41 + fVar32,
                    (float)*(undefined8 *)(auStack_124 + (uVar2 << 4)) + fVar41 + fVar31);
      lVar16 = (longlong)(&local_134)[uVar2];
      (&local_134)[uVar2] = (&local_134)[uVar2] + 1;
      lVar28 = *(longlong *)(lVar3 + 0x25a8);
      *(int *)(lVar28 + lVar16 * 0xc) = (int)lVar18;
      uVar33 = *(undefined4 *)(lVar25 + 0x20 + lVar27);
      *(undefined4 *)(lVar28 + 8 + lVar16 * 0xc) = uVar33;
      *(undefined4 *)(lVar28 + 4 + lVar16 * 0xc) = uVar33;
      uVar33 = FUN_14007b71f(*(undefined4 *)(lVar25 + 0x20 + lVar27),fVar34);
      *(undefined4 *)(lVar25 + 0x1c + lVar27) = uVar33;
      lVar18 = lVar18 + 1;
      lVar27 = lVar27 + 0x38;
      uVar23 = uVar2;
    } while (lVar18 < *(int *)(param_1 + 8));
    local_168 = (char *)(ulonglong)(1 < *(int *)(param_1 + 8));
    piVar15 = local_160;
    uVar26 = local_150;
    uVar21 = local_148;
    iVar13 = local_16c;
  }
  pfVar1 = (float *)(param_1 + 0x40);
  fVar34 = 0.0;
  fVar35 = 0.0;
  lVar18 = 0xc;
  do {
    fVar34 = fVar34 + *(float *)((longlong)&local_128 + lVar18) +
                      (float)*(undefined8 *)((longlong)&local_130 + lVar18);
    fVar35 = fVar35 + *(float *)((longlong)&local_128 + lVar18) +
                      (float)((ulonglong)*(undefined8 *)((longlong)&local_130 + lVar18) >> 0x20);
    lVar18 = lVar18 + 0x10;
  } while (lVar18 != 0x3c);
  *(float *)(param_1 + 0x58) = fVar34;
  uVar23 = *(uint *)(param_1 + 0x18);
  if ((uVar23 >> 9 & 1) != 0) {
    fVar35 = *(float *)(param_1 + 0x54);
  }
  if (((byte)local_168 & *pfVar1 - *(float *)(param_1 + 0x38) < fVar35) == 0) {
    local_168 = (char *)(param_1 + 0x86);
    *(undefined1 *)(param_1 + 0x86) = 0;
  }
  else {
    bVar29 = (uVar23 & 0x280) != 0;
    bVar30 = (uVar23 & 0x10) == 0;
    local_168 = (char *)(param_1 + 0x86);
    *(bool *)(param_1 + 0x86) = bVar30 && bVar29;
    if (((bVar30 && bVar29) && (piVar17 = (int *)FUN_1400cfc14(param_1), piVar17 != (int *)0x0)) &&
       (iVar13 = *piVar17, (*(byte *)((longlong)piVar17 + 6) & 0x20) == 0)) {
      *(int *)(param_1 + 0x20) = iVar13;
    }
  }
  local_16c = iVar13;
  if ((iVar13 == 0) && (fVar40 < fVar37)) {
    local_16c = *(int *)(param_1 + 0x20);
  }
  fVar37 = (float)auStack_124._0_4_ + fVar38 + local_108._4_4_ + 0.0;
  fVar40 = *pfVar1 - *(float *)(param_1 + 0x38);
  if (fVar40 <= fVar37) {
    fVar35 = fVar37 - fVar40;
  }
  else {
    fVar35 = (float)FUN_14007b71f((local_118._4_4_ + fVar39) -
                                  ((fVar40 - ((float)auStack_124._0_4_ + fVar38)) -
                                  (local_108._4_4_ + 0.0)),0);
  }
  local_160 = piVar15;
  if ((DAT_1401c86c8 <= fVar35) &&
     ((*(uint *)(param_1 + 0x18) >> 8 & 1) != 0 ||
      ((char)*(uint *)(param_1 + 0x18) < '\0' || fVar40 <= fVar37))) {
    if (fVar40 <= fVar37) {
      uVar21 = uVar26;
    }
    iVar24 = (int)uVar26;
    if (fVar40 <= fVar37) {
      iVar24 = 0;
    }
    lVar18 = (longlong)iVar24;
    FUN_1400b13f2(lVar18 * 0xc + *(longlong *)(lVar3 + 0x25a8),uVar21 & 0xffffffff,fVar35,fVar36);
    fVar37 = DAT_1401c86c8;
    if (0 < (int)uVar21) {
      lVar27 = lVar18 * 0xc + 4;
      do {
        iVar13 = (int)*(float *)(*(longlong *)(lVar3 + 0x25a8) + lVar27);
        if (-1 < iVar13) {
          lVar25 = *(longlong *)(param_1 + 0x10);
          lVar28 = (longlong)*(int *)(*(longlong *)(lVar3 + 0x25a8) + -4 + lVar27) * 0x38;
          fVar40 = (float)FUN_14007b71f(fVar37,(float)iVar13);
          uVar23 = *(uint *)(lVar25 + 4 + lVar28);
          iVar13 = ((char)uVar23 < '\0') + 1;
          if ((uVar23 & 0x40) != 0) {
            iVar13 = 0;
          }
          *(float *)(auStack_124 + (uint)(iVar13 << 4)) =
               *(float *)(auStack_124 + (uint)(iVar13 << 4)) -
               (*(float *)(lVar25 + 0x1c + lVar28) - fVar40);
          *(float *)(lVar25 + 0x1c + lVar28) = fVar40;
        }
        lVar18 = lVar18 + 1;
        lVar27 = lVar27 + 0xc;
      } while (lVar18 < iVar24 + (int)uVar21);
    }
  }
  *(undefined4 *)(param_1 + 0x54) = 0;
  lVar18 = 0;
  fVar37 = 0.0;
  iVar24 = 0;
  do {
    if (lVar18 == 2) {
      uVar33 = FUN_14007b71f(0,(*pfVar1 - *(float *)(param_1 + 0x38)) - local_108._4_4_);
      fVar37 = (float)FUN_14004863e(uVar33,fVar37);
    }
    fVar40 = (&local_128)[lVar18 * 4];
    if (0 < (longlong)(int)fVar40) {
      lVar27 = (longlong)iVar24 * 0x38;
      uVar21 = 0;
      do {
        lVar25 = *(longlong *)(param_1 + 0x10);
        *(float *)(lVar25 + 0x18 + lVar27) = fVar37;
        *(undefined4 *)(lVar25 + 0x28 + lVar27) = 0xffffffff;
        fVar35 = 0.0;
        if (uVar21 < (int)fVar40 - 1) {
          fVar35 = *(float *)(lVar3 + 0xe0c);
        }
        fVar37 = fVar37 + fVar35 + *(float *)(lVar25 + 0x1c + lVar27);
        uVar21 = uVar21 + 1;
        lVar27 = lVar27 + 0x38;
      } while ((longlong)(int)fVar40 != uVar21);
    }
    fVar35 = (&fStack_11c)[lVar18 * 4];
    fVar34 = (float)FUN_14007b71f(*(float *)(auStack_124 + lVar18 * 0x10) + fVar35,0);
    iVar13 = local_16c;
    *(float *)(param_1 + 0x54) = fVar34 + *(float *)(param_1 + 0x54);
    fVar37 = fVar37 + fVar35;
    iVar24 = (int)fVar40 + iVar24;
    lVar18 = lVar18 + 1;
  } while (lVar18 != 3);
  if (*(int *)(param_1 + 0xa4) < 0) {
    uVar14 = FUN_140077ab4(0);
    if (*(longlong *)(param_1 + 0xa8) != 0) {
      FUN_1401c5180(uVar14,*(longlong *)(param_1 + 0xa8),(longlong)*(int *)(param_1 + 0xa0));
      FUN_140077b90(*(undefined8 *)(param_1 + 0xa8));
    }
    *(undefined8 *)(param_1 + 0xa8) = uVar14;
    *(undefined4 *)(param_1 + 0xa4) = 0;
  }
  *(undefined4 *)(param_1 + 0xa0) = 0;
  if ((local_158 & 1) == 0 && *(int *)(lVar3 + 4) <= *(int *)(param_1 + 0x34) + 1) {
    *(undefined4 *)(param_1 + 0x20) = 0;
  }
  else {
    iVar24 = *(int *)(param_1 + 0x20);
    if (iVar24 != 0) goto LAB_1400cc401;
  }
  iVar24 = 0;
  if ((*(int *)(param_1 + 0x24) == 0) && (local_160 != (int *)0x0)) {
    iVar24 = *local_160;
    *(int *)(param_1 + 0x20) = iVar24;
    iVar13 = iVar24;
  }
LAB_1400cc401:
  *(int *)(param_1 + 0x2c) = iVar24;
  *(undefined1 *)(param_1 + 0x84) = 0;
  lVar18 = *(longlong *)(lVar3 + 0x23e8);
  if (((lVar18 != 0) && (*(longlong *)(lVar18 + 0x4c0) != 0)) &&
     (*(longlong *)(*(longlong *)(lVar18 + 0x4c0) + 0x40) == param_1)) {
    iVar13 = *(int *)(lVar18 + 200);
    *(int *)(param_1 + 0x2c) = iVar13;
  }
  if (iVar13 == 0) {
    if (((*local_168 == '\x01') &&
        (cVar12 = FUN_140080e0c((float *)(param_1 + 0x38),pfVar1,1), cVar12 != '\0')) &&
       (cVar12 = FUN_1400807fe(*(undefined8 *)(lVar3 + 0x1608),0), cVar12 != '\0')) {
      fVar37 = *(float *)(lVar3 + 0x128 + (ulonglong)(*(byte *)(lVar3 + 0xbaa) ^ 1) * 4);
      iVar24 = *(byte *)(lVar3 + 0xbaa) + 0x295;
      cVar12 = FUN_140091dcf(iVar24,*(undefined4 *)(param_1 + 0x1c));
      if ((cVar12 != '\0') && ((fVar37 != 0.0 || (NAN(fVar37))))) {
        fVar40 = (float)FUN_1400cff85(param_1,&local_128);
        fVar37 = (fVar37 * fVar40) / _DAT_140211840;
        *(undefined4 *)(param_1 + 100) = 0;
        uVar33 = FUN_1400cff9f(param_1,fVar37 + *(float *)(param_1 + 0x60));
        *(undefined4 *)(param_1 + 0x60) = uVar33;
      }
      FUN_140092507(iVar24,*(undefined4 *)(param_1 + 0x1c),0);
    }
  }
  else {
    FUN_1400cfe83(param_1,iVar13,&local_128);
  }
  uVar33 = FUN_1400cff9f(param_1,*(undefined4 *)(param_1 + 0x5c));
  *(undefined4 *)(param_1 + 0x5c) = uVar33;
  fVar37 = (float)FUN_1400cff9f(param_1,*(undefined4 *)(param_1 + 0x60));
  *(float *)(param_1 + 0x60) = fVar37;
  if ((*(float *)(param_1 + 0x5c) != fVar37) || (NAN(*(float *)(param_1 + 0x5c)) || NAN(fVar37))) {
    uVar33 = FUN_14007b71f(*(undefined4 *)(param_1 + 0x68),
                           *(float *)(lVar3 + 0x1320) * _DAT_140211ed4);
    *(undefined4 *)(param_1 + 0x68) = uVar33;
    fVar37 = (float)FUN_14007b71f(uVar33,(float)((uint)(*(float *)(param_1 + 0x60) -
                                                       *(float *)(param_1 + 0x5c)) & _DAT_1401ced40)
                                         / DAT_1402115c8);
    *(float *)(param_1 + 0x68) = fVar37;
    if ((*(int *)(param_1 + 0x34) + 1 < *(int *)(lVar3 + 4)) ||
       (*(float *)(lVar3 + 0x1320) * DAT_1401c86d0 < *(float *)(param_1 + 100))) {
      fVar40 = *(float *)(param_1 + 0x60);
    }
    else {
      fVar37 = fVar37 * *(float *)(lVar3 + 0x48);
      fVar40 = *(float *)(param_1 + 0x5c);
      if (*(float *)(param_1 + 0x60) <= fVar40) {
        if (*(float *)(param_1 + 0x60) < fVar40) {
          fVar40 = (float)FUN_14007b71f(fVar40 - fVar37);
        }
      }
      else {
        fVar40 = (float)FUN_14004863e(fVar37 + fVar40);
      }
    }
    *(float *)(param_1 + 0x5c) = fVar40;
  }
  else {
    *(undefined4 *)(param_1 + 0x68) = 0;
  }
  *(float *)(param_1 + 0x6c) = *(float *)(param_1 + 0x38) + (float)auStack_124._0_4_ + fVar38;
  *(float *)(param_1 + 0x70) = (*(float *)(param_1 + 0x40) - local_108._4_4_) - fVar39;
  lVar3 = *(longlong *)(lVar3 + 0x1608);
  *(undefined8 *)(lVar3 + 0x158) = *(undefined8 *)(param_1 + 0x38);
  local_138 = *(float *)(param_1 + 0x44) - *(float *)(param_1 + 0x3c);
  local_13c = *(float *)(param_1 + 0x54);
  FUN_14008a82c(&local_13c,*(undefined4 *)(param_1 + 0x94));
  uVar33 = FUN_14007b71f(*(undefined4 *)(lVar3 + 0x178),
                         *(float *)(param_1 + 0x38) + *(float *)(param_1 + 0x58));
  *(undefined4 *)(lVar3 + 0x178) = uVar33;
  if (DAT_140f17b40 == (local_f0 ^ (ulonglong)local_198)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_f0 ^ (ulonglong)local_198);
}

