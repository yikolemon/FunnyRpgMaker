/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400b745f */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_1400b745f(float *param_1,int param_2,uint param_3,int *param_4,uint param_5,uint param_6,
             undefined8 param_7,uint param_8,float *param_9)

{
  undefined8 uVar1;
  uint uVar2;
  longlong lVar3;
  byte bVar4;
  char cVar5;
  int iVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  uint uVar9;
  uint uVar10;
  ulonglong uVar11;
  undefined4 uVar12;
  float fVar13;
  float fVar14;
  uint uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  
  lVar3 = DAT_140f2a910;
  uVar10 = param_8 & 0x100000;
  uVar11 = (ulonglong)(uVar10 >> 0x14);
  uVar9 = param_3 & 0xfffffffe;
  uVar2 = param_6 - param_5;
  if (param_6 < param_5) {
    uVar2 = param_5 - param_6;
  }
  fVar17 = (*(float *)((longlong)param_1 + (ulonglong)(uVar10 >> 0x12) + 8) -
           *(float *)((longlong)param_1 + (ulonglong)(uVar10 >> 0x12))) + DAT_140211df8;
  uVar12 = *(undefined4 *)(DAT_140f2a910 + 0xe38);
  if (uVar9 != 8) {
    uVar12 = FUN_14007b71f(fVar17 / (DAT_1401c86c8 + (float)uVar2));
  }
  fVar13 = (float)FUN_14004863e(uVar12,fVar17);
  fVar20 = fVar17 - fVar13;
  fVar18 = param_1[uVar11] + DAT_1402113a0;
  fVar21 = DAT_1401c86a0 * fVar13;
  fVar19 = param_1[uVar11 + 2] + DAT_140211dfc;
  fVar23 = (float)(_DAT_1401c8590 ^ (uint)fVar13);
  fVar24 = 0.0;
  uVar12 = 0;
  if ((param_8 & 0x20) != 0) {
    fVar24 = DAT_1401c86c8;
    if (uVar9 == 8) {
      iVar6 = FUN_1400bad8a(param_7,3);
      fVar24 = (float)iVar6;
    }
    uVar12 = FUN_1401a65a0(DAT_140210018,fVar24);
    fVar24 = *(float *)(lVar3 + 0xe40) * DAT_1401c86a0;
    fVar14 = (float)FUN_14007b71f(fVar20,DAT_1401c86c8);
    fVar24 = fVar24 / fVar14;
  }
  fVar18 = fVar18 + fVar21;
  fVar19 = fVar19 - fVar21;
  if (*(int *)(lVar3 + 0x167c) == param_2) {
    if (*(int *)(lVar3 + 0x169c) - 2U < 2) {
      if (*(char *)(lVar3 + 0x1688) == '\x01') {
        *(undefined4 *)(lVar3 + 0x2850) = 0;
        *(undefined1 *)(lVar3 + 0x2854) = 0;
      }
      if (uVar10 == 0) {
        fVar20 = (float)FUN_140095507(0);
      }
      else {
        uVar15 = FUN_140095507(1);
        fVar20 = (float)(uVar15 ^ _DAT_1401c8590);
      }
      if ((fVar20 != 0.0) || (NAN(fVar20))) {
        uVar8 = 0x1000;
        if (*(int *)(lVar3 + 0x2250) == 3) {
          uVar8 = 0x282;
        }
        bVar4 = FUN_140091d93(uVar8);
        uVar8 = 0x2000;
        if (*(int *)(lVar3 + 0x2250) == 3) {
          uVar8 = 0x283;
        }
        cVar5 = FUN_140091d93(uVar8);
        if ((uVar9 == 8) && (iVar6 = FUN_1400bad8a(param_7,3), 0 < iVar6)) {
          fVar20 = fVar20 / DAT_1402114b0;
          if (bVar4 != 0) {
            fVar20 = fVar20 / DAT_1401c86d0;
          }
        }
        else if ((99 < uVar2 - 1 & (bVar4 ^ 1)) == 0) {
          fVar20 = *(float *)(&DAT_1402114b8 + (ulonglong)(fVar20 < 0.0) * 4) / (float)uVar2;
        }
        else {
          fVar20 = fVar20 / DAT_1402114b0;
        }
        if (cVar5 != '\0') {
          fVar20 = fVar20 * DAT_1401c86d0;
        }
        fVar20 = fVar20 + *(float *)(lVar3 + 0x2850);
        *(float *)(lVar3 + 0x2850) = fVar20;
        *(undefined1 *)(lVar3 + 0x2854) = 1;
      }
      else {
        fVar20 = *(float *)(lVar3 + 0x2850);
      }
      if ((*(int *)(lVar3 + 0x221c) == param_2) && (*(char *)(lVar3 + 0x1688) == '\0')) {
LAB_1400b792e:
        FUN_14008076e();
      }
      else if (*(char *)(lVar3 + 0x2854) == '\x01') {
        fVar14 = (float)FUN_1400d06ae(param_3,*param_4,param_5,param_6,uVar12,fVar24);
        if (((fVar14 < DAT_1401c86c8) || (fVar20 <= 0.0)) && ((0.0 < fVar14 || (0.0 <= fVar20)))) {
          fVar22 = fVar20 + fVar14;
          fVar21 = DAT_1401c86c8;
          if (fVar22 <= DAT_1401c86c8) {
            fVar21 = fVar22;
          }
          fVar21 = (float)(~-(uint)(fVar22 < 0.0) & (uint)fVar21);
          uVar11 = (ulonglong)param_3;
          uVar7 = FUN_1400d080c(uVar11,fVar21,param_5,param_6,uVar12,fVar24);
          if ((param_8 & 0x40) == 0 && uVar9 == 8) {
            uVar7 = FUN_1400d099d(param_7,param_3,uVar7);
          }
          fVar22 = (float)FUN_1400d06ae(uVar11,uVar7,param_5,param_6,uVar12,fVar24);
          if (fVar20 <= 0.0) {
            fVar20 = (float)FUN_14007b71f(fVar22 - fVar14,fVar20);
          }
          else {
            fVar20 = (float)FUN_14004863e();
          }
          *(float *)(lVar3 + 0x2850) = *(float *)(lVar3 + 0x2850) - fVar20;
          *(undefined1 *)(lVar3 + 0x2854) = 0;
          goto LAB_1400b7a0c;
        }
        *(undefined4 *)(lVar3 + 0x2850) = 0;
        *(undefined1 *)(lVar3 + 0x2854) = 0;
      }
    }
    else if (*(int *)(lVar3 + 0x169c) == 1) {
      if (*(char *)(lVar3 + 0x120) == '\0') goto LAB_1400b792e;
      fVar14 = *(float *)(lVar3 + 0x118 + uVar11 * 4);
      if (*(char *)(lVar3 + 0x1688) == '\x01') {
        fVar22 = (float)FUN_1400d06ae(param_3,*param_4,param_5,param_6,uVar12,fVar24);
        if (uVar10 != 0) {
          fVar22 = DAT_1401c86c8 - fVar22;
        }
        fVar22 = (float)FUN_140048631(fVar18,fVar19,fVar22);
        fVar16 = 0.0;
        if (((DAT_1401c86a0 * fVar23 + fVar22 + DAT_1401c86a4 <= fVar14) && (uVar9 == 8)) &&
           (fVar14 <= fVar21 + fVar22 + DAT_1401c86c8)) {
          fVar16 = fVar14 - fVar22;
        }
        *(float *)(lVar3 + 0x284c) = fVar16;
      }
      fVar21 = 0.0;
      if (0.0 < fVar20) {
        fVar20 = ((fVar14 - *(float *)(lVar3 + 0x284c)) - fVar18) / fVar20;
        fVar21 = DAT_1401c86c8;
        if (fVar20 <= DAT_1401c86c8) {
          fVar21 = fVar20;
        }
        fVar21 = (float)(~-(uint)(fVar20 < 0.0) & (uint)fVar21);
      }
      if (uVar10 != 0) {
        fVar21 = DAT_1401c86c8 - fVar21;
      }
LAB_1400b7a0c:
      if ((param_8 & 0x200000) == 0 && (*(uint *)(lVar3 + 0x1fe4) & 0x800) == 0) {
        iVar6 = FUN_1400d080c(param_3,fVar21,param_5,param_6,uVar12,fVar24);
        if ((param_8 & 0x40) == 0 && uVar9 == 8) {
          iVar6 = FUN_1400d099d(param_7,param_3,iVar6);
        }
        if (*param_4 != iVar6) {
          *param_4 = iVar6;
          uVar8 = CONCAT71((int7)(uVar11 >> 8),1);
          goto LAB_1400b7a7d;
        }
      }
    }
  }
  uVar8 = 0;
LAB_1400b7a7d:
  fVar20 = DAT_1401c86c8;
  if (DAT_1401c86c8 <= fVar17) {
    fVar17 = (float)FUN_1400d06ae(param_3,*param_4,param_5,param_6,uVar12,fVar24);
    if (uVar10 != 0) {
      fVar17 = fVar20 - fVar17;
    }
    fVar17 = (float)FUN_140048631(fVar18,fVar19,fVar17);
    if (uVar10 == 0) {
      fVar18 = param_1[3] + DAT_140211dfc;
      fVar13 = fVar13 * DAT_1401c86a0;
      fVar19 = param_1[1] + DAT_1402113a0;
      *param_9 = fVar23 * DAT_1401c86a0 + fVar17;
      param_9[1] = fVar19;
      param_9[2] = fVar13 + fVar17;
      param_9[3] = fVar18;
    }
    else {
      fVar13 = fVar13 * DAT_1401c86a0;
      fVar18 = param_1[2] + DAT_140211dfc;
      fVar23 = fVar23 * DAT_1401c86a0;
      *param_9 = *param_1 + DAT_1402113a0;
      param_9[1] = fVar23 + fVar17;
      param_9[2] = fVar18;
      param_9[3] = fVar13 + fVar17;
    }
  }
  else {
    uVar1 = *(undefined8 *)param_1;
    *(undefined8 *)param_9 = uVar1;
    *(undefined8 *)(param_9 + 2) = uVar1;
  }
  return uVar8;
}

