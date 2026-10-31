/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1012d77e */

bool FUN_1012d77e(undefined8 *param_1,int param_2,byte *param_3,undefined1 *param_4,uint param_5)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  uint *puVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  byte bVar13;
  uint uVar14;
  undefined1 uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  int iVar19;
  uint uVar20;
  bool bVar21;
  bool bVar22;
  bool bVar23;
  float10 fVar24;
  byte local_2d;
  byte local_2c;
  
  iVar3 = DAT_1039d74c;
  *(undefined1 *)(*(int *)(DAT_1039d74c + 0x14cc) + 0xfb) = 1;
  puVar6 = (uint *)(iVar3 + 0x1e40);
  if (*(int *)(iVar3 + 0x1e80) == param_2) {
    puVar6 = (uint *)(iVar3 + 0x1e84);
  }
  uVar1 = *puVar6;
  uVar14 = param_5 | 0x440000;
  if ((uVar1 >> 0x11 & 1) == 0) {
    uVar14 = param_5;
  }
  uVar16 = (uint)((uVar1 & 8) == 0) * 0x10 + 0x10;
  bVar21 = false;
  if ((uVar14 & 0x3f0) != 0) {
    uVar16 = 0;
  }
  iVar11 = *(int *)(iVar3 + 0x14cc);
  iVar19 = *(int *)(iVar3 + 0x14d0);
  if (((uVar14 >> 0xb & 1) != 0) && (iVar19 != 0)) {
    if (*(int *)(iVar19 + 0x3b0) == *(int *)(iVar11 + 0x3b0)) {
      *(int *)(iVar3 + 0x14d0) = iVar11;
      bVar21 = true;
    }
    else {
      bVar21 = false;
    }
  }
  local_2c = FUN_10102cf2(param_1,param_2,param_5 * 4 & 0x4000 | uVar1);
  if (*(char *)(iVar3 + 0x2250) == '\x01') {
    if ((((uVar14 >> 9 & 1) == 0) || ((*(byte *)(iVar3 + 0x2254) & 4) != 0)) ||
       (cVar4 = FUN_10102a1a(0x80), cVar4 == '\0')) {
      bVar22 = false;
    }
    else {
      FUN_101028e5(param_2);
      bVar22 = false;
      local_2c = 1;
      if ((DAT_102b71d4 <= *(float *)(iVar3 + 0x151c)) &&
         (*(float *)(iVar3 + 0x151c) - *(float *)(iVar3 + 0x48) <= DAT_102b71d4)) {
        *(int *)(iVar3 + 0x22d8) = param_2;
        FUN_101034e2(iVar11,0);
        local_2c = 1;
        bVar22 = true;
      }
    }
    if ((*(int *)(iVar3 + 0x22d0) == param_2) && ((*(byte *)(iVar3 + 0x22c5) & 0x20) != 0)) {
      local_2c = 1;
    }
  }
  else {
    bVar22 = false;
  }
  if (bVar21) {
    *(int *)(iVar3 + 0x14d0) = iVar19;
  }
  uVar16 = uVar16 | (uVar14 & 7) == 0 | uVar14;
  uVar18 = 0;
  iVar19 = 0;
  if ((uVar14 >> 0x15 & 1) == 0) {
    iVar19 = param_2;
  }
  if (local_2c != 0) {
    uVar17 = 0xffffffff;
    uVar20 = uVar17;
    do {
      if ((uVar16 >> (uVar18 & 0x1f) & 1) != 0) {
        cVar4 = FUN_10103eee(uVar18,0,iVar19);
        uVar12 = uVar17;
        if (uVar17 == 0xffffffff) {
          uVar12 = uVar18;
        }
        if (cVar4 != '\0') {
          uVar17 = uVar12;
        }
        cVar4 = FUN_10113f5b(uVar18,iVar19);
        uVar12 = uVar20;
        if (uVar20 == 0xffffffff) {
          uVar12 = uVar18;
        }
        if (cVar4 != '\0') {
          uVar20 = uVar12;
        }
      }
      uVar18 = uVar18 + 1;
    } while (uVar18 != 3);
    if (((uVar14 >> 0x10 & 1) == 0) ||
       (((*(char *)(iVar3 + 0x104) == '\0' && (*(char *)(iVar3 + 0x105) == '\0')) &&
        (*(char *)(iVar3 + 0x106) == '\0')))) {
      if ((uVar17 != 0xffffffff) && (*(int *)(iVar3 + 0x1528) != param_2)) {
        if ((uVar14 >> 0x14 & 1) == 0) {
          FUN_101143b4(uVar17 + 0x290,param_2,0);
        }
        uVar15 = (undefined1)uVar17;
        if ((uVar16 & 0x60) != 0) {
          FUN_101026ba(param_2,iVar11);
          *(undefined1 *)(iVar3 + 0x153b) = uVar15;
          if ((uVar14 >> 0x12 & 1) == 0) {
            FUN_101171b7(param_2,iVar11);
            uVar7 = 0;
          }
          else {
            if ((uVar14 >> 0x16 & 1) != 0) goto LAB_1012da72;
            uVar7 = 1;
          }
          FUN_101034e2(iVar11,uVar7);
        }
LAB_1012da72:
        if (((uVar16 & 0x10) != 0) ||
           (((uVar14 >> 8 & 1) != 0 && (*(short *)(iVar3 + 0xb22 + uVar17 * 2) == 2)))) {
          if ((uVar14 >> 0x11 & 1) == 0) {
            FUN_101026ba(param_2,iVar11);
          }
          else {
            FUN_101028d8();
          }
          *(undefined1 *)(iVar3 + 0x153b) = uVar15;
          if ((uVar14 >> 0x12 & 1) == 0) {
            FUN_101171b7(param_2,iVar11);
            uVar7 = 0;
          }
          else {
            bVar22 = true;
            if ((uVar14 >> 0x16 & 1) != 0) goto LAB_1012daf5;
            uVar7 = 1;
          }
          FUN_101034e2(iVar11,uVar7);
          bVar22 = true;
        }
LAB_1012daf5:
        if ((char)uVar14 < '\0') {
          if ((uVar14 >> 0x11 & 1) == 0) {
            FUN_101026ba(param_2,iVar11);
          }
          *(undefined1 *)(iVar3 + 0x153b) = uVar15;
        }
      }
      if (((char)uVar14 < '\0') && (uVar20 != 0xffffffff)) {
        bVar21 = true;
        if (((uVar1 & 8) != 0) &&
           (bVar21 = bVar22, *(float *)(iVar3 + 0xb88 + uVar20 * 4) < *(float *)(iVar3 + 0x94))) {
          bVar21 = true;
        }
        bVar22 = bVar21;
        if ((uVar14 >> 0x12 & 1) == 0) {
          FUN_101171b7(param_2,iVar11);
        }
        FUN_101028d8();
      }
      if ((((uVar1 & 8) != 0) && (*(int *)(iVar3 + 0x1528) == param_2)) &&
         (0.0 < *(float *)(iVar3 + 0xb74 + *(char *)(iVar3 + 0x153b) * 4))) {
        cVar4 = FUN_10103eee((int)*(char *)(iVar3 + 0x153b),1,iVar19);
        if (cVar4 != '\0') {
          bVar22 = true;
        }
      }
    }
    if (bVar22 == false) {
      bVar22 = false;
    }
    else {
      bVar22 = true;
      if (*(char *)(iVar3 + 0x6a) == '\x01') {
        *(undefined1 *)(iVar3 + 0x2040) = 0;
      }
    }
  }
  local_2d = local_2c;
  if ((uVar1 & 0x40) == 0) {
    bVar13 = local_2c;
    if ((*(int *)(iVar3 + 0x2044) == param_2) && (*(char *)(iVar3 + 0x2040) == '\x01')) {
      bVar13 = 1;
      if (*(char *)(iVar3 + 0x2041) == '\0') {
        bVar13 = local_2c;
      }
      if ((uVar14 >> 0x13 & 1) != 0) {
        bVar13 = local_2c;
      }
    }
    local_2c = bVar13;
    local_2d = 1;
    if (*(int *)(iVar3 + 0x205c) == param_2) {
      iVar2 = *(int *)(iVar3 + 0x2058);
      bVar21 = *(int *)(iVar3 + 0x2060) == param_2;
      if (((uVar1 & 8) != 0) && (*(int *)(iVar3 + 0x2060) != param_2)) {
        iVar8 = FUN_100f9590(DAT_1039d74c,0x20c);
        iVar9 = FUN_100f9590(DAT_1039d74c,0x20d);
        iVar10 = FUN_100f9590(DAT_1039d74c,(*(byte *)(iVar3 + 0x65) ^ 1) * 2 + 0x27b);
        uVar7 = *(undefined4 *)(iVar10 + 4);
        fVar24 = (float10)FUN_100fdbca(*(undefined4 *)(iVar8 + 4),*(undefined4 *)(iVar9 + 4));
        fVar24 = (float10)FUN_100fdbca((float)fVar24,uVar7);
        iVar8 = FUN_1011365b((float)fVar24 - *(float *)(iVar3 + 0x48),(float)fVar24,
                             *(undefined4 *)(iVar3 + 0x94),*(undefined4 *)(iVar3 + 0x98));
        bVar21 = 0 < iVar8;
      }
      if ((iVar2 == param_2) || (bVar21)) {
        FUN_101026ba(param_2,iVar11);
        *(undefined4 *)(iVar3 + 0x1548) = *(undefined4 *)(iVar3 + 0x208c);
        if (((uVar14 >> 0x12 & 1) == 0) && ((*(byte *)(iVar3 + 0x2064) & 0x10) == 0)) {
          FUN_101171b7(param_2,iVar11);
        }
        local_2d = 1;
        if ((*(byte *)(iVar3 + 0x2064) & 0x10) != 0) {
          *(undefined1 *)(iVar3 + 0x153a) = 1;
        }
        bVar22 = true;
      }
    }
  }
  if (*(int *)(iVar3 + 0x1528) != param_2) {
    uVar15 = 0;
    goto LAB_1012de95;
  }
  if (*(int *)(iVar3 + 0x1548) - 2U < 2) {
    uVar15 = 1;
    if (*(int *)(iVar3 + 0x205c) != param_2) {
      FUN_101028d8();
LAB_1012de78:
      uVar15 = 0;
    }
  }
  else {
    if (*(int *)(iVar3 + 0x1548) != 1) goto LAB_1012de78;
    if (*(char *)(iVar3 + 0x1534) == '\x01') {
      *(ulonglong *)(iVar3 + 0x1540) =
           CONCAT44((float)((ulonglong)*(undefined8 *)(iVar3 + 0xe4) >> 0x20) -
                    (float)((ulonglong)*param_1 >> 0x20),
                    (float)*(undefined8 *)(iVar3 + 0xe4) - (float)*param_1);
    }
    iVar11 = (int)*(char *)(iVar3 + 0x153b);
    bVar21 = bVar22;
    if (iVar11 == -1) {
LAB_1012df2c:
      FUN_101028d8();
      uVar15 = 0;
      bVar22 = bVar21;
    }
    else {
      uVar15 = 1;
      cVar4 = FUN_10113f09(iVar11,iVar19);
      if (cVar4 == '\0') {
        if ((((uVar14 & 0x40) != 0) || (((byte)(uVar16 >> 5) & 7 & local_2c) != 0)) &&
           (*(char *)(iVar3 + 0x2250) == '\0')) {
          if ((uVar14 >> 8 & 1) == 0) {
            bVar23 = false;
          }
          else if (*(char *)(iVar3 + 0xb36 + iVar11) == '\x01') {
            bVar23 = *(short *)(iVar3 + 0xb2c + iVar11 * 2) == 2;
          }
          else {
            bVar23 = false;
          }
          if ((uVar1 & 8) == 0) {
            bVar5 = false;
          }
          else {
            bVar5 = *(float *)(iVar3 + 0x94) <= *(float *)(iVar3 + 0xb88 + iVar11 * 4);
          }
          cVar4 = FUN_10113c9d(iVar11 + 0x290,iVar19);
          bVar21 = true;
          if ((bool)(bVar23 | bVar5)) {
            bVar21 = bVar22;
          }
          if (cVar4 == '\0') {
            bVar21 = bVar22;
          }
        }
        goto LAB_1012df2c;
      }
    }
    if (((uVar14 >> 0x12 & 1) == 0) && (*(char *)(iVar3 + 0x6a) == '\x01')) {
      *(undefined1 *)(iVar3 + 0x2040) = 0;
    }
  }
  bVar22 = bVar22 != false;
  if (bVar22) {
    *(undefined1 *)(iVar3 + 0x1537) = 1;
  }
LAB_1012de95:
  if (param_3 != (byte *)0x0) {
    if (*(int *)(iVar3 + 0x2074) == param_2) {
      local_2c = local_2d;
    }
    *param_3 = local_2c;
  }
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = uVar15;
  }
  return bVar22;
}

