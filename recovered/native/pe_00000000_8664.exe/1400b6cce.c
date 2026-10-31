/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400b6cce */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_1400b6cce(float *param_1,int param_2,uint param_3,int *param_4,int param_5,int param_6,
             undefined8 param_7,uint param_8,float *param_9)

{
  undefined8 uVar1;
  longlong lVar2;
  byte bVar3;
  char cVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
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
  
  lVar2 = DAT_140f2a910;
  uVar10 = param_8 & 0x100000;
  uVar11 = (ulonglong)(uVar10 >> 0x14);
  uVar9 = param_3 & 0xfffffffe;
  iVar7 = param_6 - param_5;
  if (param_6 < param_5) {
    iVar7 = param_5 - param_6;
  }
  fVar17 = (*(float *)((longlong)param_1 + (ulonglong)(uVar10 >> 0x12) + 8) -
           *(float *)((longlong)param_1 + (ulonglong)(uVar10 >> 0x12))) + DAT_140211df8;
  uVar12 = *(undefined4 *)(DAT_140f2a910 + 0xe38);
  if (uVar9 != 8) {
    uVar12 = FUN_14007b71f(fVar17 / (DAT_1401c86c8 + (float)iVar7));
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
      iVar5 = FUN_1400bad8a(param_7,3);
      fVar24 = (float)iVar5;
    }
    uVar12 = FUN_1401a65a0(DAT_140210018,fVar24);
    fVar24 = *(float *)(lVar2 + 0xe40) * DAT_1401c86a0;
    fVar14 = (float)FUN_14007b71f(fVar20,DAT_1401c86c8);
    fVar24 = fVar24 / fVar14;
  }
  fVar18 = fVar18 + fVar21;
  fVar19 = fVar19 - fVar21;
  if (*(int *)(lVar2 + 0x167c) == param_2) {
    if (*(int *)(lVar2 + 0x169c) - 2U < 2) {
      if (*(char *)(lVar2 + 0x1688) == '\x01') {
        *(undefined4 *)(lVar2 + 0x2850) = 0;
        *(undefined1 *)(lVar2 + 0x2854) = 0;
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
        if (*(int *)(lVar2 + 0x2250) == 3) {
          uVar8 = 0x282;
        }
        bVar3 = FUN_140091d93(uVar8);
        uVar8 = 0x2000;
        if (*(int *)(lVar2 + 0x2250) == 3) {
          uVar8 = 0x283;
        }
        cVar4 = FUN_140091d93(uVar8);
        if ((uVar9 == 8) && (iVar5 = FUN_1400bad8a(param_7,3), 0 < iVar5)) {
          fVar20 = fVar20 / DAT_1402114b0;
          if (bVar3 != 0) {
            fVar20 = fVar20 / DAT_1401c86d0;
          }
        }
        else if ((99 < iVar7 - 1U & (bVar3 ^ 1)) == 0) {
          fVar20 = *(float *)(&DAT_1402114b8 + (ulonglong)(fVar20 < 0.0) * 4) / (float)iVar7;
        }
        else {
          fVar20 = fVar20 / DAT_1402114b0;
        }
        if (cVar4 != '\0') {
          fVar20 = fVar20 * DAT_1401c86d0;
        }
        fVar20 = fVar20 + *(float *)(lVar2 + 0x2850);
        *(float *)(lVar2 + 0x2850) = fVar20;
        *(undefined1 *)(lVar2 + 0x2854) = 1;
      }
      else {
        fVar20 = *(float *)(lVar2 + 0x2850);
      }
      if ((*(int *)(lVar2 + 0x221c) == param_2) && (*(char *)(lVar2 + 0x1688) == '\0')) {
LAB_1400b719b:
        FUN_14008076e();
      }
      else if (*(char *)(lVar2 + 0x2854) == '\x01') {
        fVar14 = (float)FUN_1400cfffe(param_3,*param_4,param_5,param_6,uVar12,fVar24);
        if (((fVar14 < DAT_1401c86c8) || (fVar20 <= 0.0)) && ((0.0 < fVar14 || (0.0 <= fVar20)))) {
          fVar22 = fVar20 + fVar14;
          fVar21 = DAT_1401c86c8;
          if (fVar22 <= DAT_1401c86c8) {
            fVar21 = fVar22;
          }
          fVar21 = (float)(~-(uint)(fVar22 < 0.0) & (uint)fVar21);
          uVar11 = (ulonglong)param_3;
          uVar6 = FUN_1400d02f0(uVar11,fVar21,param_5,param_6,uVar12,fVar24);
          if ((param_8 & 0x40) == 0 && uVar9 == 8) {
            uVar6 = FUN_1400d060f(param_7,param_3,uVar6);
          }
          fVar22 = (float)FUN_1400cfffe(uVar11,uVar6,param_5,param_6,uVar12,fVar24);
          if (fVar20 <= 0.0) {
            fVar20 = (float)FUN_14007b71f(fVar22 - fVar14,fVar20);
          }
          else {
            fVar20 = (float)FUN_14004863e();
          }
          *(float *)(lVar2 + 0x2850) = *(float *)(lVar2 + 0x2850) - fVar20;
          *(undefined1 *)(lVar2 + 0x2854) = 0;
          goto LAB_1400b7279;
        }
        *(undefined4 *)(lVar2 + 0x2850) = 0;
        *(undefined1 *)(lVar2 + 0x2854) = 0;
      }
    }
    else if (*(int *)(lVar2 + 0x169c) == 1) {
      if (*(char *)(lVar2 + 0x120) == '\0') goto LAB_1400b719b;
      fVar14 = *(float *)(lVar2 + 0x118 + uVar11 * 4);
      if (*(char *)(lVar2 + 0x1688) == '\x01') {
        fVar22 = (float)FUN_1400cfffe(param_3,*param_4,param_5,param_6,uVar12,fVar24);
        if (uVar10 != 0) {
          fVar22 = DAT_1401c86c8 - fVar22;
        }
        fVar22 = (float)FUN_140048631(fVar18,fVar19,fVar22);
        fVar16 = 0.0;
        if (((DAT_1401c86a0 * fVar23 + fVar22 + DAT_1401c86a4 <= fVar14) && (uVar9 == 8)) &&
           (fVar14 <= fVar21 + fVar22 + DAT_1401c86c8)) {
          fVar16 = fVar14 - fVar22;
        }
        *(float *)(lVar2 + 0x284c) = fVar16;
      }
      fVar21 = 0.0;
      if (0.0 < fVar20) {
        fVar20 = ((fVar14 - *(float *)(lVar2 + 0x284c)) - fVar18) / fVar20;
        fVar21 = DAT_1401c86c8;
        if (fVar20 <= DAT_1401c86c8) {
          fVar21 = fVar20;
        }
        fVar21 = (float)(~-(uint)(fVar20 < 0.0) & (uint)fVar21);
      }
      if (uVar10 != 0) {
        fVar21 = DAT_1401c86c8 - fVar21;
      }
LAB_1400b7279:
      if ((param_8 & 0x200000) == 0 && (*(uint *)(lVar2 + 0x1fe4) & 0x800) == 0) {
        iVar7 = FUN_1400d02f0(param_3,fVar21,param_5,param_6,uVar12,fVar24);
        if ((param_8 & 0x40) == 0 && uVar9 == 8) {
          iVar7 = FUN_1400d060f(param_7,param_3,iVar7);
        }
        if (*param_4 != iVar7) {
          *param_4 = iVar7;
          uVar8 = CONCAT71((int7)(uVar11 >> 8),1);
          goto LAB_1400b72ea;
        }
      }
    }
  }
  uVar8 = 0;
LAB_1400b72ea:
  fVar20 = DAT_1401c86c8;
  if (DAT_1401c86c8 <= fVar17) {
    fVar17 = (float)FUN_1400cfffe(param_3,*param_4,param_5,param_6,uVar12,fVar24);
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

