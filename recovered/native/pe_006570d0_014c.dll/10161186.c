/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10161186 */

void FUN_10161186(int param_1)

{
  uint *puVar1;
  byte *pbVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  bool bVar6;
  bool bVar7;
  int iVar8;
  byte bVar9;
  char cVar10;
  undefined1 uVar11;
  short sVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  float *pfVar16;
  uint uVar17;
  short sVar18;
  bool bVar19;
  char cVar20;
  int iVar21;
  uint *puVar22;
  uint uVar23;
  uint uVar24;
  bool bVar25;
  bool bVar26;
  float10 fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float local_88;
  float local_84;
  float local_7c;
  float local_74;
  int local_6c;
  float local_68;
  int local_64;
  
  iVar8 = DAT_1039d74c;
  uVar13 = DAT_10388d00 ^ (uint)&stack0xffffff6c;
  uVar14 = *(uint *)(param_1 + 4) & 0xe000;
  *(undefined1 *)(param_1 + 0x1f6) = 1;
  *(undefined2 *)(param_1 + 0x1b6) = 0;
  _memset(*(void **)(param_1 + 0x2c),0,*(int *)(param_1 + 0x40) + 0x1f >> 3 & 0xfffffffc);
  bVar7 = false;
  _memset(*(void **)(param_1 + 0x28),0,*(int *)(param_1 + 0x40) + 0x1f >> 3 & 0xfffffffc);
  *(undefined2 *)(param_1 + 0x1d2) = 0xffff;
  fVar27 = (float10)FUN_100fdbca();
  *(float *)(param_1 + 0x8c) = (float)fVar27;
  iVar15 = *(int *)(param_1 + 0x40);
  if (iVar15 < 1) {
    local_74 = 0.0;
    local_68 = 0.0;
    bVar19 = false;
    local_64 = -1;
    fVar33 = 0.0;
    local_7c._0_2_ = 0;
  }
  else {
    local_7c._0_2_ = 0;
    local_6c = 0;
    local_64 = -1;
    bVar19 = false;
    bVar7 = false;
    local_68 = 0.0;
    local_74 = 0.0;
    iVar21 = 0;
    do {
      sVar12 = *(short *)(*(int *)(param_1 + 0x18) + iVar21 * 2);
      iVar15 = (int)sVar12;
      if (iVar21 != iVar15) {
        *(undefined1 *)(param_1 + 0x1f6) = 0;
      }
      puVar22 = (uint *)(iVar15 * 0x74 + *(int *)(param_1 + 0x10));
      if (*(short *)(param_1 + 0x1ba) <= sVar12) {
        FUN_101622d1();
        *(undefined2 *)(puVar22 + 0x15) = 0xffff;
        puVar22[0xd] = 0;
        puVar22[8] = 0xbf800000;
      }
      if (((*(byte *)(param_1 + 4) & 4) == 0) || ((*puVar22 & 0x80) != 0)) {
        *(byte *)(puVar22 + 0x1a) = 1;
        bVar9 = 1;
      }
      else {
        bVar9 = (byte)puVar22[0x1a];
      }
      if (*(byte *)((int)puVar22 + 0x67) != bVar9) {
        *(byte *)((int)puVar22 + 0x67) = bVar9;
        *(undefined1 *)(param_1 + 0x1f5) = 1;
        bVar9 = *(byte *)((int)puVar22 + 0x67);
      }
      if (bVar9 == 0) {
        bVar25 = false;
      }
      else {
        bVar25 = (*puVar22 & 1) == 0;
      }
      *(bool *)((int)puVar22 + 0x66) = bVar25;
      sVar18 = *(short *)((int)puVar22 + 0x5e);
      if (sVar18 != -1 && bVar25 == false) {
        *(undefined1 *)(param_1 + 0x1f0) = 1;
        sVar18 = *(short *)((int)puVar22 + 0x5e);
      }
      if ((0 < sVar18) && ((*(byte *)(param_1 + 7) & 4) == 0)) {
        *(undefined1 *)(param_1 + 0x1f0) = 1;
      }
      pfVar16 = (float *)(puVar22 + 4);
      if ((*puVar22 & 0x10) == 0) {
        pfVar16 = (float *)(puVar22 + 7);
      }
      if (*pfVar16 <= 0.0 && *pfVar16 != 0.0) {
        ((byte *)((int)puVar22 + 0x6f))[0] = 7;
        ((byte *)((int)puVar22 + 0x6f))[1] = 7;
      }
      if (*(byte *)((int)puVar22 + 0x66) == 0) {
        *(undefined2 *)(puVar22 + 0x16) = 0xffff;
      }
      else {
        *(short *)((int)puVar22 + 0x5a) = (short)local_64;
        *(undefined2 *)(puVar22 + 0x17) = 0xffff;
        if (local_64 == -1) {
          *(short *)(param_1 + 0x1d2) = sVar12;
        }
        else {
          *(short *)(*(int *)(param_1 + 0x10) + 0x5c + local_64 * 0x74) = sVar12;
        }
        sVar18 = *(short *)(param_1 + 0x1b6);
        *(short *)(param_1 + 0x1b6) = sVar18 + 1;
        *(short *)(puVar22 + 0x16) = sVar18;
        puVar1 = (uint *)(*(int *)(param_1 + 0x2c) + (iVar15 >> 5) * 4);
        *puVar1 = *puVar1 | 1 << ((byte)sVar12 & 0x1f);
        puVar1 = (uint *)(*(int *)(param_1 + 0x28) + ((int)*(short *)((int)puVar22 + 0x56) >> 5) * 4
                         );
        *puVar1 = *puVar1 | 1 << ((byte)*(short *)((int)puVar22 + 0x56) & 0x1f);
        if ((*(byte *)((int)puVar22 + 0x6d) == 0) && (*(short *)(param_1 + 0x4c) == 0)) {
          fVar27 = (float10)FUN_10162427();
          puVar22[5] = (uint)(float)fVar27;
        }
        uVar23 = *puVar22;
        if ((uVar23 & 0x20) == 0) {
          bVar7 = true;
        }
        if ((((uVar23 & 0x10) != 0) && ((uVar23 & 0x20) != 0)) && (0.0 < (float)puVar22[8])) {
          puVar22[5] = puVar22[8];
        }
        bVar19 = (bool)(bVar19 | *(byte *)((int)puVar22 + 0x6f) != 0);
        local_64 = iVar15;
        if ((uVar23 & 8) == 0) {
          fVar27 = (float10)FUN_100fdbca();
          local_74 = (float)fVar27;
          local_7c._0_2_ = local_7c._0_2_ + 1;
        }
        else {
          local_68 = local_68 + (float)puVar22[5];
          local_6c = local_6c + 1;
        }
      }
      iVar21 = iVar21 + 1;
      iVar15 = *(int *)(param_1 + 0x40);
    } while (iVar21 < iVar15);
    fVar33 = (float)local_6c;
  }
  if ((((*(uint *)(param_1 + 4) & 8) != 0) && ((*(uint *)(param_1 + 4) >> 0x1b & 1) == 0)) &&
     (*(short *)(param_1 + 0x1b4) == 0)) {
    *(undefined1 *)(param_1 + 0x1f0) = 1;
  }
  *(short *)(param_1 + 0x1d4) = (short)local_64;
  if (bVar19) {
    if (*(int *)(param_1 + 0x154) != *(int *)(param_1 + 0x158)) {
      *(undefined1 *)(*(int *)(param_1 + 0x158) + 0xfe) = 0;
      iVar15 = *(int *)(param_1 + 0x40);
    }
    *(undefined1 *)(param_1 + 0x1f5) = 1;
  }
  *(undefined4 *)(param_1 + 0x1d6) = 0xffffffff;
  local_84 = 0.0;
  local_88 = 0.0;
  if (0 < iVar15) {
    uVar23 = 0;
    iVar21 = 0x6f;
    local_84 = 0.0;
    fVar34 = DAT_1028b430;
    do {
      if ((*(uint *)(*(int *)(param_1 + 0x2c) + (uVar23 >> 5) * 4) >> (uVar23 & 0x1f) & 1) != 0) {
        iVar15 = *(int *)(param_1 + 0x10);
        uVar24 = *(uint *)(iVar15 + -0x6f + iVar21);
        if ((uVar24 & 0x10) == 0) {
          if (((*(char *)(iVar15 + iVar21) != '\0') || ((uVar24 & 0x20) != 0)) ||
             (fVar28 = *(float *)(iVar15 + -0x53 + iVar21), fVar28 < 0.0)) {
            fVar31 = *(float *)(iVar15 + -0x4f + iVar21);
            fVar28 = fVar31;
            if (fVar31 <= 0.0) {
              fVar28 = fVar34;
            }
            if (fVar31 <= 0.0 && uVar14 == 0x6000) {
              fVar28 = (*(float *)(iVar15 + -0x5b + iVar21) / local_68) * fVar33;
            }
            *(float *)(iVar15 + -0x53 + iVar21) = fVar28;
          }
          if ((*(short *)(param_1 + 0x1d6) == -1) ||
             (*(short *)(iVar15 + -0x19 + iVar21) <
              *(short *)(*(int *)(param_1 + 0x10) + 0x56 + *(short *)(param_1 + 0x1d6) * 0x74))) {
            *(short *)(param_1 + 0x1d6) = (short)uVar23;
          }
          local_84 = local_84 + fVar28;
          if ((*(short *)(param_1 + 0x1d8) == -1) ||
             (*(short *)(*(int *)(param_1 + 0x10) + 0x56 + *(short *)(param_1 + 0x1d8) * 0x74) <
              *(short *)(iVar15 + -0x19 + iVar21))) {
            *(short *)(param_1 + 0x1d8) = (short)uVar23;
          }
        }
        else {
          cVar10 = *(char *)(iVar15 + iVar21);
          if (uVar14 == 0x4000) {
            fVar28 = local_74;
            if ((uVar24 & 0x20) != 0 || cVar10 != '\0') goto LAB_10161637;
          }
          else {
            fVar28 = *(float *)(iVar15 + -0x5b + iVar21);
LAB_10161637:
            if (cVar10 == '\0') {
              if (((uVar24 & 0x20) != 0) && (*(char *)(iVar15 + -4 + iVar21) == '\x01')) {
                *(float *)(iVar15 + -0x5f + iVar21) = fVar28;
              }
            }
            else {
              *(float *)(iVar15 + -0x5f + iVar21) = fVar28;
              if (((cVar10 != '\x01') && (*(char *)(param_1 + 0x1ef) == '\x01')) &&
                 (*(char *)(iVar15 + -2 + iVar21) == '\0')) {
                fVar27 = (float10)FUN_100fdbca();
                fVar34 = DAT_1028b430;
                *(float *)(iVar15 + -0x5f + iVar21) = (float)fVar27;
              }
            }
          }
          local_88 = local_88 + *(float *)(iVar15 + -0x5f + iVar21);
        }
        *(undefined1 *)(iVar15 + -2 + iVar21) = 0;
        local_88 = local_88 + *(float *)(param_1 + 0x94) + *(float *)(param_1 + 0x94);
        iVar15 = *(int *)(param_1 + 0x40);
      }
      uVar23 = uVar23 + 1;
      iVar21 = iVar21 + 0x74;
    } while ((int)uVar23 < iVar15);
  }
  *(short *)(param_1 + 0x1b8) = local_7c._0_2_;
  *(float *)(param_1 + 0xac) = local_84;
  fVar33 = *(float *)(param_1 + 0xe4);
  fVar34 = *(float *)(param_1 + 0x90) + *(float *)(param_1 + 0x90) +
           (float)(*(short *)(param_1 + 0x1b6) + -1) *
           (*(float *)(param_1 + 0x98) + *(float *)(param_1 + 0x9c));
  uVar14 = *(uint *)(param_1 + 0xe8);
  fVar27 = (float10)FUN_100fdbca();
  local_88 = ((float)fVar27 - fVar34) - local_88;
  *(float *)(param_1 + 0xa4) =
       (float)(int)*(short *)(param_1 + 0x1b6) *
       (*(float *)(param_1 + 0x94) + *(float *)(param_1 + 0x94)) + fVar34;
  uVar23 = *(uint *)(param_1 + 0x40);
  if (0 < (int)uVar23) {
    uVar24 = 0;
    iVar15 = 0;
    do {
      if ((*(uint *)(*(int *)(param_1 + 0x2c) + (uVar24 >> 5) * 4) >> (uVar24 & 0x1f) & 1) != 0) {
        iVar21 = *(int *)(param_1 + 0x10);
        if ((*(byte *)(iVar21 + iVar15) & 8) != 0) {
          fVar27 = (float10)FUN_100fdbca();
          fVar34 = (float)fVar27 + DAT_102b94f4;
          *(float *)(iVar21 + 0x10 + iVar15) = (float)(int)fVar34;
          local_88 = local_88 - (float)(int)fVar34;
        }
        if ((*(short *)(iVar21 + 0x5c + iVar15) == -1) && (*(short *)(param_1 + 0x1d6) != -1)) {
          pbVar2 = (byte *)(iVar21 + 3 + iVar15);
          *pbVar2 = *pbVar2 | 0x40;
        }
        fVar27 = (float10)FUN_100fdbca();
        *(float *)(iVar21 + 4 + iVar15) = (float)(int)fVar27;
        *(float *)(param_1 + 0xa4) = (float)(int)fVar27 + *(float *)(param_1 + 0xa4);
        uVar23 = *(uint *)(param_1 + 0x40);
      }
      uVar24 = uVar24 + 1;
      iVar15 = iVar15 + 0x74;
    } while ((int)uVar24 < (int)uVar23);
  }
  fVar28 = DAT_102b8a50;
  fVar34 = DAT_1028b430;
  if ((((DAT_1028b430 <= local_88) && ((*(byte *)(param_1 + 6) & 8) == 0)) && (0 < (int)uVar23)) &&
     (0.0 < local_84)) {
    do {
      uVar24 = uVar23 - 1;
      if ((*(uint *)(*(int *)(param_1 + 0x28) + (uVar24 >> 5) * 4) >> (uVar24 & 0x1f) & 1) != 0) {
        iVar15 = *(short *)(*(int *)(param_1 + 0x18) + -2 + uVar23 * 2) * 0x74;
        if ((*(byte *)(*(int *)(param_1 + 0x10) + iVar15) & 8) != 0) {
          iVar15 = *(int *)(param_1 + 0x10) + iVar15;
          *(float *)(iVar15 + 0x10) = *(float *)(iVar15 + 0x10) + fVar34;
          *(float *)(iVar15 + 4) = *(float *)(iVar15 + 4) + fVar34;
          local_88 = local_88 + fVar28;
        }
      }
    } while ((fVar34 <= local_88) && (bVar19 = 1 < uVar23, uVar23 = uVar24, bVar19));
  }
  if (*(short *)(param_1 + 0x4c) == 0) {
    iVar15 = param_1 + 0x16c;
  }
  else {
    iVar15 = *(int *)(param_1 + 0x18c) + *(short *)(param_1 + 0x4c) * 0x18 + -0x18;
  }
  *(undefined4 *)(iVar15 + 0x10) = *(undefined4 *)(iVar15 + 0x14);
  *(undefined4 *)(iVar15 + 0x14) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x1be) = 0xffffffff;
  FUN_100fdbca();
  uVar3 = *(undefined4 *)(iVar8 + 0x1528);
  *(undefined4 *)(iVar8 + 0x1528) = 0;
  cVar10 = FUN_10102cf2();
  *(undefined4 *)(iVar8 + 0x1528) = uVar3;
  local_7c = *(float *)(iVar8 + 0xe4);
  if (0.0 < *(float *)(param_1 + 0xbc)) {
    fVar34 = *(float *)(iVar8 + 0xe8);
    if ((*(float *)(param_1 + 200) <= fVar34) &&
       (fVar28 = *(float *)(param_1 + 0xbc) + *(float *)(param_1 + 200), fVar34 <= fVar28)) {
      local_7c = local_7c + (float)(int)((fVar28 - fVar34) * *(float *)(param_1 + 0xc0));
    }
  }
  bVar19 = 0 < *(short *)(param_1 + 0x1e2);
  fVar34 = fVar33;
  if (0 < *(short *)(param_1 + 0x1e2)) {
    fVar34 = *(float *)(param_1 + 0xc4);
  }
  fVar28 = *(float *)(param_1 + 0x90);
  fVar31 = *(float *)(param_1 + 0x98);
  _memset(*(void **)(param_1 + 0x30),0,*(int *)(param_1 + 0x40) + 0x1f >> 3 & 0xfffffffc);
  if (*(int *)(param_1 + 0x40) < 1) {
LAB_10161f26:
    *(undefined1 *)(*(int *)(param_1 + 0x10) + 0x6b + *(short *)(param_1 + 0x1d2) * 0x74) = 1;
    *(undefined1 *)(*(int *)(param_1 + 0x10) + 0x6c + *(short *)(param_1 + 0x1d2) * 0x74) = 0;
  }
  else {
    fVar31 = (fVar34 + fVar28) - fVar31;
    uVar23 = 0;
    bVar25 = false;
    do {
      uVar11 = 1;
      if (*(short *)(param_1 + 0x1de) < 1) {
        uVar11 = *(undefined1 *)(param_1 + 0x1ec);
      }
      sVar12 = *(short *)(*(int *)(param_1 + 0x18) + uVar23 * 2);
      puVar22 = (uint *)(sVar12 * 0x74 + *(int *)(param_1 + 0x10));
      *(undefined1 *)((int)puVar22 + 0x6e) = uVar11;
      if (bVar19) {
        if (uVar23 == (int)*(short *)(param_1 + 0x1e2)) {
          fVar31 = fVar31 + (fVar33 - *(float *)(param_1 + 0xc4));
          goto LAB_10161bd9;
        }
        bVar19 = true;
      }
      else {
LAB_10161bd9:
        bVar19 = false;
      }
      *(byte *)((int)puVar22 + 3) = *(byte *)((int)puVar22 + 3) & 0xf0;
      if ((*(uint *)(*(int *)(param_1 + 0x28) + (uVar23 >> 5) * 4) >> (uVar23 & 0x1f) & 1) == 0) {
        puVar22[0xb] = (uint)fVar31;
        puVar22[9] = (uint)fVar31;
        puVar22[0xe] = (uint)fVar31;
        puVar22[3] = (uint)fVar31;
        puVar22[2] = (uint)fVar31;
        puVar22[1] = 0;
        puVar22[10] = uVar14;
        puVar22[0xc] = 0x7f7fffff;
        FUN_1010fa6a();
        *(undefined4 *)((int)puVar22 + 0x69) = 0x1000000;
        puVar22[0x10] = 0x3f800000;
      }
      else {
        puVar22[2] = (uint)fVar31;
        fVar27 = (float10)FUN_101624cc();
        puVar22[6] = (uint)(float)fVar27;
        fVar27 = (float10)FUN_100ea38a();
        puVar22[1] = (uint)(float)fVar27;
        FUN_100ea38a();
        fVar27 = (float10)FUN_100fdbca();
        fVar28 = (float)fVar27;
        puVar22[1] = (uint)fVar28;
        fVar32 = *(float *)(param_1 + 0x94) + *(float *)(param_1 + 0x94) +
                 fVar31 + fVar28 + *(float *)(param_1 + 0x98) + *(float *)(param_1 + 0x9c);
        puVar22[3] = (uint)fVar32;
        fVar34 = (float)puVar22[0xe];
        puVar22[0xe] = (uint)(*(float *)(param_1 + 0x94) + (float)puVar22[2] +
                             *(float *)(param_1 + 0x98));
        puVar22[0xf] = (uint)((fVar32 - *(float *)(param_1 + 0x94)) - *(float *)(param_1 + 0x9c));
        puVar22[0x10] = (uint)(float)(int)(fVar28 * DAT_102b8c94);
        puVar22[9] = puVar22[2];
        puVar22[10] = uVar14;
        puVar22[0xb] = (uint)fVar32;
        puVar22[0xc] = 0x7f7fffff;
        FUN_1010fa6a();
        fVar28 = (float)puVar22[9];
        fVar32 = (float)puVar22[0xb];
        *(bool *)((int)puVar22 + 0x69) = fVar28 < fVar32;
        *(undefined1 *)((int)puVar22 + 0x6a) = 1;
        if (fVar32 <= fVar28) {
          bVar26 = true;
          if (*(char *)((int)puVar22 + 0x6f) == '\0') {
            bVar26 = (char)puVar22[0x1c] != '\0';
          }
        }
        else {
          puVar1 = (uint *)(*(int *)(param_1 + 0x30) + ((int)sVar12 >> 5) * 4);
          *puVar1 = *puVar1 | 1 << ((byte)sVar12 & 0x1f);
          bVar26 = true;
        }
        *(bool *)((int)puVar22 + 0x6b) = bVar26;
        cVar20 = '\x01';
        bVar6 = bVar25;
        if (*(char *)((int)puVar22 + 0x66) == '\x01') {
          cVar20 = *(char *)(param_1 + 0x200);
          bVar6 = true;
          if (cVar20 != '\0') {
            bVar6 = bVar25;
          }
        }
        if (bVar26 != false) {
          bVar25 = bVar6;
        }
        *(char *)(puVar22 + 0x1b) = cVar20;
        uVar24 = (uint)(fVar28 < fVar32) << 0x19 | *puVar22;
        uVar17 = uVar24 | 0x1000000;
        *puVar22 = uVar17;
        if (*(short *)((int)puVar22 + 0x5e) != -1) {
          uVar17 = uVar24 | 0x5000000;
          *puVar22 = uVar17;
        }
        if (((cVar10 != '\0') && ((float)puVar22[9] <= local_7c)) &&
           (local_7c < (float)puVar22[0xb])) {
          *puVar22 = uVar17 | 0x8000000;
          *(short *)(param_1 + 0x1be) = sVar12;
        }
        fVar28 = (float)puVar22[0xe];
        fVar32 = fVar28;
        fVar29 = fVar28;
        fVar30 = fVar28;
        if (*(short *)(param_1 + 0x4c) != 0) {
          fVar34 = fVar28 - fVar34;
          fVar28 = fVar34 + (float)puVar22[0x11];
          fVar32 = fVar34 + (float)puVar22[0x12];
          fVar29 = fVar34 + (float)puVar22[0x13];
          fVar30 = fVar34 + (float)puVar22[0x14];
        }
        puVar22[0x11] = (uint)fVar28;
        puVar22[0x12] = (uint)fVar32;
        puVar22[0x13] = (uint)fVar29;
        puVar22[0x14] = (uint)fVar30;
        if ((*(char *)(param_1 + 0x200) == '\0') && (*(short *)(param_1 + 0x4c) == 0)) {
          *(byte *)((int)puVar22 + 0x6f) = *(byte *)((int)puVar22 + 0x6f) >> 1;
          *(byte *)(puVar22 + 0x1c) = (byte)puVar22[0x1c] >> 1;
        }
        if ((int)uVar23 < (int)*(short *)(param_1 + 0x1e2)) {
          FUN_10112cc4();
        }
        fVar31 = fVar31 + *(float *)(param_1 + 0x94) + *(float *)(param_1 + 0x94) +
                          (float)puVar22[1] + *(float *)(param_1 + 0x98) +
                          *(float *)(param_1 + 0x9c);
      }
      uVar23 = uVar23 + 1;
    } while ((int)uVar23 < *(int *)(param_1 + 0x40));
    if (!bVar25) goto LAB_10161f26;
  }
  fVar27 = (float10)FUN_100fdbca();
  fVar33 = (float)fVar27;
  if (((cVar10 != '\0') && (*(short *)(param_1 + 0x1be) == -1)) && (fVar33 <= local_7c)) {
    *(undefined2 *)(param_1 + 0x1be) = *(undefined2 *)(param_1 + 0x40);
  }
  uVar14 = *(uint *)(param_1 + 4);
  if (!bVar7 && (uVar14 & 1) != 0) {
    uVar14 = uVar14 & 0xfffffffe;
    *(uint *)(param_1 + 4) = uVar14;
  }
  *(bool *)(param_1 + 0x1fb) = *(int *)(iVar8 + 0x152c) != 0;
  if (*(short *)(param_1 + 0x1d8) != -1) {
    uVar14 = uVar14 & 0xfffeffff;
    *(uint *)(param_1 + 4) = uVar14;
  }
  if ((uVar14 >> 0x10 & 1) != 0) {
    *(float *)(param_1 + 0xec) = fVar33;
    *(float *)(param_1 + 0xcc) = fVar33;
    fVar27 = (float10)FUN_100ea38a();
    *(float *)(param_1 + 0xfc) = (float)fVar27;
  }
  iVar21 = *(int *)(param_1 + 0x158);
  uVar3 = *(undefined4 *)(param_1 + 0xe8);
  uVar4 = *(undefined4 *)(param_1 + 0xec);
  uVar5 = *(undefined4 *)(param_1 + 0xf0);
  *(undefined4 *)(iVar21 + 0x27c) = *(undefined4 *)(param_1 + 0xe4);
  *(undefined4 *)(iVar21 + 0x280) = uVar3;
  *(undefined4 *)(iVar21 + 0x284) = uVar4;
  *(undefined4 *)(iVar21 + 0x288) = uVar5;
  *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(param_1 + 0xf4);
  *(undefined4 *)(param_1 + 0x84) = *(undefined4 *)(param_1 + 0xfc);
  if ((*(uint *)(param_1 + 4) >> 0x11 & 1) == 0) {
    FUN_100fdbca();
  }
  fVar27 = (float10)FUN_10112cc4();
  *(float *)(*(int *)(param_1 + 0x158) + 0x278) = (float)fVar27;
  FUN_101625aa();
  if ((*(byte *)(param_1 + 4) & 1) != 0) {
    FUN_10162723();
  }
  *(undefined4 *)(iVar15 + 8) = 0;
  *(undefined1 *)(param_1 + 0x1ed) = 1;
  *(undefined1 *)(param_1 + 0x1f1) = 0;
  *(undefined2 *)(param_1 + 0x1c2) = 0xffff;
  if (((*(char *)(param_1 + 0x1f2) != '\x01') ||
      (sVar12 = *(short *)(param_1 + 0x1da), sVar12 == -1)) ||
     (*(short *)(param_1 + 0x4e) != *(short *)(param_1 + 0x4c))) {
    if ((*(byte *)(param_1 + 7) & 0x10) == 0) goto LAB_1016215c;
    sVar12 = *(short *)(param_1 + 0x1be);
    if ((((sVar12 == -1) || (*(int *)(param_1 + 0x40) == (int)sVar12)) ||
        (*(short *)(param_1 + 0x1c0) != -1)) ||
       (((*(int *)(iVar8 + 0x1528) != 0 && (*(char *)(param_1 + 0x1fc) == '\0')) &&
        (*(char *)(iVar8 + 0x2250) != '\x01')))) goto LAB_1016215c;
  }
  *(short *)(param_1 + 0x1c2) = sVar12;
LAB_1016215c:
  if ((*(char *)(param_1 + 499) == '\0') && (cVar10 = FUN_101629f2(), cVar10 != '\0')) {
    FUN_10162a3e();
    FUN_101165cb();
  }
  if ((*(char *)(param_1 + 0x1f0) == '\x01') && ((*(byte *)(param_1 + 4) & 8) != 0)) {
    FUN_10162e22();
  }
  if (0 < *(short *)(param_1 + 0x1e0)) {
    *(float *)(*(int *)(param_1 + 0x158) + 0xa8) =
         *(float *)(*(int *)(param_1 + 0x10) + 0xc +
                   *(short *)(*(int *)(param_1 + 0x18) + -2 + *(short *)(param_1 + 0x1e0) * 2) *
                   0x74) - *(float *)(param_1 + 0xc4);
  }
  if (0 < *(short *)(param_1 + 0x1dc)) {
    *(undefined4 *)(*(int *)(param_1 + 0x158) + 0xac) = *(undefined4 *)(iVar15 + 0xc);
  }
  *(undefined4 *)(iVar15 + 0xc) = 0;
  if ((*(int *)(iVar8 + 0x23bc) == *(int *)(param_1 + 0x158)) &&
     (*(char *)(iVar8 + 0x23c0) == '\x01')) {
    FUN_10162f7f();
  }
  if ((*(byte *)(param_1 + 6) & 0x10) == 0) {
    FUN_101881b4();
  }
  else {
    FUN_1018de6c();
  }
  if (DAT_10388d00 == (uVar13 ^ (uint)&stack0xffffff6c)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

