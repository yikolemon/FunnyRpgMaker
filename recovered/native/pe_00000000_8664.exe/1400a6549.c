/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400a6549 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400a6549(void)

{
  uint uVar1;
  undefined1 auVar2 [16];
  longlong lVar3;
  char cVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  undefined4 uVar9;
  int iVar10;
  longlong lVar11;
  uint uVar12;
  uint uVar13;
  longlong lVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  longlong lVar18;
  uint uVar19;
  bool bVar20;
  float fVar21;
  int iVar22;
  float fVar23;
  int iVar24;
  float fVar25;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined8 local_70;
  undefined8 local_68;
  ulonglong local_60;
  
  lVar3 = DAT_140f2a910;
  local_60 = DAT_140f17b40 ^ (ulonglong)auStack_98;
  lVar11 = FUN_140081fc1();
  if (lVar11 != 0) {
    *(undefined8 *)(lVar3 + 0x23e8) = 0;
  }
  if ((*(longlong *)(lVar3 + 0x23f0) != 0) && (*(longlong *)(lVar3 + 0x23e8) == 0)) {
    fVar21 = (float)FUN_14007b71f(*(float *)(lVar3 + 0x48) * DAT_1401c86cc +
                                  *(float *)(lVar3 + 0x2404));
    *(float *)(lVar3 + 0x2404) = fVar21;
    if ((fVar21 <= 0.0) && (*(float *)(lVar3 + 0x2424) <= 0.0)) {
      *(undefined8 *)(lVar3 + 0x23f0) = 0;
    }
  }
  bVar5 = 0;
  uVar9 = FUN_140077ff5("##NavUpdateWindowing",0,0);
  uVar1 = *(uint *)(lVar3 + 0x30);
  if ((uVar1 & 2) != 0) {
    bVar5 = *(byte *)(lVar3 + 0x34) & 1;
  }
  if (lVar11 == 0) {
    if (*(int *)(lVar3 + 0x23dc) == 0) {
      bVar7 = 0;
    }
    else {
      bVar7 = FUN_14008467f(*(int *)(lVar3 + 0x23dc),0x2001,uVar9);
    }
    if (*(int *)(lVar3 + 0x23e0) == 0) goto LAB_1400a6614;
    bVar8 = FUN_14008467f(*(int *)(lVar3 + 0x23e0),0x2001,uVar9);
  }
  else {
    bVar7 = 0;
LAB_1400a6614:
    bVar8 = 0;
  }
  if ((bVar5 == 0) || (*(longlong *)(lVar3 + 0x23e8) != 0)) {
    bVar5 = 0;
  }
  else {
    bVar5 = FUN_14008467f(0x27a,0x2000,uVar9);
  }
  if (lVar11 == 0) {
    bVar6 = (bVar7 | bVar8) & *(longlong *)(lVar3 + 0x23e8) == 0;
  }
  else {
    bVar6 = 0;
  }
  if (bVar5 != 0) {
    *(undefined1 *)(lVar3 + 0x240c) = 1;
    *(undefined4 *)(lVar3 + 0x2410) = 0x27a;
    *(undefined4 *)(lVar3 + 0x2250) = 3;
    *(undefined4 *)(lVar3 + 0x2408) = 3;
  }
  if ((byte)(lVar11 == 0 & bVar5 | bVar6) == 1) {
    lVar11 = *(longlong *)(lVar3 + 0x2200);
    bVar20 = lVar11 == 0;
    if (((bVar20) || (cVar4 = FUN_140095b18(lVar11), cVar4 == '\0')) &&
       (lVar11 = FUN_1400a7825(*(int *)(lVar3 + 0x15b8) + -1,0x80000001,0xffffffff), lVar11 == 0))
    goto LAB_1400a6773;
    if ((bVar6 != 0) || (*(char *)(lVar3 + 0x23db) == '\x01')) {
      uVar15 = *(undefined8 *)(lVar11 + 0x418);
      *(undefined8 *)(lVar3 + 0x23f0) = uVar15;
      *(undefined8 *)(lVar3 + 0x23e8) = uVar15;
    }
    *(undefined8 *)(lVar3 + 0x2400) = 0;
    *(undefined8 *)(lVar3 + 0x2414) = 0;
    *(undefined8 *)(lVar3 + 0x241c) = 0;
    *(uint *)(lVar3 + 0x2250) = bVar6 ^ 3;
    *(uint *)(lVar3 + 0x2408) = bVar6 ^ 3;
    if ((bVar7 | bVar8) == 1) {
      FUN_140092582((*(uint *)(lVar3 + 0x23e0) | *(uint *)(lVar3 + 0x23dc)) & 0xf000,uVar9,0);
    }
  }
  else {
LAB_1400a6773:
    bVar20 = false;
  }
  if (*(longlong *)(lVar3 + 0x23e8) == 0) {
    if ((*(char *)(lVar3 + 0x240c) == '\x01') && (*(int *)(lVar3 + 0x2408) == 3))
    goto LAB_1400a6840;
LAB_1400a6960:
    bVar5 = false;
    lVar11 = 0;
  }
  else {
    if (*(int *)(lVar3 + 0x2408) != 3) {
LAB_1400a6860:
      if (*(int *)(lVar3 + 0x2408) == 2) {
        uVar13 = *(uint *)(lVar3 + 0x23dc);
        uVar19 = *(uint *)(lVar3 + 0x23e0);
        *(float *)(lVar3 + 0x2400) = *(float *)(lVar3 + 0x48) + *(float *)(lVar3 + 0x2400);
        uVar9 = FUN_14007b71f(*(undefined4 *)(lVar3 + 0x2404));
        *(undefined4 *)(lVar3 + 0x2404) = uVar9;
        if (bVar20 || (bVar8 | bVar7) != 1) {
          if (uVar19 == 0) {
            uVar19 = 0xf000;
          }
          uVar12 = uVar13 & 0xf000;
          if (uVar13 == 0) {
            uVar12 = 0xf000;
          }
          if ((uVar12 & uVar19 & ~*(uint *)(lVar3 + 0x13c)) != 0) {
            lVar11 = *(longlong *)(lVar3 + 0x23e8);
            bVar5 = false;
            goto LAB_1400a6984;
          }
        }
        else {
          FUN_1400a7888(-(uint)bVar7 | 1);
        }
      }
      goto LAB_1400a6960;
    }
    *(float *)(lVar3 + 0x2400) = *(float *)(lVar3 + 0x48) + *(float *)(lVar3 + 0x2400);
    uVar9 = FUN_14007b71f(*(undefined4 *)(lVar3 + 0x2404));
    *(undefined4 *)(lVar3 + 0x2404) = uVar9;
    bVar5 = FUN_140091e97(0x282,1);
    bVar6 = FUN_140091e97(0x283,1);
    if ((uint)bVar5 - (uint)bVar6 != 0 && !bVar20) {
      FUN_1400a7888((uint)bVar5 - (uint)bVar6);
      *(undefined4 *)(lVar3 + 0x2404) = 0x3f800000;
    }
LAB_1400a6840:
    cVar4 = FUN_140091d93(0x27a);
    if (cVar4 != '\0') {
      if (*(longlong *)(lVar3 + 0x23e8) == 0) goto LAB_1400a6960;
      goto LAB_1400a6860;
    }
    if ((DAT_1401c86c8 < *(float *)(lVar3 + 0x2404) || DAT_1401c86c8 == *(float *)(lVar3 + 0x2404))
       || (*(char *)(lVar3 + 0x240c) == '\0')) {
      lVar11 = *(longlong *)(lVar3 + 0x23e8);
      bVar5 = false;
    }
    else {
      bVar5 = *(longlong *)(lVar3 + 0x2200) != 0;
      lVar11 = 0;
    }
    *(undefined8 *)(lVar3 + 0x23e8) = 0;
    *(undefined1 *)(lVar3 + 0x240c) = 0;
  }
LAB_1400a6984:
  local_68 = 0x21500000211;
  bVar20 = true;
  if ((*(longlong *)(lVar3 + 0x2200) != 0) &&
     ((*(byte *)(*(longlong *)(lVar3 + 0x2200) + 0x16) & 1) == 0)) {
    lVar18 = 0;
    do {
      if ((uVar1 & 1) != 0) {
        uVar9 = *(undefined4 *)((longlong)&local_68 + lVar18);
        cVar4 = FUN_140091ea2(uVar9,0,0xffffffff);
        if (cVar4 != '\0') {
          *(undefined1 *)(lVar3 + 0x240c) = 1;
          *(undefined4 *)(lVar3 + 0x2410) = uVar9;
          *(undefined4 *)(lVar3 + 0x2250) = 2;
          *(undefined4 *)(lVar3 + 0x2408) = 2;
          bVar20 = false;
          break;
        }
      }
      lVar18 = lVar18 + 4;
    } while (lVar18 != 8);
  }
  if ((*(char *)(lVar3 + 0x240c) == '\x01') && (*(int *)(lVar3 + 0x2408) == 2)) {
    if ((*(int *)(lVar3 + 0xc18) < 1) &&
       (((*(char *)(lVar3 + 0x138) == '\0' && (*(char *)(lVar3 + 0x139) == '\0')) &&
        (*(char *)(lVar3 + 0x13b) == '\0')))) {
      if (bVar20) {
        if ((*(double *)(lVar3 + 0x16d8) == *(double *)(lVar3 + 0x18)) &&
           (!NAN(*(double *)(lVar3 + 0x16d8)) && !NAN(*(double *)(lVar3 + 0x18))))
        goto LAB_1400a6ad7;
      }
      cVar4 = FUN_140091dcf(*(undefined4 *)(lVar3 + 0x2410),0xffffffff);
      if ((cVar4 == '\0') || (cVar4 = FUN_140091dcf(0x4000,0xffffffff), cVar4 == '\0'))
      goto LAB_1400a6ad7;
      uVar9 = *(undefined4 *)(lVar3 + 0x2410);
      cVar4 = FUN_140092021(uVar9);
      if ((cVar4 != '\0') &&
         ((*(int *)(lVar3 + 0x167c) == 0 || (*(char *)(lVar3 + 0x1689) == '\x01')))) {
        bVar7 = FUN_140081bec(lVar3 + 0x118);
        bVar8 = FUN_140081bec(lVar3 + 0xaf4);
        bVar5 = bVar8 ^ bVar7 ^ 1 | bVar5;
      }
    }
    else {
LAB_1400a6ad7:
      *(undefined1 *)(lVar3 + 0x240c) = 0;
      uVar9 = *(undefined4 *)(lVar3 + 0x2410);
    }
    cVar4 = FUN_140091d93(uVar9);
    if (cVar4 == '\0') {
      *(undefined1 *)(lVar3 + 0x240c) = 0;
    }
  }
  lVar18 = *(longlong *)(lVar3 + 0x23e8);
  if ((lVar18 != 0) && ((*(byte *)(lVar18 + 0x14) & 4) == 0)) {
    if (*(int *)(lVar3 + 0x2250) == 3) {
      local_78 = 0x28b;
      uVar15 = 0x288;
      uVar16 = 0x289;
      uVar17 = 0x28a;
LAB_1400a6b75:
      FUN_1400918c3(&local_70,uVar15,uVar16,uVar17);
      fVar21 = (float)local_70;
      fVar23 = (float)((ulonglong)local_70 >> 0x20);
    }
    else {
      fVar21 = 0.0;
      fVar23 = 0.0;
      if ((*(int *)(lVar3 + 0x2250) == 2) && (*(char *)(lVar3 + 0x139) == '\0')) {
        local_78 = 0x204;
        uVar15 = 0x201;
        uVar16 = 0x202;
        uVar17 = 0x203;
        goto LAB_1400a6b75;
      }
    }
    lVar14 = DAT_140f2a910;
    if ((((fVar21 != 0.0) || (NAN(fVar21))) || (fVar23 != 0.0)) || (NAN(fVar23))) {
      fVar25 = *(float *)(lVar3 + 0x48) * _DAT_140211860 * *(float *)(DAT_140f2a910 + 0x12ec);
      *(undefined1 *)(lVar3 + 0x21f5) = 1;
      fVar21 = (float)*(undefined8 *)(lVar3 + 0x2414) + fVar21 * fVar25;
      fVar23 = (float)((ulonglong)*(undefined8 *)(lVar3 + 0x2414) >> 0x20) + fVar23 * fVar25;
      *(ulonglong *)(lVar3 + 0x2414) = CONCAT44(fVar23,fVar21);
      iVar22 = (int)fVar21;
      iVar24 = (int)fVar23;
      auVar2._4_4_ = -(uint)(iVar22 == 0);
      auVar2._0_4_ = -(uint)(iVar22 == 0);
      auVar2._8_4_ = -(uint)(iVar24 == 0);
      auVar2._12_4_ = -(uint)(iVar24 == 0);
      iVar10 = movmskpd((int)lVar14,auVar2);
      if (iVar10 != 3) {
        uVar15 = *(undefined8 *)(*(longlong *)(lVar18 + 0x428) + 0x60);
        local_70 = CONCAT44((float)((ulonglong)uVar15 >> 0x20) + (float)iVar24,
                            (float)uVar15 + (float)iVar22);
        FUN_140081c1f(*(longlong *)(lVar18 + 0x428),&local_70,1);
        *(ulonglong *)(lVar3 + 0x2414) =
             CONCAT44((float)((ulonglong)*(undefined8 *)(lVar3 + 0x2414) >> 0x20) - (float)iVar24,
                      (float)*(undefined8 *)(lVar3 + 0x2414) - (float)iVar22);
      }
    }
  }
  if (lVar11 != 0) {
    FUN_1400a7905(lVar11);
  }
  if (((bVar5 & 1) == 0) || (*(longlong *)(lVar3 + 0x2200) == 0)) {
LAB_1400a6cb5:
    if (DAT_140f17b40 == (local_60 ^ (ulonglong)auStack_98)) {
      return;
    }
  }
  else {
    FUN_14008076e();
    lVar11 = *(longlong *)(lVar3 + 0x2200);
    lVar18 = lVar11;
    do {
      lVar14 = lVar18;
      if ((*(longlong *)(lVar14 + 0x408) == 0) || ((*(byte *)(lVar14 + 0x1b4) & 2) != 0)) break;
      lVar18 = *(longlong *)(lVar14 + 0x408);
    } while ((*(uint *)(lVar14 + 0x14) & 0x15000000) == 0x1000000);
    if (lVar14 != lVar11) {
      FUN_140081404(lVar14,0);
      *(longlong *)(lVar14 + 0x448) = lVar11;
      lVar11 = *(longlong *)(lVar3 + 0x2200);
    }
    uVar1 = *(uint *)(lVar3 + 0x220c);
    if ((*(byte *)(lVar11 + 0x1b4) & 2) == 0) {
      uVar13 = 0;
      if (uVar1 == 0) goto LAB_1400a6cb5;
    }
    else {
      uVar13 = uVar1 ^ 1;
      if ((uVar1 == 0) && (*(longlong *)(lVar14 + 0x4c8) == 0)) {
        *(undefined4 *)(lVar11 + 0x454) = 0;
        uVar13 = 1;
      }
    }
    FUN_1400a79ac(uVar13);
    if (DAT_140f17b40 == (local_60 ^ (ulonglong)auStack_98)) {
      FUN_140095213();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_60 ^ (ulonglong)auStack_98);
}

