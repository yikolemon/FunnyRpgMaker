/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400ca2b5 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_1400ca2b5(undefined8 param_1,char *param_2,char param_3)

{
  ushort uVar1;
  int iVar2;
  longlong lVar3;
  bool bVar4;
  longlong lVar5;
  char cVar6;
  byte bVar7;
  byte bVar8;
  char cVar9;
  int iVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  longlong lVar13;
  ulonglong uVar14;
  int *piVar15;
  undefined8 uVar16;
  byte bVar17;
  int iVar18;
  int *piVar19;
  float *pfVar20;
  int iVar21;
  float *pfVar22;
  uint uVar23;
  byte bVar24;
  bool bVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  undefined1 auStack_168 [32];
  float local_148;
  byte local_13a;
  char local_139;
  undefined4 local_138;
  uint local_134;
  float local_130 [20];
  float local_e0;
  float local_dc;
  undefined8 local_d8;
  float local_d0;
  float local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  ulonglong local_c0;
  
  lVar5 = DAT_140f2a910;
  local_c0 = DAT_140f17b40 ^ (ulonglong)auStack_168;
  *(undefined1 *)(*(longlong *)(DAT_140f2a910 + 0x1608) + 0x10b) = 1;
  lVar3 = *(longlong *)(lVar5 + 0x1608);
  if (*(char *)(lVar3 + 0x10e) == '\0') {
    iVar10 = FUN_140080066(lVar3,param_1,0);
    uVar11 = FUN_140081f3e(iVar10,0);
    uVar23 = (uint)((*(byte *)(lVar3 + 0x17) & 0x10) >> 4) << 0x18 | 0x10020145;
    piVar15 = *(int **)(lVar5 + 0x2888);
    iVar2 = *(int *)(lVar5 + 0x2880);
    lVar13 = (longlong)iVar2;
    piVar19 = piVar15;
LAB_1400ca390:
    bVar7 = (byte)uVar11;
    if (piVar19 < piVar15 + lVar13) goto code_r0x0001400ca399;
    local_139 = param_3;
    local_134 = uVar23;
    if (iVar2 == *(int *)(lVar5 + 0x2884)) {
      if (iVar2 == 0) {
        iVar18 = 8;
      }
      else {
        iVar18 = iVar2 / 2 + iVar2;
      }
      iVar21 = iVar2 + 1;
      if (iVar2 + 1 < iVar18) {
        iVar21 = iVar18;
      }
      piVar15 = (int *)FUN_140077ab4((longlong)iVar21 << 2);
      if (*(longlong *)(lVar5 + 0x2888) != 0) {
        FUN_1401c5180(piVar15,*(longlong *)(lVar5 + 0x2888),(longlong)*(int *)(lVar5 + 0x2880) << 2)
        ;
        FUN_140077b90(*(undefined8 *)(lVar5 + 0x2888));
      }
      *(int **)(lVar5 + 0x2888) = piVar15;
      *(int *)(lVar5 + 0x2884) = iVar21;
      lVar13 = (longlong)*(int *)(lVar5 + 0x2880);
    }
    cVar9 = local_139;
    piVar15[lVar13] = iVar10;
    *(int *)(lVar5 + 0x2880) = *(int *)(lVar5 + 0x2880) + 1;
    uVar16 = FUN_14007b050(param_1,0);
    local_148 = -1.0;
    FUN_14007b686(&local_c8,param_1,uVar16,0);
    cVar6 = FUN_1400cad70();
    local_138 = CONCAT31(local_138._1_3_,cVar6);
    if (cVar6 != '\0') {
      FUN_14008f7a2(0x2000,1);
    }
    fVar31 = *(float *)(lVar3 + 0x158);
    fVar30 = *(float *)(lVar3 + 0x15c);
    FUN_1400912b0(param_1);
    if (cVar9 == '\0') {
      FUN_14008f898(1);
    }
    fVar29 = DAT_1401c86a0;
    if (*(int *)(lVar3 + 0x214) == 0) {
      *(float *)(lVar3 + 0x158) =
           (float)(int)(*(float *)(lVar5 + 0xe04) * DAT_1401c86a0) + *(float *)(lVar3 + 0x158);
      FUN_14007ac4d(0xe,*(float *)(lVar5 + 0xe04) + *(float *)(lVar5 + 0xe04));
      uVar1 = *(ushort *)(lVar3 + 0x1d0);
      fVar30 = fVar30 + *(float *)(lVar3 + 400);
      fVar28 = *(float *)(lVar3 + 0x158);
      local_13a = FUN_1400b2126(&DAT_140edcdbf,uVar11,0x400001,&local_c8);
      FUN_140096567(&DAT_140ecc3c7,&DAT_140ecc3ac);
      FUN_14007b084(CONCAT44(fVar30,(float)uVar1 + fVar28),param_1,uVar16,0);
      FUN_14007af87(1);
      *(float *)(lVar3 + 0x158) =
           (float)(int)(*(float *)(lVar5 + 0xe04) * DAT_1402115a8) + *(float *)(lVar3 + 0x158);
      local_cc = (fVar30 - *(float *)(lVar5 + 0xdf8)) + *(float *)(lVar3 + 0xa4);
      fVar31 = (fVar31 + DAT_1401c86a4) - (float)(int)(fVar29 * *(float *)(lVar5 + 0xe04));
    }
    else {
      fVar29 = 0.0;
      if ((param_2 != (char *)0x0) && (*param_2 != '\0')) {
        local_148 = -1.0;
        FUN_14007b686(local_130,param_2,0,0);
        fVar29 = local_130[0];
      }
      local_148 = (float)(int)(*(float *)(lVar5 + 0x1320) * DAT_140211670);
      fVar26 = (float)FUN_1400c9b70(lVar3 + 0x1c4,fVar29,local_c8,0);
      FUN_14008a381(local_130);
      fVar27 = (float)FUN_14007b71f(0,local_130[0] - fVar26);
      fVar30 = fVar30 + *(float *)(lVar3 + 400);
      fVar28 = *(float *)(lVar3 + 0x158);
      local_130[1] = (float)local_c4;
      local_130[0] = fVar26;
      local_13a = FUN_1400b2126(&DAT_140edcdbf,uVar11,0x1400001,local_130);
      FUN_140096567(&DAT_140edcdbf,&DAT_140ecd74d);
      FUN_14007b084(CONCAT44(fVar30,(float)*(ushort *)(lVar3 + 0x1d0) + fVar28),param_1,uVar16,0);
      if (0.0 < fVar29) {
        FUN_14007b084(CONCAT44(fVar30,(float)*(ushort *)(lVar3 + 0x1ce) + fVar28),param_2,0,1);
      }
      uVar12 = FUN_14007a557(0,DAT_1401c86c8);
      local_148 = 1.0;
      FUN_1400e6d7e(*(undefined8 *)(lVar3 + 800),
                    CONCAT44(fVar30,*(float *)(lVar5 + 0x1320) * DAT_1402115c8 +
                                    fVar27 + fVar28 + (float)*(ushort *)(lVar3 + 0x1d4)),uVar12,1);
      local_cc = fVar30 - *(float *)(lVar5 + 0xdc0);
      cVar9 = local_139;
    }
    bVar17 = (byte)local_138;
    local_d0 = fVar31;
    if (cVar9 == '\0') {
      FUN_14008f98e();
    }
    if (((*(int *)(lVar5 + 0x167c) == iVar10) && (*(int *)(lVar5 + 0x1664) != iVar10)) &&
       (*(int *)(lVar5 + 0x169c) == 1)) {
      cVar6 = FUN_1400816f9(0,DAT_1401c86a4);
      if (cVar6 != '\0') {
        FUN_14008076e();
        FUN_140092507(0x290,0xffffffff,0);
      }
    }
    bVar24 = 0;
    if ((cVar9 != '\0') && (bVar24 = 0, *(int *)(lVar5 + 0x1664) == iVar10)) {
      bVar24 = *(byte *)(lVar5 + 0x21f5) ^ 1;
    }
    if (bVar17 != 0) {
      FUN_14008f860();
    }
    if (*(int *)(lVar3 + 0x214) == 1) {
      if (((*(int *)(lVar5 + 0x2158) < *(int *)(lVar5 + 0x2148)) &&
          (*(longlong *)(lVar5 + 0x2150) != 0)) &&
         (lVar13 = *(longlong *)
                    (*(longlong *)(lVar5 + 0x2150) + 8 + (longlong)*(int *)(lVar5 + 0x2158) * 0x38),
         lVar13 != 0)) {
        bVar7 = 0;
        if ((*(longlong *)(lVar13 + 0x408) == lVar3) && (*(longlong *)(lVar5 + 0x1610) == lVar3)) {
          fVar31 = *(float *)(lVar5 + 0x1320);
          local_e0 = *(float *)(lVar13 + 0x60);
          local_d8._4_4_ = *(float *)(lVar13 + 100);
          bVar25 = local_e0 != *(float *)(lVar3 + 0x60);
          bVar4 = *(float *)(lVar3 + 0x60) <= local_e0;
          fVar30 = *(float *)(&DAT_140211850 + (ulonglong)(bVar4 && bVar25) * 4);
          local_dc = *(float *)(lVar13 + 0x6c) + local_d8._4_4_;
          local_130[0] = (float)*(undefined8 *)(lVar5 + 0x118) -
                         (float)*(undefined8 *)(lVar5 + 0x104);
          local_130[1] = (float)((ulonglong)*(undefined8 *)(lVar5 + 0x118) >> 0x20) -
                         (float)((ulonglong)*(undefined8 *)(lVar5 + 0x104) >> 0x20);
          if (!bVar4 || !bVar25) {
            local_e0 = *(float *)(lVar13 + 0x68) + local_e0;
          }
          local_138 = uVar11;
          local_d8._0_4_ = local_e0;
          fVar28 = (float)FUN_140090d06((float)((uint)(local_130[0] - local_e0) & _DAT_1401ced40) *
                                        DAT_1402115c8,DAT_1401c86a0 * fVar31,DAT_1402114e4 * fVar31)
          ;
          fVar29 = local_130[1];
          local_130[0] = DAT_1402115a8 * fVar30 + local_130[0];
          fVar30 = fVar30 * fVar31;
          local_e0 = fVar30 + local_e0;
          local_d8 = CONCAT44(local_d8._4_4_,(float)local_d8 + fVar30);
          fVar30 = (float)FUN_14007b71f((local_d8._4_4_ - fVar28) - local_130[1],
                                        DAT_140211ec8 * fVar31);
          local_d8 = CONCAT44(fVar30 + fVar29,(float)local_d8);
          fVar30 = local_130[1];
          local_dc = (float)FUN_14004863e((fVar28 + local_dc) - local_130[1],fVar31 * DAT_1402116fc)
          ;
          local_dc = local_dc + fVar30;
          bVar7 = FUN_140077787(local_130,&local_d8,&local_e0,lVar5 + 0x118);
          uVar11 = local_138;
        }
      }
      else {
        bVar7 = 0;
      }
      bVar17 = (byte)uVar11 ^ 1;
      if (((((bVar17 | bVar24) & 1) == 0) && (*(longlong *)(lVar5 + 0x1610) == lVar3 && bVar7 == 0))
         && (*(char *)(lVar5 + 0x21f5) == '\0')) {
        bVar25 = *(int *)(lVar5 + 0x167c) == 0;
      }
      else {
        bVar25 = false;
      }
      bVar8 = 1;
      if ((local_13a & bVar17) == 0) {
        bVar17 = (byte)uVar11 | bVar24 ^ 1;
        bVar8 = (bVar7 | bVar17) ^ 1;
        if (((bVar17 | bVar8) & 1) == 0) {
          if ((*(float *)(lVar5 + 0x1670) < DAT_1402115c8) ||
             (*(float *)(lVar5 + 0x269c) < DAT_1402115c8)) {
            bVar8 = 0;
          }
          else {
            bVar8 = 1;
          }
        }
      }
      if ((*(int *)(lVar5 + 0x21f8) == iVar10) && (*(int *)(lVar5 + 0x22b0) == 1)) {
        FUN_140089fc1();
        FUN_140095213();
        bVar8 = 1;
        bVar7 = 1;
      }
      else {
        bVar7 = 0;
      }
LAB_1400cab9d:
      bVar17 = (byte)uVar11;
      if ((local_139 == '\0') || (bVar25)) goto LAB_1400caba9;
    }
    else {
      if ((bVar17 & bVar7 & local_13a) == 0) {
        bVar8 = 1;
        if (local_13a == 0) {
          if ((byte)(bVar7 | bVar17 & bVar24 ^ 1) != 1) {
            bVar7 = 0;
            bVar25 = false;
            uVar11 = 0;
            goto LAB_1400cab9d;
          }
          if ((*(int *)(lVar5 + 0x21f8) == iVar10) && (*(int *)(lVar5 + 0x22b0) == 3)) {
            FUN_140089fc1();
          }
          else {
            bVar8 = 0;
          }
        }
        bVar7 = 0;
        bVar25 = false;
        goto LAB_1400cab9d;
      }
      bVar17 = 0;
      bVar7 = 0;
      bVar8 = 0;
LAB_1400caba9:
      cVar9 = FUN_140081f3e(iVar10,0);
      if (cVar9 != '\0') {
        FUN_140094394(*(undefined4 *)(lVar5 + 0x2158),1);
      }
    }
    FUN_140091667();
    if (((bVar8 & 1) != 0) && (*(int *)(lVar5 + 0x167c) == iVar10)) {
      *(undefined1 *)(lVar5 + 0x168a) = 1;
    }
    if ((((~bVar8 | bVar17) & 1) == 0) && (*(int *)(lVar5 + 0x2158) < *(int *)(lVar5 + 0x2148))) {
      FUN_140093f4a(param_1,0);
      goto LAB_1400cace8;
    }
    if ((bVar8 & 1) == 0) {
      if (bVar17 == 0) goto LAB_1400cace8;
    }
    else {
      FUN_140093f4a(param_1,0x20);
    }
    pfVar20 = (float *)(lVar5 + 0x1fe0);
    pfVar22 = local_130;
    for (lVar13 = 0x14; lVar13 != 0; lVar13 = lVar13 + -1) {
      *pfVar22 = *pfVar20;
      pfVar20 = pfVar20 + 1;
      pfVar22 = pfVar22 + 1;
    }
    local_d8 = 0;
    FUN_14008fda3(&local_d0,1);
    FUN_14007ab2c(7,*(undefined4 *)(lVar5 + 0xdec));
    uVar23 = FUN_140094735(iVar10,param_1,local_134);
    uVar14 = (ulonglong)uVar23;
    FUN_14007af87(1);
    if ((char)uVar23 != '\0') {
      if (((bVar8 & bVar7) == 1) && (*(char *)(lVar5 + 0x2262) == '\0')) {
        FUN_140081404(*(undefined8 *)(lVar5 + 0x1608),2);
        FUN_14008a523(*(undefined8 *)(lVar5 + 0x1608),0);
      }
      pfVar20 = local_130;
      pfVar22 = (float *)(lVar5 + 0x1fe0);
      for (lVar13 = 0x14; lVar13 != 0; lVar13 = lVar13 + -1) {
        *pfVar22 = *pfVar20;
        pfVar20 = pfVar20 + 1;
        pfVar22 = pfVar22 + 1;
      }
      if (*(longlong *)(lVar5 + 0x1610) == lVar3) {
        *(byte *)(lVar5 + 0x1fe8) = *(byte *)(lVar5 + 0x1fe8) | 0x80;
      }
    }
    goto LAB_1400cacf5;
  }
LAB_1400cacf3:
  uVar14 = 0;
LAB_1400cacf5:
  if (DAT_140f17b40 == (local_c0 ^ (ulonglong)auStack_168)) {
    return uVar14;
  }
LAB_1400cad5f:
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_c0 ^ (ulonglong)auStack_168);
code_r0x0001400ca399:
  iVar18 = *piVar19;
  piVar19 = piVar19 + 1;
  if (iVar18 == iVar10) goto code_r0x0001400ca3a1;
  goto LAB_1400ca390;
code_r0x0001400ca3a1:
  if (bVar7 != 0) {
    if (DAT_140f17b40 == (local_c0 ^ (ulonglong)auStack_168)) {
      uVar14 = FUN_140094735(iVar10,param_1);
      return uVar14;
    }
    goto LAB_1400cad5f;
  }
LAB_1400cace8:
  *(undefined4 *)(lVar5 + 0x2030) = 0;
  goto LAB_1400cacf3;
}

