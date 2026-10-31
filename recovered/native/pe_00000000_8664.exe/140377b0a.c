/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140377b0a */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140377b0a(longlong param_1)

{
  uint *puVar1;
  byte *pbVar2;
  longlong lVar3;
  undefined8 uVar4;
  byte bVar5;
  bool bVar6;
  byte bVar7;
  undefined1 uVar8;
  char cVar9;
  short sVar10;
  uint uVar11;
  float *pfVar12;
  ulonglong uVar13;
  short sVar14;
  int iVar15;
  ulonglong uVar16;
  uint uVar17;
  int iVar18;
  bool bVar19;
  longlong lVar20;
  ulonglong uVar21;
  longlong lVar22;
  uint *puVar23;
  bool bVar24;
  bool bVar25;
  undefined4 uVar26;
  uint uVar27;
  float fVar28;
  undefined4 uVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  undefined1 auStack_148 [36];
  int local_124;
  undefined8 local_120;
  longlong local_118;
  longlong local_110;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f0;
  undefined4 local_e8;
  undefined4 local_e4;
  ulonglong local_e0;
  
  lVar22 = DAT_14062a630;
  local_e0 = ram0x000140613b10 ^ (ulonglong)auStack_148;
  uVar27 = *(uint *)(param_1 + 4);
  uVar17 = uVar27 & 0xe000;
  *(undefined1 *)(param_1 + 0x242) = 1;
  *(undefined2 *)(param_1 + 0x202) = 0;
  uVar21 = 0;
  FUN_1404b9e70(*(undefined8 *)(param_1 + 0x50),0,
                (longlong)(*(int *)(param_1 + 0x6c) + 0x1f >> 5) << 2);
  FUN_1404b9e70(*(undefined8 *)(param_1 + 0x48),0,
                (longlong)(*(int *)(param_1 + 0x6c) + 0x1f >> 5) << 2);
  *(undefined2 *)(param_1 + 0x21e) = 0xffff;
  fVar30 = DAT_1404bda40;
  uVar26 = FUN_140313933(DAT_1404bda40,*(undefined4 *)(lVar22 + 0xdf4));
  *(undefined4 *)(param_1 + 0xb8) = uVar26;
  uVar13 = (ulonglong)*(uint *)(param_1 + 0x6c);
  local_118 = lVar22;
  if ((int)*(uint *)(param_1 + 0x6c) < 1) {
    iVar15 = 0xffff;
    uVar26 = 0;
    fVar34 = 0.0;
    bVar19 = false;
    fVar35 = 0.0;
    iVar18 = 0;
  }
  else {
    local_120 = CONCAT44(local_120._4_4_,uVar27) & 0xffffffff0000e000;
    iVar18 = 0;
    iVar15 = -1;
    lVar22 = 0;
    local_124 = 0;
    bVar19 = false;
    bVar5 = 0;
    fVar34 = 0.0;
    uVar26 = 0;
    do {
      sVar10 = *(short *)(*(longlong *)(param_1 + 0x28) + lVar22 * 2);
      if (lVar22 != sVar10) {
        *(undefined1 *)(param_1 + 0x242) = 0;
      }
      puVar23 = (uint *)((longlong)sVar10 * 0x74 + *(longlong *)(param_1 + 0x18));
      if (*(short *)(param_1 + 0x206) <= sVar10) {
        FUN_140378b15(param_1,puVar23,0);
        *(undefined2 *)(puVar23 + 0x15) = 0xffff;
        puVar23[0xd] = 0;
        puVar23[8] = 0xbf800000;
      }
      if (((*(byte *)(param_1 + 4) & 4) == 0) || ((*puVar23 & 0x80) != 0)) {
        *(byte *)(puVar23 + 0x1a) = 1;
        bVar7 = 1;
      }
      else {
        bVar7 = (byte)puVar23[0x1a];
      }
      if (*(byte *)((longlong)puVar23 + 0x67) != bVar7) {
        *(byte *)((longlong)puVar23 + 0x67) = bVar7;
        *(undefined1 *)(param_1 + 0x241) = 1;
        bVar7 = *(byte *)((longlong)puVar23 + 0x67);
      }
      if (bVar7 == 0) {
        bVar24 = false;
      }
      else {
        bVar24 = (*puVar23 & 1) == 0;
      }
      *(bool *)((longlong)puVar23 + 0x66) = bVar24;
      sVar14 = *(short *)((longlong)puVar23 + 0x5e);
      if (sVar14 != -1 && bVar24 == false) {
        *(undefined1 *)(param_1 + 0x23c) = 1;
        sVar14 = *(short *)((longlong)puVar23 + 0x5e);
      }
      if ((0 < sVar14) && ((*(byte *)(param_1 + 7) & 4) == 0)) {
        *(undefined1 *)(param_1 + 0x23c) = 1;
      }
      pfVar12 = (float *)(puVar23 + 4);
      if ((*puVar23 & 0x10) == 0) {
        pfVar12 = (float *)(puVar23 + 7);
      }
      if (*pfVar12 <= 0.0 && *pfVar12 != 0.0) {
        ((byte *)((longlong)puVar23 + 0x6f))[0] = 7;
        ((byte *)((longlong)puVar23 + 0x6f))[1] = 7;
      }
      if (*(byte *)((longlong)puVar23 + 0x66) == 0) {
        *(undefined2 *)(puVar23 + 0x16) = 0xffff;
      }
      else {
        *(short *)((longlong)puVar23 + 0x5a) = (short)iVar15;
        *(undefined2 *)(puVar23 + 0x17) = 0xffff;
        if (iVar15 == -1) {
          *(short *)(param_1 + 0x21e) = sVar10;
        }
        else {
          *(short *)(*(longlong *)(param_1 + 0x18) + 0x5c + (longlong)iVar15 * 0x74) = sVar10;
        }
        iVar15 = (int)sVar10;
        sVar14 = *(short *)(param_1 + 0x202);
        *(short *)(param_1 + 0x202) = sVar14 + 1;
        *(short *)(puVar23 + 0x16) = sVar14;
        puVar1 = (uint *)(*(longlong *)(param_1 + 0x50) + (longlong)(iVar15 >> 5) * 4);
        *puVar1 = *puVar1 | 1 << ((byte)sVar10 & 0x1f);
        puVar1 = (uint *)(*(longlong *)(param_1 + 0x48) +
                         (longlong)((int)*(short *)((longlong)puVar23 + 0x56) >> 5) * 4);
        *puVar1 = *puVar1 | 1 << ((byte)*(short *)((longlong)puVar23 + 0x56) & 0x1f);
        if ((*(byte *)((longlong)puVar23 + 0x6d) == 0) && (*(short *)(param_1 + 0x78) == 0)) {
          uVar27 = FUN_140378c8b(param_1,puVar23);
          puVar23[5] = uVar27;
        }
        uVar27 = *puVar23;
        if ((uVar27 & 0x20) == 0) {
          bVar5 = 1;
        }
        if ((((uVar27 & 0x10) != 0) && ((uVar27 & 0x20) != 0)) && (0.0 < (float)puVar23[8])) {
          puVar23[5] = puVar23[8];
        }
        bVar19 = (bool)(bVar19 | *(byte *)((longlong)puVar23 + 0x6f) != 0);
        if ((uVar27 & 8) == 0) {
          uVar26 = FUN_140313933(uVar26);
          local_124 = local_124 + 1;
        }
        else {
          fVar34 = fVar34 + (float)puVar23[5];
          iVar18 = iVar18 + 1;
        }
      }
      lVar22 = lVar22 + 1;
      uVar13 = (ulonglong)*(int *)(param_1 + 0x6c);
    } while (lVar22 < (longlong)uVar13);
    fVar35 = (float)iVar18;
    uVar21 = (ulonglong)bVar5;
    uVar17 = (uint)local_120;
    iVar18 = local_124;
  }
  lVar22 = local_118;
  if ((((*(uint *)(param_1 + 4) & 8) != 0) && ((*(uint *)(param_1 + 4) >> 0x1b & 1) == 0)) &&
     (*(short *)(param_1 + 0x200) == 0)) {
    *(undefined1 *)(param_1 + 0x23c) = 1;
  }
  *(short *)(param_1 + 0x220) = (short)iVar15;
  if (bVar19) {
    if (*(longlong *)(param_1 + 0x180) != *(longlong *)(param_1 + 0x188)) {
      *(undefined1 *)(*(longlong *)(param_1 + 0x188) + 0x10e) = 0;
      uVar13 = (ulonglong)*(uint *)(param_1 + 0x6c);
    }
    *(undefined1 *)(param_1 + 0x241) = 1;
  }
  *(undefined4 *)(param_1 + 0x222) = 0xffffffff;
  fVar33 = DAT_1404ed020;
  fVar38 = 0.0;
  fVar36 = 0.0;
  fVar37 = 0.0;
  if (0 < (int)uVar13) {
    lVar20 = 0x6f;
    uVar16 = 0;
    do {
      if ((*(uint *)(*(longlong *)(param_1 + 0x50) + (uVar16 >> 5 & 0x7ffffff) * 4) >>
           ((uint)uVar16 & 0x1f) & 1) != 0) {
        lVar3 = *(longlong *)(param_1 + 0x18);
        uVar27 = *(uint *)(lVar3 + -0x6f + lVar20);
        if ((uVar27 & 0x10) == 0) {
          if (((*(char *)(lVar3 + lVar20) != '\0') || ((uVar27 & 0x20) != 0)) ||
             (fVar28 = *(float *)(lVar3 + -0x53 + lVar20), fVar28 < 0.0)) {
            fVar31 = *(float *)(lVar3 + -0x4f + lVar20);
            fVar28 = fVar31;
            if (fVar31 <= 0.0) {
              fVar28 = fVar30;
            }
            if (fVar31 <= 0.0 && uVar17 == 0x6000) {
              fVar28 = (*(float *)(lVar3 + -0x5b + lVar20) / fVar34) * fVar35;
            }
            *(float *)(lVar3 + -0x53 + lVar20) = fVar28;
          }
          if (((longlong)*(short *)(param_1 + 0x222) == -1) ||
             (*(short *)(lVar3 + -0x19 + lVar20) <
              *(short *)(*(longlong *)(param_1 + 0x18) + 0x56 +
                        (longlong)*(short *)(param_1 + 0x222) * 0x74))) {
            *(short *)(param_1 + 0x222) = (short)uVar16;
          }
          fVar36 = fVar36 + fVar28;
          if (((longlong)*(short *)(param_1 + 0x224) == -1) ||
             (*(short *)(*(longlong *)(param_1 + 0x18) + 0x56 +
                        (longlong)*(short *)(param_1 + 0x224) * 0x74) <
              *(short *)(lVar3 + -0x19 + lVar20))) {
            *(short *)(param_1 + 0x224) = (short)uVar16;
          }
        }
        else {
          cVar9 = *(char *)(lVar3 + lVar20);
          if (uVar17 == 0x4000) {
            uVar29 = uVar26;
            if ((uVar27 & 0x20) != 0 || cVar9 != '\0') goto LAB_140377fcb;
          }
          else {
            uVar29 = *(undefined4 *)(lVar3 + -0x5b + lVar20);
LAB_140377fcb:
            if (cVar9 == '\0') {
              if (((uVar27 & 0x20) != 0) && (*(char *)(lVar3 + -4 + lVar20) == '\x01'))
              goto LAB_140378031;
            }
            else {
              *(undefined4 *)(lVar3 + -0x5f + lVar20) = uVar29;
              if ((cVar9 != '\x01') &&
                 ((*(char *)(param_1 + 0x23b) == '\x01' && (*(char *)(lVar3 + -2 + lVar20) == '\0'))
                 )) {
                uVar29 = FUN_140313933(*(undefined4 *)(lVar3 + -0x5f + lVar20),
                                       *(float *)(param_1 + 0xb8) * fVar33);
LAB_140378031:
                *(undefined4 *)(lVar3 + -0x5f + lVar20) = uVar29;
              }
            }
          }
          fVar37 = fVar37 + *(float *)(lVar3 + -0x5f + lVar20);
        }
        *(undefined1 *)(lVar3 + -2 + lVar20) = 0;
        fVar37 = fVar37 + *(float *)(param_1 + 0xc0) + *(float *)(param_1 + 0xc0);
        uVar13 = (ulonglong)*(uint *)(param_1 + 0x6c);
      }
      uVar16 = uVar16 + 1;
      lVar20 = lVar20 + 0x74;
    } while ((longlong)uVar16 < (longlong)(int)uVar13);
  }
  *(short *)(param_1 + 0x204) = (short)iVar18;
  *(float *)(param_1 + 0xd8) = fVar36;
  fVar30 = DAT_1404bda40;
  if ((*(char *)(param_1 + 0x24a) != '\0') &&
     (*(char *)(*(longlong *)(param_1 + 0x188) + 0x105) == '\0')) {
    fVar38 = *(float *)(lVar22 + 0xe2c);
  }
  fVar34 = *(float *)(param_1 + 0x110);
  fVar35 = *(float *)(param_1 + 0xbc) + *(float *)(param_1 + 0xbc) +
           (float)(*(short *)(param_1 + 0x202) + -1) *
           (*(float *)(param_1 + 0xc4) + *(float *)(param_1 + 200));
  if ((((*(byte *)(param_1 + 7) & 1) == 0) || (*(float *)(param_1 + 0xcc) != 0.0)) ||
     (NAN(*(float *)(param_1 + 0xcc)))) {
    fVar33 = *(float *)(param_1 + 0x118) - fVar34;
  }
  else {
    fVar33 = *(float *)(param_1 + 0x128) - *(float *)(param_1 + 0x120);
  }
  uVar27 = *(uint *)(param_1 + 0x114);
  fVar38 = (float)FUN_140313933(DAT_1404bda40,fVar33 - fVar38);
  fVar37 = (fVar38 - fVar35) - fVar37;
  *(float *)(param_1 + 0xd0) =
       (float)(int)*(short *)(param_1 + 0x202) *
       (*(float *)(param_1 + 0xc0) + *(float *)(param_1 + 0xc0)) + fVar35;
  fVar35 = DAT_1404f0514;
  uVar17 = *(uint *)(param_1 + 0x6c);
  fVar38 = fVar37;
  if (0 < (int)uVar17) {
    uVar13 = 0;
    lVar20 = 0;
    do {
      if ((*(uint *)(*(longlong *)(param_1 + 0x50) + (uVar13 >> 5 & 0x7ffffff) * 4) >>
           ((uint)uVar13 & 0x1f) & 1) != 0) {
        lVar3 = *(longlong *)(param_1 + 0x18);
        if ((*(byte *)(lVar3 + lVar20) & 8) != 0) {
          fVar33 = (float)FUN_140313933((*(float *)(lVar3 + 0x1c + lVar20) / fVar36) * fVar37,
                                        *(undefined4 *)(param_1 + 0xb8));
          *(float *)(lVar3 + 0x10 + lVar20) = (float)(int)(fVar33 + fVar35);
          fVar38 = fVar38 - (float)(int)(fVar33 + fVar35);
        }
        if ((*(short *)(lVar3 + 0x5c + lVar20) == -1) && (*(short *)(param_1 + 0x222) != -1)) {
          pbVar2 = (byte *)(lVar3 + 3 + lVar20);
          *pbVar2 = *pbVar2 | 0x40;
        }
        fVar33 = (float)FUN_140313933(*(undefined4 *)(lVar3 + 0x10 + lVar20),
                                      *(undefined4 *)(param_1 + 0xb8));
        *(float *)(lVar3 + 4 + lVar20) = (float)(int)fVar33;
        *(float *)(param_1 + 0xd0) = (float)(int)fVar33 + *(float *)(param_1 + 0xd0);
        uVar17 = *(uint *)(param_1 + 0x6c);
      }
      uVar13 = uVar13 + 1;
      lVar20 = lVar20 + 0x74;
    } while ((longlong)uVar13 < (longlong)(int)uVar17);
  }
  fVar35 = DAT_1404ccdb0;
  if (((DAT_1404bda40 <= fVar38) && ((*(byte *)(param_1 + 6) & 8) == 0)) &&
     ((0 < (int)uVar17 && (0.0 < fVar36)))) {
    uVar13 = (ulonglong)uVar17;
    do {
      uVar17 = (int)uVar13 - 1;
      if ((*(uint *)(*(longlong *)(param_1 + 0x48) + (ulonglong)(uVar17 >> 5) * 4) >>
           (uVar17 & 0x1f) & 1) != 0) {
        lVar20 = (longlong)*(short *)(*(longlong *)(param_1 + 0x28) + -2 + uVar13 * 2) * 0x74;
        if ((*(byte *)(*(longlong *)(param_1 + 0x18) + lVar20) & 8) != 0) {
          lVar20 = *(longlong *)(param_1 + 0x18) + lVar20;
          *(float *)(lVar20 + 0x10) = *(float *)(lVar20 + 0x10) + fVar30;
          *(float *)(lVar20 + 4) = *(float *)(lVar20 + 4) + fVar30;
          fVar38 = fVar38 + fVar35;
        }
      }
    } while ((fVar30 <= fVar38) && (bVar19 = 1 < uVar13, uVar13 = uVar13 - 1, bVar19));
  }
  if ((longlong)*(short *)(param_1 + 0x78) == 0) {
    lVar20 = param_1 + 0x1a8;
  }
  else {
    lVar20 = *(longlong *)(param_1 + 0x1c8) + (longlong)*(short *)(param_1 + 0x78) * 0x18 + -0x18;
  }
  *(undefined4 *)(lVar20 + 0x10) = *(undefined4 *)(lVar20 + 0x14);
  *(undefined4 *)(lVar20 + 0x14) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x20a) = 0xffffffff;
  local_e4 = FUN_140313933(*(undefined4 *)(param_1 + 0xfc),
                           *(float *)(param_1 + 0xf4) + *(float *)(lVar20 + 4));
  local_e8 = *(undefined4 *)(param_1 + 0xf8);
  local_f0 = *(undefined8 *)(param_1 + 0xf0);
  uVar26 = *(undefined4 *)(lVar22 + 0x167c);
  *(undefined4 *)(lVar22 + 0x167c) = 0;
  uVar8 = FUN_140318d40(&local_f0,0,0);
  local_124 = CONCAT31(local_124._1_3_,uVar8);
  *(undefined4 *)(lVar22 + 0x167c) = uVar26;
  fVar35 = *(float *)(lVar22 + 0x118);
  if (0.0 < *(float *)(param_1 + 0xe8)) {
    fVar38 = *(float *)(lVar22 + 0x11c);
    if ((*(float *)(param_1 + 0xf4) <= fVar38) &&
       (fVar33 = *(float *)(param_1 + 0xe8) + *(float *)(param_1 + 0xf4), fVar38 <= fVar33)) {
      fVar35 = fVar35 + (float)(int)((fVar33 - fVar38) * *(float *)(param_1 + 0xec));
    }
  }
  bVar19 = 0 < *(short *)(param_1 + 0x22e);
  fVar38 = fVar34;
  if (0 < *(short *)(param_1 + 0x22e)) {
    fVar38 = *(float *)(param_1 + 0xf0);
  }
  fVar33 = *(float *)(param_1 + 0xbc);
  fVar37 = *(float *)(param_1 + 0xc4);
  local_108 = *(undefined4 *)(param_1 + 0x120);
  uStack_104 = *(undefined4 *)(param_1 + 0x124);
  uStack_100 = *(undefined4 *)(param_1 + 0x128);
  uStack_fc = *(undefined4 *)(param_1 + 300);
  FUN_1404b9e70(*(undefined8 *)(param_1 + 0x58),0,
                (longlong)(*(int *)(param_1 + 0x6c) + 0x1f >> 5) << 2);
  fVar36 = DAT_1404efc84;
  if (*(int *)(param_1 + 0x6c) < 1) {
LAB_140378760:
    cVar9 = (char)uVar21;
    *(undefined1 *)
     (*(longlong *)(param_1 + 0x18) + 0x6b + (longlong)*(short *)(param_1 + 0x21e) * 0x74) = 1;
    *(undefined1 *)
     (*(longlong *)(param_1 + 0x18) + 0x6c + (longlong)*(short *)(param_1 + 0x21e) * 0x74) = 0;
  }
  else {
    fVar37 = (fVar38 + fVar33) - fVar37;
    uVar13 = 0;
    bVar24 = false;
    local_120 = uVar21;
    local_110 = lVar20;
    do {
      uVar8 = 1;
      if (*(short *)(param_1 + 0x22a) < 1) {
        uVar8 = *(undefined1 *)(param_1 + 0x238);
      }
      sVar10 = *(short *)(*(longlong *)(param_1 + 0x28) + uVar13 * 2);
      puVar23 = (uint *)((longlong)sVar10 * 0x74 + *(longlong *)(param_1 + 0x18));
      *(undefined1 *)((longlong)puVar23 + 0x6e) = uVar8;
      if (bVar19) {
        bVar19 = true;
        if (uVar13 == (longlong)*(short *)(param_1 + 0x22e)) {
          fVar37 = fVar37 + (fVar34 - *(float *)(param_1 + 0xf0));
          goto LAB_14037848b;
        }
      }
      else {
LAB_14037848b:
        bVar19 = false;
      }
      *(byte *)((longlong)puVar23 + 3) = *(byte *)((longlong)puVar23 + 3) & 0xf0;
      if ((*(uint *)(*(longlong *)(param_1 + 0x48) + (uVar13 >> 5 & 0x7ffffff) * 4) >>
           ((uint)uVar13 & 0x1f) & 1) == 0) {
        puVar23[0xb] = (uint)fVar37;
        puVar23[9] = (uint)fVar37;
        puVar23[0xe] = (uint)fVar37;
        puVar23[3] = (uint)fVar37;
        puVar23[2] = (uint)fVar37;
        puVar23[1] = 0;
        puVar23[10] = uVar27;
        puVar23[0xc] = 0x7f7fffff;
        FUN_140325cba(puVar23 + 9,&local_108);
        *(undefined4 *)((longlong)puVar23 + 0x69) = 0x1000000;
        puVar23[0x10] = 0x3f800000;
      }
      else {
        puVar23[2] = (uint)fVar37;
        uVar17 = FUN_140378cfa(param_1,(longlong)sVar10 & 0xffffffff);
        puVar23[6] = uVar17;
        uVar17 = FUN_1403000b2(puVar23[1],uVar17);
        puVar23[1] = uVar17;
        uVar26 = FUN_1403000b2(puVar23[4],*(undefined4 *)(param_1 + 0xb8));
        fVar33 = (float)FUN_140313933(puVar23[1],uVar26);
        puVar23[1] = (uint)fVar33;
        fVar28 = *(float *)(param_1 + 0xc0) + *(float *)(param_1 + 0xc0) +
                 fVar37 + fVar33 + *(float *)(param_1 + 0xc4) + *(float *)(param_1 + 200);
        puVar23[3] = (uint)fVar28;
        fVar38 = (float)puVar23[0xe];
        puVar23[0xe] = (uint)(*(float *)(param_1 + 0xc0) + (float)puVar23[2] +
                             *(float *)(param_1 + 0xc4));
        puVar23[0xf] = (uint)((fVar28 - *(float *)(param_1 + 0xc0)) - *(float *)(param_1 + 200));
        puVar23[0x10] = (uint)(float)(int)(fVar33 * fVar36);
        puVar23[9] = puVar23[2];
        puVar23[10] = uVar27;
        puVar23[0xb] = (uint)fVar28;
        puVar23[0xc] = 0x7f7fffff;
        FUN_140325cba(puVar23 + 9,&local_108);
        fVar33 = (float)puVar23[9];
        fVar28 = (float)puVar23[0xb];
        *(bool *)((longlong)puVar23 + 0x69) = fVar33 < fVar28;
        *(undefined1 *)((longlong)puVar23 + 0x6a) = 1;
        if (fVar28 <= fVar33) {
          bVar25 = true;
          if (*(char *)((longlong)puVar23 + 0x6f) == '\0') {
            bVar25 = (char)puVar23[0x1c] != '\0';
          }
        }
        else {
          puVar1 = (uint *)(*(longlong *)(param_1 + 0x58) + (longlong)((int)sVar10 >> 5) * 4);
          *puVar1 = *puVar1 | 1 << ((byte)sVar10 & 0x1f);
          bVar25 = true;
        }
        *(bool *)((longlong)puVar23 + 0x6b) = bVar25;
        cVar9 = '\x01';
        bVar6 = bVar24;
        if (*(char *)((longlong)puVar23 + 0x66) == '\x01') {
          cVar9 = *(char *)(param_1 + 0x24c);
          bVar6 = true;
          if (cVar9 != '\0') {
            bVar6 = bVar24;
          }
        }
        if (bVar25 != false) {
          bVar24 = bVar6;
        }
        *(char *)(puVar23 + 0x1b) = cVar9;
        uVar17 = (uint)(fVar33 < fVar28) << 0x19 | *puVar23;
        uVar11 = uVar17 | 0x1000000;
        *puVar23 = uVar11;
        if (*(short *)((longlong)puVar23 + 0x5e) != -1) {
          uVar11 = uVar17 | 0x5000000;
          *puVar23 = uVar11;
        }
        if ((((char)local_124 != '\0') && ((float)puVar23[9] <= fVar35)) &&
           (fVar35 < (float)puVar23[0xb])) {
          *puVar23 = uVar11 | 0x8000000;
          *(short *)(param_1 + 0x20a) = sVar10;
        }
        fVar33 = (float)puVar23[0xe];
        fVar28 = fVar33;
        fVar31 = fVar33;
        fVar32 = fVar33;
        if (*(short *)(param_1 + 0x78) != 0) {
          fVar38 = fVar33 - fVar38;
          fVar33 = fVar38 + (float)puVar23[0x11];
          fVar28 = fVar38 + (float)puVar23[0x12];
          fVar31 = fVar38 + (float)puVar23[0x13];
          fVar32 = fVar38 + (float)puVar23[0x14];
        }
        puVar23[0x11] = (uint)fVar33;
        puVar23[0x12] = (uint)fVar28;
        puVar23[0x13] = (uint)fVar31;
        puVar23[0x14] = (uint)fVar32;
        if ((*(char *)(param_1 + 0x24c) == '\0') && (*(short *)(param_1 + 0x78) == 0)) {
          *(byte *)((longlong)puVar23 + 0x6f) = *(byte *)((longlong)puVar23 + 0x6f) >> 1;
          *(byte *)(puVar23 + 0x1c) = (byte)puVar23[0x1c] >> 1;
        }
        if ((longlong)uVar13 < (longlong)*(short *)(param_1 + 0x22e)) {
          local_108 = FUN_140328ebe((float)puVar23[3] + fVar30,local_108,uStack_100);
        }
        fVar37 = fVar37 + *(float *)(param_1 + 0xc0) + *(float *)(param_1 + 0xc0) +
                          (float)puVar23[1] + *(float *)(param_1 + 0xc4) + *(float *)(param_1 + 200)
        ;
      }
      uVar13 = uVar13 + 1;
    } while ((longlong)uVar13 < (longlong)*(int *)(param_1 + 0x6c));
    cVar9 = (char)local_120;
    lVar20 = local_110;
    uVar21 = local_120;
    lVar22 = local_118;
    if (!bVar24) goto LAB_140378760;
  }
  fVar30 = (float)FUN_140313933(*(undefined4 *)(param_1 + 0x110),
                                *(undefined4 *)
                                 (*(longlong *)(param_1 + 0x18) + 0x2c +
                                 (longlong)*(short *)(param_1 + 0x220) * 0x74));
  if ((((char)local_124 != '\0') && (*(short *)(param_1 + 0x20a) == -1)) && (fVar30 <= fVar35)) {
    *(undefined2 *)(param_1 + 0x20a) = *(undefined2 *)(param_1 + 0x6c);
  }
  uVar27 = *(uint *)(param_1 + 4);
  if (cVar9 == '\0' && (uVar27 & 1) != 0) {
    uVar27 = uVar27 & 0xfffffffe;
    *(uint *)(param_1 + 4) = uVar27;
  }
  *(bool *)(param_1 + 0x247) = *(int *)(lVar22 + 0x1680) != 0;
  if (*(short *)(param_1 + 0x224) != -1) {
    uVar27 = uVar27 & 0xfffeffff;
    *(uint *)(param_1 + 4) = uVar27;
  }
  if ((uVar27 >> 0x10 & 1) != 0) {
    *(float *)(param_1 + 0x118) = fVar30;
    *(float *)(param_1 + 0xf8) = fVar30;
    uVar26 = FUN_1403000b2(*(undefined4 *)(param_1 + 0x128));
    *(undefined4 *)(param_1 + 0x128) = uVar26;
  }
  lVar3 = *(longlong *)(param_1 + 0x188);
  uVar4 = *(undefined8 *)(param_1 + 0x118);
  *(undefined8 *)(lVar3 + 0x2a8) = *(undefined8 *)(param_1 + 0x110);
  *(undefined8 *)(lVar3 + 0x2b0) = uVar4;
  *(undefined4 *)(param_1 + 0xac) = *(undefined4 *)(param_1 + 0x120);
  *(undefined4 *)(param_1 + 0xb0) = *(undefined4 *)(param_1 + 0x128);
  if ((*(uint *)(param_1 + 4) >> 0x11 & 1) == 0) {
    uVar26 = 0;
    if ((*(uint *)(param_1 + 4) >> 0x19 & 1) == 0) {
      uVar26 = *(undefined4 *)(param_1 + 0xfc);
    }
    fVar30 = (float)FUN_140313933(*(undefined4 *)(*(longlong *)(param_1 + 0x188) + 0x2d4),uVar26);
  }
  else {
    fVar30 = *(float *)(param_1 + 0xfc);
  }
  uVar26 = FUN_140328ebe(fVar30 - *(float *)(lVar22 + 0xe18),
                         *(undefined4 *)(*(longlong *)(param_1 + 0x188) + 0x29c),
                         *(undefined4 *)(*(longlong *)(param_1 + 0x188) + 0x2a4));
  *(undefined4 *)(*(longlong *)(param_1 + 0x188) + 0x2a4) = uVar26;
  FUN_140378dd3(param_1);
  if ((*(byte *)(param_1 + 4) & 1) != 0) {
    FUN_140378f67(param_1);
  }
  *(undefined4 *)(lVar20 + 8) = 0;
  *(undefined1 *)(param_1 + 0x239) = 1;
  *(undefined1 *)(param_1 + 0x23d) = 0;
  *(undefined2 *)(param_1 + 0x20e) = 0xffff;
  if (((*(char *)(param_1 + 0x23e) != '\x01') ||
      (sVar10 = *(short *)(param_1 + 0x226), sVar10 == -1)) ||
     (*(short *)(param_1 + 0x7a) != *(short *)(param_1 + 0x78))) {
    if ((*(byte *)(param_1 + 7) & 0x10) == 0) goto LAB_140378956;
    sVar10 = *(short *)(param_1 + 0x20a);
    if ((((sVar10 == -1) || (*(int *)(param_1 + 0x6c) == (int)sVar10)) ||
        (*(short *)(param_1 + 0x20c) != -1)) ||
       (((*(int *)(lVar22 + 0x167c) != 0 && (*(char *)(param_1 + 0x248) == '\0')) &&
        (*(char *)(lVar22 + 0x2428) != '\x01')))) goto LAB_140378956;
  }
  *(short *)(param_1 + 0x20e) = sVar10;
LAB_140378956:
  if ((*(char *)(param_1 + 0x23f) == '\0') && (cVar9 = FUN_140379271(param_1), cVar9 != '\0')) {
    FUN_1403792c0(param_1,*(undefined4 *)(param_1 + 4));
    FUN_14032c8bf();
  }
  if ((*(char *)(param_1 + 0x23c) == '\x01') && ((*(byte *)(param_1 + 4) & 8) != 0)) {
    FUN_1403796bd(param_1);
  }
  if (0 < *(short *)(param_1 + 0x22c)) {
    *(float *)(*(longlong *)(param_1 + 0x188) + 0xb8) =
         *(float *)(*(longlong *)(param_1 + 0x18) + 0xc +
                   (longlong)
                   *(short *)(*(longlong *)(param_1 + 0x28) +
                             (ulonglong)((int)*(short *)(param_1 + 0x22c) - 1) * 2) * 0x74) -
         *(float *)(param_1 + 0xf0);
  }
  if (0 < *(short *)(param_1 + 0x228)) {
    *(undefined4 *)(*(longlong *)(param_1 + 0x188) + 0xbc) = *(undefined4 *)(lVar20 + 0xc);
  }
  *(undefined4 *)(lVar20 + 0xc) = 0;
  lVar20 = *(longlong *)(param_1 + 0x188);
  if ((*(longlong *)(lVar22 + 0x25d8) == lVar20) && (*(char *)(lVar22 + 0x25e0) == '\x01')) {
    FUN_140379836(param_1,lVar22 + 0x25e4);
  }
  if ((*(byte *)(param_1 + 6) & 0x10) == 0) {
    FUN_1403a0a74(*(undefined8 *)(lVar20 + 800),lVar20 + 0x288,lVar20 + 0x290,0);
  }
  else {
    FUN_1403a6a12(*(undefined8 *)(param_1 + 0x1a0),*(undefined8 *)(lVar20 + 800),2);
  }
  if (ram0x000140613b10 != (local_e0 ^ (ulonglong)auStack_148)) {
                    /* WARNING: Subroutine does not return */
    FUN_14044aba0(local_e0 ^ (ulonglong)auStack_148);
  }
  return;
}

