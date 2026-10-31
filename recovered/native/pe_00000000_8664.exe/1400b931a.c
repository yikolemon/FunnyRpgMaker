/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400b931a */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_1400b931a(float *param_1,ulonglong param_2,uint param_3,double *param_4,double param_5,
             double param_6,undefined8 param_7,uint param_8,float *param_9)

{
  undefined8 uVar1;
  longlong lVar2;
  byte bVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined4 uVar8;
  float fVar9;
  float fVar10;
  undefined8 uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  double dVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined4 uVar22;
  float fVar23;
  float fVar24;
  
  lVar2 = DAT_140f2a910;
  uVar13 = param_2 & 0xffffffff;
  uVar7 = param_8 & 0x100000;
  uVar12 = (ulonglong)(uVar7 >> 0x14);
  uVar6 = param_3 & 0xfffffffe;
  dVar14 = (double)(~-(ulonglong)(param_5 < param_6) & (ulonglong)(param_5 - param_6) |
                   (ulonglong)(param_6 - param_5) & -(ulonglong)(param_5 < param_6));
  fVar16 = (float)dVar14;
  fVar17 = (*(float *)((longlong)param_1 + (ulonglong)(uVar7 >> 0x12) + 8) -
           *(float *)((longlong)param_1 + (ulonglong)(uVar7 >> 0x12))) + DAT_140211df8;
  uVar8 = *(undefined4 *)(DAT_140f2a910 + 0xe38);
  if ((uVar6 != 8) && (_DAT_140211e00 <= dVar14)) {
    uVar8 = FUN_14007b71f(fVar17 / (DAT_1401c86c8 + fVar16));
  }
  fVar9 = (float)FUN_14004863e(uVar8,fVar17);
  fVar21 = fVar17 - fVar9;
  fVar18 = param_1[uVar12] + DAT_1402113a0;
  fVar20 = DAT_1401c86a0 * fVar9;
  fVar19 = param_1[uVar12 + 2] + DAT_140211dfc;
  fVar24 = (float)(_DAT_1401c8590 ^ (uint)fVar9);
  fVar23 = 0.0;
  uVar8 = 0;
  if ((param_8 & 0x20) != 0) {
    fVar23 = DAT_1401c86c8;
    if (uVar6 == 8) {
      iVar5 = FUN_1400bad8a(param_7,3);
      fVar23 = (float)iVar5;
    }
    uVar8 = FUN_1401a65a0(DAT_140210018,fVar23);
    fVar23 = *(float *)(lVar2 + 0xe40) * DAT_1401c86a0;
    fVar10 = (float)FUN_14007b71f(fVar21,DAT_1401c86c8);
    fVar23 = fVar23 / fVar10;
  }
  fVar18 = fVar18 + fVar20;
  fVar19 = fVar19 - fVar20;
  if (*(int *)(lVar2 + 0x167c) == (int)param_2) {
    if (*(int *)(lVar2 + 0x169c) - 2U < 2) {
      if (*(char *)(lVar2 + 0x1688) == '\x01') {
        *(undefined4 *)(lVar2 + 0x2850) = 0;
        *(undefined1 *)(lVar2 + 0x2854) = 0;
      }
      if (uVar7 == 0) {
        uVar11 = FUN_140095507(0);
      }
      else {
        uVar11 = FUN_140095507(1);
        uVar11 = CONCAT44((uint)((ulonglong)uVar11 >> 0x20) ^ _UNK_1401c8594,
                          (uint)uVar11 ^ _DAT_1401c8590);
      }
      uVar22 = (undefined4)((ulonglong)uVar11 >> 0x20);
      fVar21 = (float)uVar11;
      if ((fVar21 != 0.0) || (NAN(fVar21))) {
        uVar11 = 0x1000;
        if (*(int *)(lVar2 + 0x2250) == 3) {
          uVar11 = 0x282;
        }
        bVar3 = FUN_140091d93(uVar11);
        uVar11 = 0x2000;
        if (*(int *)(lVar2 + 0x2250) == 3) {
          uVar11 = 0x283;
        }
        cVar4 = FUN_140091d93(uVar11);
        if ((uVar6 == 8) && (iVar5 = FUN_1400bad8a(param_7,3), 0 < iVar5)) {
          fVar21 = fVar21 / DAT_1402114b0;
          if (bVar3 != 0) {
            fVar21 = fVar21 / DAT_1401c86d0;
          }
        }
        else if (((fVar16 != 0.0 && (double)((ulonglong)dVar14 & _DAT_1401ced50) <= DAT_140211e08) |
                 bVar3) == 1) {
          uVar22 = 0;
          fVar21 = *(float *)(&DAT_1402114b8 + (ulonglong)(fVar21 < 0.0) * 4) / fVar16;
        }
        else {
          fVar21 = fVar21 / DAT_1402114b0;
        }
        if (cVar4 != '\0') {
          fVar21 = fVar21 * DAT_1401c86d0;
        }
        fVar21 = fVar21 + *(float *)(lVar2 + 0x2850);
        *(float *)(lVar2 + 0x2850) = fVar21;
        *(undefined1 *)(lVar2 + 0x2854) = 1;
      }
      else {
        fVar21 = *(float *)(lVar2 + 0x2850);
        uVar22 = 0;
      }
      if ((*(int *)(lVar2 + 0x221c) == (int)param_2) && (*(char *)(lVar2 + 0x1688) == '\0')) {
LAB_1400b981f:
        FUN_14008076e();
      }
      else if (*(char *)(lVar2 + 0x2854) == '\x01') {
        fVar16 = (float)FUN_1400d1e91(param_3,*param_4,param_5,param_6,uVar8,fVar23);
        if (((DAT_1401c86c8 <= fVar16) && (0.0 < fVar21)) || ((fVar16 <= 0.0 && (fVar21 < 0.0)))) {
          *(undefined4 *)(lVar2 + 0x2850) = 0;
          *(undefined1 *)(lVar2 + 0x2854) = 0;
          uVar11 = 0;
          goto LAB_1400b99ac;
        }
        uVar13 = (ulonglong)(uVar6 ^ 8);
        fVar10 = fVar21 + fVar16;
        fVar20 = DAT_1401c86c8;
        if (fVar10 <= DAT_1401c86c8) {
          fVar20 = fVar10;
        }
        fVar20 = (float)(~-(uint)(fVar10 < 0.0) & (uint)fVar20);
        uVar11 = FUN_1400d228a(param_3,fVar20,param_5,param_6,uVar8,fVar23);
        if ((param_8 & 0x40) == 0 && (uVar6 ^ 8) == 0) {
          uVar11 = FUN_1400d264d(param_7,param_3,uVar11);
        }
        fVar10 = (float)FUN_1400d1e91(param_3,uVar11,param_5,param_6,uVar8,fVar23);
        if (fVar21 <= 0.0) {
          fVar16 = (float)FUN_14007b71f(fVar10 - fVar16,CONCAT44(uVar22,fVar21));
        }
        else {
          fVar16 = (float)FUN_14004863e();
        }
        *(float *)(lVar2 + 0x2850) = *(float *)(lVar2 + 0x2850) - fVar16;
        *(undefined1 *)(lVar2 + 0x2854) = 0;
LAB_1400b998d:
        if ((param_8 & 0x200000) == 0 && (*(uint *)(lVar2 + 0x1fe4) & 0x800) == 0) {
          dVar14 = (double)FUN_1400d228a(param_3,fVar20,param_5,param_6,uVar8,fVar23);
          if ((param_8 & 0x40) == 0 && uVar6 == 8) {
            dVar14 = (double)FUN_1400d264d(param_7,param_3,dVar14);
          }
          if ((*param_4 != dVar14) || (NAN(*param_4) || NAN(dVar14))) {
            *param_4 = dVar14;
            uVar11 = CONCAT71((int7)(uVar13 >> 8),1);
            goto LAB_1400b99ac;
          }
        }
      }
    }
    else if (*(int *)(lVar2 + 0x169c) == 1) {
      if (*(char *)(lVar2 + 0x120) != '\0') {
        fVar16 = *(float *)(lVar2 + 0x118 + uVar12 * 4);
        if (*(char *)(lVar2 + 0x1688) == '\x01') {
          uVar12 = FUN_1400d1e91(param_3,*param_4,param_5,param_6,uVar8,fVar23);
          if (uVar7 != 0) {
            uVar12 = (ulonglong)(uint)(DAT_1401c86c8 - (float)uVar12);
          }
          fVar10 = (float)FUN_140048631(fVar18,fVar19,uVar12);
          fVar15 = 0.0;
          if (((DAT_1401c86a0 * fVar24 + fVar10 + DAT_1401c86a4 <= fVar16) && (uVar6 == 8)) &&
             (fVar16 <= fVar20 + fVar10 + DAT_1401c86c8)) {
            fVar15 = fVar16 - fVar10;
          }
          *(float *)(lVar2 + 0x284c) = fVar15;
        }
        fVar20 = 0.0;
        if (0.0 < fVar21) {
          fVar21 = ((fVar16 - *(float *)(lVar2 + 0x284c)) - fVar18) / fVar21;
          fVar20 = DAT_1401c86c8;
          if (fVar21 <= DAT_1401c86c8) {
            fVar20 = fVar21;
          }
          fVar20 = (float)(~-(uint)(fVar21 < 0.0) & (uint)fVar20);
        }
        if (uVar7 != 0) {
          fVar20 = DAT_1401c86c8 - fVar20;
        }
        goto LAB_1400b998d;
      }
      goto LAB_1400b981f;
    }
  }
  uVar11 = 0;
LAB_1400b99ac:
  fVar16 = DAT_1401c86c8;
  if (DAT_1401c86c8 <= fVar17) {
    uVar13 = FUN_1400d1e91(param_3,*param_4,param_5,param_6,uVar8,fVar23);
    if (uVar7 != 0) {
      uVar13 = (ulonglong)(uint)(fVar16 - (float)uVar13);
    }
    fVar16 = (float)FUN_140048631(fVar18,fVar19,uVar13);
    if (uVar7 == 0) {
      fVar17 = param_1[3] + DAT_140211dfc;
      fVar9 = fVar9 * DAT_1401c86a0;
      fVar21 = param_1[1] + DAT_1402113a0;
      *param_9 = fVar24 * DAT_1401c86a0 + fVar16;
      param_9[1] = fVar21;
      param_9[2] = fVar9 + fVar16;
      param_9[3] = fVar17;
    }
    else {
      fVar9 = fVar9 * DAT_1401c86a0;
      fVar17 = param_1[2] + DAT_140211dfc;
      fVar24 = fVar24 * DAT_1401c86a0;
      *param_9 = *param_1 + DAT_1402113a0;
      param_9[1] = fVar24 + fVar16;
      param_9[2] = fVar17;
      param_9[3] = fVar9 + fVar16;
    }
  }
  else {
    uVar1 = *(undefined8 *)param_1;
    *(undefined8 *)param_9 = uVar1;
    *(undefined8 *)(param_9 + 2) = uVar1;
  }
  return uVar11;
}

