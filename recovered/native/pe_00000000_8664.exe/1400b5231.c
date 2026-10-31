/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400b5231 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_1400b5231(uint param_1,double *param_2,undefined8 param_3,double param_4,double param_5,
             undefined8 param_6,uint param_7)

{
  double dVar1;
  longlong lVar2;
  char cVar3;
  char cVar4;
  undefined4 uVar5;
  int iVar6;
  bool bVar7;
  undefined8 uVar8;
  byte bVar9;
  uint uVar10;
  uint uVar11;
  byte bVar12;
  float extraout_XMM0_Da;
  double extraout_XMM0_Qa;
  double dVar13;
  double dVar14;
  double dVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined4 uVar19;
  
  lVar2 = DAT_140f2a910;
  fVar18 = (float)param_3;
  uVar19 = (undefined4)((ulonglong)param_3 >> 0x20);
  bVar12 = 1;
  if (param_5 <= param_4) {
    if ((param_4 != param_5) || (NAN(param_4) || NAN(param_5))) {
      bVar12 = 0;
    }
    else {
      bVar12 = (byte)(param_7 >> 10) & 1 | param_4 != 0.0;
    }
  }
  bVar9 = bVar12 ^ 1;
  dVar1 = param_5 - param_4;
  if ((fVar18 == 0.0 && bVar9 == 0) && (dVar1 < DAT_140211de8)) {
    uVar19 = 0;
    fVar18 = (float)((double)*(float *)(DAT_140f2a910 + 0x285c) * dVar1);
  }
  uVar10 = (param_7 & 0x100000) >> 0x14;
  uVar11 = param_1 & 0xfffffffe;
  if (((*(int *)(DAT_140f2a910 + 0x169c) == 1) && (cVar3 = FUN_140081bec(0), cVar3 != '\0')) &&
     (cVar3 = FUN_1400920f5(0), cVar3 != '\0')) {
    fVar17 = *(float *)(lVar2 + 0x104 + (ulonglong)uVar10 * 4);
    fVar16 = fVar17;
    if (*(char *)(lVar2 + 0x13a) != '\0') {
      fVar16 = DAT_140211db4 * fVar17;
    }
    if (((param_7 & 0x800) == 0) && (fVar17 = fVar16, *(char *)(lVar2 + 0x139) != '\0')) {
      fVar17 = fVar16 * DAT_1401c86d0;
    }
  }
  else {
    fVar17 = 0.0;
    if ((*(uint *)(lVar2 + 0x169c) & 0xfffffffe) == 2) {
      uVar5 = 0;
      if (uVar11 == 8) {
        uVar5 = FUN_1400bad8a(param_6,3);
      }
      uVar8 = 0x1000;
      if (*(int *)(lVar2 + 0x2250) == 3) {
        uVar8 = 0x282;
      }
      cVar3 = FUN_140091d93(uVar8);
      uVar8 = 0x2000;
      if (*(int *)(lVar2 + 0x2250) == 3) {
        uVar8 = 0x283;
      }
      cVar4 = FUN_140091d93(uVar8);
      fVar16 = DAT_1401c86d0;
      if (cVar4 == '\0') {
        fVar16 = DAT_1401c86c8;
      }
      if (cVar3 != '\0') {
        fVar16 = DAT_140210018;
      }
      if ((param_7 >> 0xb & 1) != 0) {
        fVar16 = DAT_1401c86c8;
      }
      fVar17 = (float)FUN_140095507(uVar10);
      fVar17 = fVar17 * fVar16;
      FUN_1400cffca(uVar5);
      fVar18 = (float)FUN_14007b71f(CONCAT44(uVar19,fVar18));
    }
  }
  fVar17 = fVar17 * fVar18;
  if ((param_7 & 0x100000) != 0) {
    fVar17 = (float)((uint)fVar17 ^ _DAT_1401c8590);
  }
  if ((((param_7 & 0x20) != 0) && (dVar1 < DAT_140211de8)) && (_DAT_140211df0 < dVar1)) {
    fVar17 = fVar17 / (float)dVar1;
  }
  if ((param_7 & 0x100) == 0 && bVar9 == 0) {
    if ((param_5 <= *param_2) && (0.0 < fVar17)) goto LAB_1400b551d;
    bVar7 = fVar17 < 0.0 && *param_2 <= param_4;
  }
  else {
    bVar7 = false;
  }
  if ((*(char *)(lVar2 + 0x1688) == '\0') && (!bVar7)) {
    if ((fVar17 != 0.0) || (NAN(fVar17))) {
      *(float *)(lVar2 + 0x2858) = *(float *)(lVar2 + 0x2858) + fVar17;
      *(undefined1 *)(lVar2 + 0x2855) = 1;
    }
    else if (*(char *)(lVar2 + 0x2855) != '\x01') {
      return 0;
    }
    dVar14 = *param_2;
    if ((param_7 & 0x20) == 0) {
      dVar14 = dVar14 + (double)*(float *)(lVar2 + 0x2858);
      uVar19 = 0;
      dVar13 = 0.0;
    }
    else {
      fVar18 = DAT_1401c86c8;
      if (uVar11 == 8) {
        iVar6 = FUN_1400bad8a(param_6,3);
        fVar18 = (float)iVar6;
      }
      uVar19 = FUN_1401a65a0(DAT_140210018,fVar18);
      fVar18 = (float)FUN_1400d1e91(param_1,dVar14,param_4,param_5,uVar19,0);
      dVar14 = (double)FUN_1400d228a(param_1,*(float *)(lVar2 + 0x2858) + fVar18,param_4,param_5,
                                     uVar19,0);
      dVar13 = (double)fVar18;
    }
    if ((param_7 & 0x40) == 0 && uVar11 == 8) {
      FUN_1400d264d(param_6,param_1);
      dVar14 = extraout_XMM0_Qa;
    }
    *(undefined1 *)(lVar2 + 0x2855) = 0;
    if ((param_7 & 0x20) == 0) {
      dVar13 = dVar14 - *param_2;
    }
    else {
      FUN_1400d1e91(param_1,dVar14,param_4,param_5,uVar19,0);
      dVar13 = (double)extraout_XMM0_Da - dVar13;
    }
    *(float *)(lVar2 + 0x2858) = *(float *)(lVar2 + 0x2858) - (float)dVar13;
    dVar14 = (double)(~-(ulonglong)(dVar14 == 0.0) & (ulonglong)dVar14);
    dVar13 = *param_2;
    if (bVar9 == 0 && dVar14 != dVar13) {
      if (((byte)(param_7 >> 8) & bVar12) == 0) {
        if ((dVar14 < param_4) || (((uVar11 != 8 && (dVar13 < dVar14)) && (fVar17 < 0.0)))) {
          dVar14 = param_4;
        }
        if ((param_5 < dVar14) || (((uVar11 != 8 && (dVar14 < dVar13)) && (0.0 < fVar17)))) {
          dVar14 = param_5;
        }
      }
      else {
        if (dVar14 < param_4) {
          dVar15 = DAT_1401ced60;
          if (uVar11 == 8) {
            dVar15 = 0.0;
          }
          dVar14 = dVar14 + dVar15 + dVar1;
        }
        if (param_5 < dVar14) {
          dVar15 = DAT_1401ced60;
          if (uVar11 == 8) {
            dVar15 = 0.0;
          }
          dVar14 = dVar14 - (dVar1 + dVar15);
        }
      }
    }
    if ((dVar13 == dVar14) && (!NAN(dVar13) && !NAN(dVar14))) {
      return 0;
    }
    *param_2 = dVar14;
    return 1;
  }
LAB_1400b551d:
  *(undefined4 *)(lVar2 + 0x2858) = 0;
  *(undefined1 *)(lVar2 + 0x2855) = 0;
  return 0;
}

