/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101276c6 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101276c6(void)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  int iVar3;
  char cVar4;
  char cVar5;
  byte bVar6;
  int iVar7;
  undefined4 uVar8;
  uint uVar9;
  int iVar10;
  undefined4 extraout_EDX;
  uint uVar11;
  byte bVar12;
  uint uVar13;
  int iVar14;
  bool bVar15;
  float10 fVar16;
  float fVar17;
  float fVar18;
  int iVar19;
  undefined4 uVar20;
  int iVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  float fVar24;
  uint local_44;
  int local_40;
  undefined4 local_3c;
  float local_38;
  float local_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  undefined8 local_24;
  uint local_1c [3];
  
  iVar3 = DAT_1039d74c;
  local_1c[2] = DAT_10388d00 ^ (uint)&local_44;
  iVar7 = FUN_1010400a();
  if (iVar7 != 0) {
    *(undefined4 *)(iVar3 + 0x221c) = 0;
  }
  if ((*(int *)(iVar3 + 0x2220) != 0) && (*(int *)(iVar3 + 0x221c) == 0)) {
    fVar16 = (float10)FUN_100fdbca(*(float *)(iVar3 + 0x48) * DAT_102b7108 +
                                   *(float *)(iVar3 + 0x222c),0);
    local_38 = (float)fVar16;
    *(float *)(iVar3 + 0x222c) = local_38;
    if ((local_38 <= 0.0) && (*(float *)(iVar3 + 0x224c) <= 0.0)) {
      *(undefined4 *)(iVar3 + 0x2220) = 0;
    }
  }
  bVar12 = 0;
  uVar8 = FUN_100fa6c3("##NavUpdateWindowing",0,0);
  local_34 = *(float *)(iVar3 + 0x30);
  if (((uint)local_34 & 2) != 0) {
    bVar12 = *(byte *)(iVar3 + 0x34) & 1;
  }
  if (iVar7 == 0) {
    if (*(int *)(iVar3 + 0x2214) == 0) {
      local_44 = 0;
    }
    else {
      local_44 = FUN_101065b0(*(int *)(iVar3 + 0x2214),0x2001,uVar8);
    }
    if (*(int *)(iVar3 + 0x2218) == 0) goto LAB_10127789;
    local_3c = uVar8;
    local_40 = FUN_101065b0(*(int *)(iVar3 + 0x2218),0x2001,uVar8);
    uVar8 = local_3c;
  }
  else {
    local_44 = 0;
LAB_10127789:
    local_40 = 0;
  }
  if ((bVar12 == 0) || (*(int *)(iVar3 + 0x221c) != 0)) {
    bVar12 = 0;
  }
  else {
    bVar12 = FUN_101065b0(0x27a,0x2000,uVar8);
  }
  if (iVar7 == 0) {
    bVar6 = ((byte)local_44 | (byte)local_40) & *(int *)(iVar3 + 0x221c) == 0;
  }
  else {
    bVar6 = 0;
  }
  if (bVar12 != 0) {
    *(undefined1 *)(iVar3 + 0x2234) = 1;
    *(undefined4 *)(iVar3 + 0x2238) = 0x27a;
    *(undefined4 *)(iVar3 + 0x208c) = 3;
    *(undefined4 *)(iVar3 + 0x2230) = 3;
  }
  if ((byte)(iVar7 == 0 & bVar12 | bVar6) == 1) {
    iVar7 = *(int *)(iVar3 + 0x2048);
    bVar15 = iVar7 == 0;
    local_3c = uVar8;
    if (((bVar15) || (cVar4 = FUN_10117992(iVar7), cVar4 == '\0')) &&
       (iVar7 = FUN_101288d4(0xffffffff), iVar7 == 0)) goto LAB_101278f3;
    if ((bVar6 != 0) || (*(char *)(iVar3 + 0x2213) == '\x01')) {
      uVar8 = *(undefined4 *)(iVar7 + 0x3a8);
      *(undefined4 *)(iVar3 + 0x2220) = uVar8;
      *(undefined4 *)(iVar3 + 0x221c) = uVar8;
    }
    *(undefined8 *)(iVar3 + 0x2228) = 0;
    *(undefined4 *)(iVar3 + 0x223c) = 0;
    *(undefined4 *)(iVar3 + 0x2240) = 0;
    *(undefined4 *)(iVar3 + 0x2244) = 0;
    *(undefined4 *)(iVar3 + 0x2248) = 0;
    *(uint *)(iVar3 + 0x208c) = bVar6 ^ 3;
    *(uint *)(iVar3 + 0x2230) = bVar6 ^ 3;
    if ((byte)((byte)local_44 | (byte)local_40) == 1) {
      FUN_10114427((*(uint *)(iVar3 + 0x2218) | *(uint *)(iVar3 + 0x2214)) & 0xf000,local_3c,0);
    }
  }
  else {
LAB_101278f3:
    bVar15 = false;
  }
  if (*(int *)(iVar3 + 0x221c) == 0) {
    uVar11 = 0;
    iVar7 = 0;
    if ((*(char *)(iVar3 + 0x2234) == '\x01') && (uVar11 = 0, *(int *)(iVar3 + 0x2230) == 3))
    goto LAB_101279d3;
  }
  else if (*(int *)(iVar3 + 0x2230) == 3) {
    fVar17 = *(float *)(iVar3 + 0x48) + *(float *)(iVar3 + 0x2228);
    *(float *)(iVar3 + 0x2228) = fVar17;
    fVar18 = (fVar17 + _DAT_102b90e8) / _DAT_102b90ec;
    fVar17 = DAT_1028b430;
    if (fVar18 <= DAT_1028b430) {
      fVar17 = fVar18;
    }
    fVar16 = (float10)FUN_100fdbca(*(undefined4 *)(iVar3 + 0x222c),
                                   ~-(uint)(fVar18 < 0.0) & (uint)fVar17);
    *(float *)(iVar3 + 0x222c) = (float)fVar16;
    cVar4 = FUN_10113d4b(0x282,1);
    cVar5 = FUN_10113d4b(0x283,1);
    if (cVar4 != cVar5 && !bVar15) {
      FUN_1012891f();
      *(undefined4 *)(iVar3 + 0x222c) = 0x3f800000;
    }
LAB_101279d3:
    cVar4 = FUN_10113c70(0x27a);
    if (cVar4 == '\0') {
      if ((DAT_1028b430 < *(float *)(iVar3 + 0x222c) || DAT_1028b430 == *(float *)(iVar3 + 0x222c))
         || (*(char *)(iVar3 + 0x2234) == '\0')) {
        iVar7 = *(int *)(iVar3 + 0x221c);
        uVar11 = 0;
      }
      else {
        uVar11 = CONCAT31((int3)((uint)extraout_EDX >> 8),*(int *)(iVar3 + 0x2048) != 0);
        iVar7 = 0;
      }
      *(undefined4 *)(iVar3 + 0x221c) = 0;
      *(undefined1 *)(iVar3 + 0x2234) = 0;
    }
    else {
      if (*(int *)(iVar3 + 0x221c) != 0) goto LAB_101279f5;
LAB_10127b04:
      uVar11 = 0;
      iVar7 = 0;
    }
  }
  else {
LAB_101279f5:
    uVar11 = 0;
    iVar7 = 0;
    if (*(int *)(iVar3 + 0x2230) == 2) {
      uVar11 = *(uint *)(iVar3 + 0x2214);
      fVar17 = *(float *)(iVar3 + 0x48) + *(float *)(iVar3 + 0x2228);
      uVar13 = *(uint *)(iVar3 + 0x2218);
      *(float *)(iVar3 + 0x2228) = fVar17;
      fVar18 = (fVar17 + _DAT_102b90e8) / _DAT_102b90ec;
      fVar17 = DAT_1028b430;
      if (fVar18 <= DAT_1028b430) {
        fVar17 = fVar18;
      }
      fVar16 = (float10)FUN_100fdbca(*(undefined4 *)(iVar3 + 0x222c),
                                     ~-(uint)(fVar18 < 0.0) & (uint)fVar17);
      *(float *)(iVar3 + 0x222c) = (float)fVar16;
      if (!bVar15 && (byte)((byte)local_40 | (byte)local_44) == 1) {
        FUN_1012891f();
        goto LAB_10127b04;
      }
      if (uVar13 == 0) {
        uVar13 = 0xf000;
      }
      uVar9 = uVar11 & 0xf000;
      if (uVar11 == 0) {
        uVar9 = 0xf000;
      }
      uVar11 = 0;
      iVar7 = 0;
      if ((uVar9 & uVar13 & ~*(uint *)(iVar3 + 0x108)) != 0) {
        iVar7 = *(int *)(iVar3 + 0x221c);
        uVar11 = 0;
      }
    }
  }
  local_1c[1] = 0x215;
  local_1c[0] = 0x211;
  bVar15 = true;
  local_44 = uVar11;
  if ((*(int *)(iVar3 + 0x2048) != 0) && ((*(byte *)(*(int *)(iVar3 + 0x2048) + 0xe) & 1) == 0)) {
    iVar14 = 0;
    local_40 = iVar7;
    do {
      if (((uint)local_34 & 1) != 0) {
        uVar8 = *(undefined4 *)((int)local_1c + iVar14);
        cVar4 = FUN_10113d60(uVar8,0,0xffffffff);
        if (cVar4 != '\0') {
          *(undefined1 *)(iVar3 + 0x2234) = 1;
          *(undefined4 *)(iVar3 + 0x2238) = uVar8;
          *(undefined4 *)(iVar3 + 0x208c) = 2;
          *(undefined4 *)(iVar3 + 0x2230) = 2;
          bVar15 = false;
          iVar7 = local_40;
          break;
        }
      }
      iVar14 = iVar14 + 4;
      iVar7 = local_40;
    } while (iVar14 != 8);
  }
  uVar11 = local_44;
  if ((*(char *)(iVar3 + 0x2234) == '\x01') && (*(int *)(iVar3 + 0x2230) == 2)) {
    if ((*(int *)(iVar3 + 0xbe0) < 1) &&
       (((*(char *)(iVar3 + 0x104) == '\0' && (*(char *)(iVar3 + 0x105) == '\0')) &&
        (*(char *)(iVar3 + 0x107) == '\0')))) {
      if (bVar15) {
        if ((*(double *)(iVar3 + 0x1580) == *(double *)(iVar3 + 0x18)) &&
           (!NAN(*(double *)(iVar3 + 0x1580)) && !NAN(*(double *)(iVar3 + 0x18))))
        goto LAB_10127cc5;
      }
      cVar4 = FUN_10113c9d(*(undefined4 *)(iVar3 + 0x2238),0xffffffff);
      if ((cVar4 == '\0') || (cVar4 = FUN_10113c9d(0x4000,0xffffffff), cVar4 == '\0'))
      goto LAB_10127cc5;
      uVar8 = *(undefined4 *)(iVar3 + 0x2238);
      cVar4 = FUN_10113ed3(uVar8);
      uVar11 = local_44;
      if ((cVar4 != '\0') &&
         ((*(int *)(iVar3 + 0x1528) == 0 || (*(char *)(iVar3 + 0x1535) == '\x01')))) {
        bVar12 = FUN_10103c30(iVar3 + 0xe4);
        bVar6 = FUN_10103c30(iVar3 + 0xac0);
        uVar11 = (uint)(byte)(bVar6 ^ bVar12 ^ 1 | (byte)local_44);
      }
    }
    else {
LAB_10127cc5:
      *(undefined1 *)(iVar3 + 0x2234) = 0;
      uVar8 = *(undefined4 *)(iVar3 + 0x2238);
      uVar11 = local_44;
    }
    cVar4 = FUN_10113c70(uVar8);
    if (cVar4 == '\0') {
      *(undefined1 *)(iVar3 + 0x2234) = 0;
    }
  }
  iVar14 = *(int *)(iVar3 + 0x221c);
  if ((iVar14 != 0) && ((*(byte *)(iVar14 + 0xc) & 4) == 0)) {
    uVar8 = _DAT_102b8c20;
    uVar20 = _UNK_102b8c24;
    uVar22 = _UNK_102b8c28;
    uVar23 = _UNK_102b8c2c;
    if (*(int *)(iVar3 + 0x208c) == 3) {
LAB_10127cf5:
      FUN_101137c8(&local_24,uVar8,uVar20,uVar22,uVar23);
      fVar17 = (float)local_24;
      fVar18 = (float)((ulonglong)local_24 >> 0x20);
    }
    else {
      fVar17 = 0.0;
      fVar18 = 0.0;
      if ((*(int *)(iVar3 + 0x208c) == 2) &&
         (uVar8 = _DAT_102b8d40, uVar20 = _UNK_102b8d44, uVar22 = _UNK_102b8d48,
         uVar23 = _UNK_102b8d4c, *(char *)(iVar3 + 0x105) == '\0')) goto LAB_10127cf5;
    }
    iVar10 = DAT_1039d74c;
    if ((((fVar17 != 0.0) || (NAN(fVar17))) || (fVar18 != 0.0)) || (NAN(fVar18))) {
      fVar24 = *(float *)(iVar3 + 0x48) * _DAT_102b90f0 * *(float *)(DAT_1039d74c + 0x1204);
      *(undefined1 *)(iVar3 + 0x2041) = 1;
      fVar17 = (float)*(undefined8 *)(iVar3 + 0x223c) + fVar17 * fVar24;
      fVar18 = (float)((ulonglong)*(undefined8 *)(iVar3 + 0x223c) >> 0x20) + fVar18 * fVar24;
      *(ulonglong *)(iVar3 + 0x223c) = CONCAT44(fVar18,fVar17);
      iVar19 = (int)fVar17;
      iVar21 = (int)fVar18;
      auVar2._4_4_ = -(uint)(iVar19 == 0);
      auVar2._0_4_ = -(uint)(iVar19 == 0);
      auVar2._8_4_ = -(uint)(iVar21 == 0);
      auVar2._12_4_ = -(uint)(iVar21 == 0);
      iVar10 = movmskpd(iVar10,auVar2);
      if (iVar10 != 3) {
        local_34 = (float)iVar19;
        fStack_30 = (float)iVar21;
        fStack_2c = (float)(int)(fVar24 * 0.0 + 0.0);
        fStack_28 = (float)(int)(fVar24 * 0.0 + 0.0);
        uVar1 = *(undefined8 *)(*(int *)(iVar14 + 0x3b0) + 0x50);
        local_24 = CONCAT44((float)((ulonglong)uVar1 >> 0x20) + fStack_30,(float)uVar1 + local_34);
        FUN_10103c64(*(int *)(iVar14 + 0x3b0),&local_24,1);
        *(ulonglong *)(iVar3 + 0x223c) =
             CONCAT44((float)((ulonglong)*(undefined8 *)(iVar3 + 0x223c) >> 0x20) - fStack_30,
                      (float)*(undefined8 *)(iVar3 + 0x223c) - local_34);
      }
    }
  }
  if (iVar7 != 0) {
    FUN_1012898f();
  }
  if (((uVar11 & 1) == 0) || (*(int *)(iVar3 + 0x2048) == 0)) {
LAB_10127e3d:
    if (DAT_10388d00 == (local_1c[2] ^ (uint)&local_44)) {
      return;
    }
  }
  else {
    FUN_101028d8();
    iVar7 = *(int *)(iVar3 + 0x2048);
    iVar14 = iVar7;
    do {
      iVar10 = iVar14;
      if ((*(int *)(iVar10 + 0x3a0) == 0) || ((*(byte *)(iVar10 + 0x1a0) & 2) != 0)) break;
      iVar14 = *(int *)(iVar10 + 0x3a0);
    } while ((*(uint *)(iVar10 + 0xc) & 0x15000000) == 0x1000000);
    if (iVar10 != iVar7) {
      FUN_101034e2(iVar10,0);
      *(int *)(iVar10 + 0x3c0) = iVar7;
      iVar7 = *(int *)(iVar3 + 0x2048);
    }
    if ((*(byte *)(iVar7 + 0x1a0) & 2) == 0) {
      if (*(int *)(iVar3 + 0x2050) == 0) goto LAB_10127e3d;
    }
    else if ((*(int *)(iVar3 + 0x2050) == 0) && (*(int *)(iVar10 + 0x434) == 0)) {
      *(undefined4 *)(iVar7 + 0x3c8) = 0;
    }
    FUN_10128a26();
    if (DAT_10388d00 == (local_1c[2] ^ (uint)&local_44)) {
      FUN_101170bb();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

