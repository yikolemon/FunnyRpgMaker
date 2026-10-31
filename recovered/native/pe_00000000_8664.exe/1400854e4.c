/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400854e4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400854e4(void)

{
  ulonglong uVar1;
  undefined4 uVar2;
  bool bVar3;
  bool bVar4;
  longlong lVar5;
  char cVar6;
  longlong lVar7;
  float fVar8;
  undefined1 auVar9 [16];
  float fVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  float fVar14;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  ulonglong local_50;
  
  lVar5 = DAT_140f2a910;
  local_50 = DAT_140f17b40 ^ (ulonglong)auStack_78;
  lVar7 = *(longlong *)(DAT_140f2a910 + 0x1630);
  if (lVar7 == 0) {
LAB_1400855ac:
    lVar7 = *(longlong *)(lVar5 + 0x1610);
    bVar4 = true;
    if (lVar7 == 0) goto LAB_1400855c4;
  }
  else {
    fVar14 = *(float *)(DAT_140f2a910 + 0x1648) - *(float *)(DAT_140f2a910 + 0x48);
    *(float *)(DAT_140f2a910 + 0x1648) = fVar14;
    cVar6 = FUN_140081bec(0);
    if ((cVar6 == '\0') ||
       (fVar8 = *(float *)(lVar5 + 0x11c) - *(float *)(lVar5 + 0x163c),
       fVar10 = *(float *)(lVar5 + 0x118) - *(float *)(lVar5 + 0x1638),
       fVar10 * fVar10 + fVar8 * fVar8 <= *(float *)(lVar5 + 0xa4) * *(float *)(lVar5 + 0xa4))) {
      if (fVar14 <= 0.0) goto LAB_140085593;
      bVar4 = false;
    }
    else {
      *(undefined4 *)(lVar5 + 0x1648) = 0;
LAB_140085593:
      bVar4 = false;
      FUN_1400a5db2(0,0);
      lVar7 = *(longlong *)(lVar5 + 0x1630);
      if (lVar7 == 0) goto LAB_1400855ac;
    }
  }
  if (*(char *)(lVar7 + 0x10c) != '\0') goto LAB_1400855c4;
  uVar2 = *(undefined4 *)(lVar7 + 0x10);
  cVar6 = FUN_140091dcf(0x295,uVar2);
  fVar8 = 0.0;
  fVar14 = 0.0;
  if (cVar6 != '\0') {
    fVar14 = *(float *)(lVar5 + 300);
  }
  cVar6 = FUN_140091dcf(0x296,uVar2);
  if (cVar6 != '\0') {
    fVar8 = *(float *)(lVar5 + 0x128);
  }
  if (!bVar4) {
    FUN_140092507(0x295,uVar2,0);
    FUN_140092507(0x296,uVar2,0);
  }
  if ((fVar8 != 0.0) || (NAN(fVar8))) {
    if (*(char *)(lVar5 + 0x138) != '\0') {
      if (*(char *)(lVar5 + 0x78) == '\x01') {
        FUN_1400a5db2(lVar7,fVar8);
        fVar8 = (float)FUN_140090d06(*(float *)(lVar5 + 0x128) * DAT_140210018 +
                                     *(float *)(lVar7 + 0x310),DAT_1401c86a0);
        fVar14 = *(float *)(lVar7 + 0x310);
        *(float *)(lVar7 + 0x310) = fVar8;
        if (lVar7 == *(longlong *)(lVar7 + 0x418)) {
          fVar8 = fVar8 / fVar14;
          uVar1 = *(ulonglong *)(lVar7 + 0x68);
          fVar14 = (float)*(undefined8 *)(lVar7 + 0x60);
          fVar10 = (float)((ulonglong)*(undefined8 *)(lVar7 + 0x60) >> 0x20);
          auVar13._0_4_ =
               (DAT_1401c86c8 - fVar8) * (float)uVar1 *
               ((float)*(undefined8 *)(lVar5 + 0x118) - fVar14);
          auVar13._4_4_ =
               (DAT_1401c86c8 - fVar8) * (float)(uVar1 >> 0x20) *
               ((float)((ulonglong)*(undefined8 *)(lVar5 + 0x118) >> 0x20) - fVar10);
          auVar13._8_8_ = 0;
          auVar9._8_8_ = 0;
          auVar9._0_8_ = uVar1;
          auVar9 = divps(auVar13,auVar9);
          local_58 = CONCAT44(auVar9._4_4_ + fVar10,auVar9._0_4_ + fVar14);
          FUN_140081c1f(lVar7,&local_58,0);
          *(float *)(lVar7 + 0x68) = (float)(int)(fVar8 * *(float *)(lVar7 + 0x68));
          *(float *)(lVar7 + 0x6c) = (float)(int)(fVar8 * *(float *)(lVar7 + 0x6c));
          *(float *)(lVar7 + 0x70) = (float)(int)(fVar8 * *(float *)(lVar7 + 0x70));
          *(float *)(lVar7 + 0x74) = (float)(int)(fVar8 * *(float *)(lVar7 + 0x74));
          FUN_14008c560(lVar7);
        }
      }
      goto LAB_1400855c4;
    }
  }
  else if (*(char *)(lVar5 + 0x138) != '\0') goto LAB_1400855c4;
  uVar1 = *(ulonglong *)(lVar5 + 0x1654);
  auVar11._8_8_ = 0;
  auVar11._0_8_ = uVar1;
  auVar9 = divps(auVar11,_caseD_1);
  if (*(char *)(lVar5 + 0xbaa) != '\0') {
    fVar14 = fVar8;
    fVar8 = 0.0;
  }
  auVar12._0_4_ = _DAT_1401ced40 & (uint)fVar14;
  auVar12._4_4_ = _UNK_1401ced44 & (uint)fVar8;
  auVar12._8_8_ = 0;
  auVar13 = divps(auVar12,_caseD_1);
  *(ulonglong *)(lVar5 + 0x1654) =
       CONCAT44(auVar13._4_4_ + ((float)(uVar1 >> 0x20) - auVar9._4_4_),
                auVar13._0_4_ + ((float)uVar1 - auVar9._0_4_));
  fVar14 = fVar14 + (float)*(undefined8 *)(lVar5 + 0x164c);
  fVar8 = fVar8 + (float)((ulonglong)*(undefined8 *)(lVar5 + 0x164c) >> 0x20);
  local_58 = CONCAT44(fVar8,fVar14);
  *(undefined8 *)(lVar5 + 0x164c) = 0;
  if (((((fVar14 == 0.0) && (!NAN(fVar14))) && (fVar8 == 0.0)) && (!NAN(fVar8))) ||
     (((lVar7 = *(longlong *)(lVar5 + 0x1630), lVar7 == 0 &&
       (lVar7 = FUN_1400a5e60(&local_58), lVar7 == 0)) || ((*(ushort *)(lVar7 + 0x14) & 0x210) != 0)
      ))) goto LAB_1400855c4;
  if ((fVar14 != 0.0) || (NAN(fVar14))) {
    bVar4 = *(float *)(lVar7 + 0xdc) != 0.0;
  }
  else {
    bVar4 = false;
  }
  if ((fVar8 != 0.0) || (NAN(fVar8))) {
    bVar3 = *(float *)(lVar7 + 0xe0) != 0.0;
    if (!(bool)(bVar4 & bVar3)) goto LAB_14008584f;
    if (*(float *)(lVar5 + 0x1658) <= *(float *)(lVar5 + 0x1654) &&
        *(float *)(lVar5 + 0x1654) != *(float *)(lVar5 + 0x1658)) {
      bVar3 = false;
      goto LAB_140085853;
    }
  }
  else {
    bVar3 = false;
LAB_14008584f:
    if (bVar4) {
LAB_140085853:
      FUN_1400a5db2(lVar7,fVar14);
      fVar10 = (float)FUN_14004863e(*(float *)(lVar7 + 0x318) + *(float *)(lVar7 + 0x318),
                                    (*(float *)(lVar7 + 0x280) - *(float *)(lVar7 + 0x278)) *
                                    _DAT_1402114e0);
      FUN_140093a13(lVar7,*(float *)(lVar7 + 0xd4) - (float)(int)fVar10 * fVar14);
      *(undefined4 *)(lVar5 + 0x1644) = *(undefined4 *)(lVar5 + 4);
    }
    if (!bVar3) goto LAB_1400855c4;
  }
  FUN_1400a5db2(lVar7,fVar8);
  fVar14 = (float)FUN_14004863e(*(float *)(lVar7 + 0x318) * DAT_1401c86c0,
                                (*(float *)(lVar7 + 0x284) - *(float *)(lVar7 + 0x27c)) *
                                _DAT_1402114e0);
  FUN_140093a2a(lVar7,*(float *)(lVar7 + 0xd8) - (float)(int)fVar14 * fVar8);
  *(undefined4 *)(lVar5 + 0x1644) = *(undefined4 *)(lVar5 + 4);
LAB_1400855c4:
  if (DAT_140f17b40 != (local_50 ^ (ulonglong)auStack_78)) {
                    /* WARNING: Subroutine does not return */
    FUN_140188a00(local_50 ^ (ulonglong)auStack_78);
  }
  return;
}

