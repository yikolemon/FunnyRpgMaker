/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400b7bf2 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_1400b7bf2(float *param_1,ulonglong param_2,uint param_3,longlong *param_4,longlong param_5,
             longlong param_6,undefined8 param_7,uint param_8,float *param_9)

{
  undefined8 uVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  uint uVar8;
  ulonglong uVar9;
  longlong lVar10;
  uint uVar11;
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
  
  lVar5 = DAT_140f2a910;
  uVar7 = param_2 & 0xffffffff;
  uVar11 = param_8 & 0x100000;
  uVar9 = (ulonglong)(uVar11 >> 0x14);
  uVar8 = param_3 & 0xfffffffe;
  lVar10 = param_6 - param_5;
  if (param_6 < param_5) {
    lVar10 = param_5 - param_6;
  }
  fVar17 = (*(float *)((longlong)param_1 + (ulonglong)(uVar11 >> 0x12) + 8) -
           *(float *)((longlong)param_1 + (ulonglong)(uVar11 >> 0x12))) + DAT_140211df8;
  uVar12 = *(undefined4 *)(DAT_140f2a910 + 0xe38);
  if (uVar8 != 8) {
    uVar12 = FUN_14007b71f(fVar17 / (DAT_1401c86c8 + (float)lVar10));
  }
  fVar13 = (float)FUN_14004863e(uVar12,fVar17);
  fVar20 = fVar17 - fVar13;
  fVar18 = param_1[uVar9] + DAT_1402113a0;
  fVar21 = DAT_1401c86a0 * fVar13;
  fVar19 = param_1[uVar9 + 2] + DAT_140211dfc;
  fVar23 = (float)(_DAT_1401c8590 ^ (uint)fVar13);
  fVar24 = 0.0;
  uVar12 = 0;
  if ((param_8 & 0x20) != 0) {
    fVar24 = DAT_1401c86c8;
    if (uVar8 == 8) {
      iVar4 = FUN_1400bad8a(param_7,3);
      fVar24 = (float)iVar4;
    }
    uVar12 = FUN_1401a65a0(DAT_140210018,fVar24);
    fVar24 = *(float *)(lVar5 + 0xe40) * DAT_1401c86a0;
    fVar14 = (float)FUN_14007b71f(fVar20,DAT_1401c86c8);
    fVar24 = fVar24 / fVar14;
  }
  fVar18 = fVar18 + fVar21;
  fVar19 = fVar19 - fVar21;
  if (*(int *)(lVar5 + 0x167c) == (int)param_2) {
    if (*(int *)(lVar5 + 0x169c) - 2U < 2) {
      if (*(char *)(lVar5 + 0x1688) == '\x01') {
        *(undefined4 *)(lVar5 + 0x2850) = 0;
        *(undefined1 *)(lVar5 + 0x2854) = 0;
      }
      if (uVar11 == 0) {
        fVar20 = (float)FUN_140095507(0);
      }
      else {
        uVar15 = FUN_140095507(1);
        fVar20 = (float)(uVar15 ^ _DAT_1401c8590);
      }
      if ((fVar20 != 0.0) || (NAN(fVar20))) {
        uVar6 = 0x1000;
        if (*(int *)(lVar5 + 0x2250) == 3) {
          uVar6 = 0x282;
        }
        bVar2 = FUN_140091d93(uVar6);
        uVar6 = 0x2000;
        if (*(int *)(lVar5 + 0x2250) == 3) {
          uVar6 = 0x283;
        }
        cVar3 = FUN_140091d93(uVar6);
        if ((uVar8 == 8) && (iVar4 = FUN_1400bad8a(param_7,3), 0 < iVar4)) {
          fVar20 = fVar20 / DAT_1402114b0;
          if (bVar2 != 0) {
            fVar20 = fVar20 / DAT_1401c86d0;
          }
        }
        else if ((99 < lVar10 - 1U & (bVar2 ^ 1)) == 0) {
          fVar20 = *(float *)(&DAT_1402114b8 + (ulonglong)(fVar20 < 0.0) * 4) / (float)lVar10;
        }
        else {
          fVar20 = fVar20 / DAT_1402114b0;
        }
        if (cVar3 != '\0') {
          fVar20 = fVar20 * DAT_1401c86d0;
        }
        fVar20 = fVar20 + *(float *)(lVar5 + 0x2850);
        *(float *)(lVar5 + 0x2850) = fVar20;
        *(undefined1 *)(lVar5 + 0x2854) = 1;
      }
      else {
        fVar20 = *(float *)(lVar5 + 0x2850);
      }
      if ((*(int *)(lVar5 + 0x221c) == (int)param_2) && (*(char *)(lVar5 + 0x1688) == '\0')) {
LAB_1400b80cc:
        FUN_14008076e();
      }
      else if (*(char *)(lVar5 + 0x2854) == '\x01') {
        fVar14 = (float)FUN_1400d0a68(param_3,*param_4,param_5,param_6,uVar12,fVar24);
        if (((fVar14 < DAT_1401c86c8) || (fVar20 <= 0.0)) && ((0.0 < fVar14 || (0.0 <= fVar20)))) {
          uVar7 = (ulonglong)(uVar8 ^ 8);
          fVar22 = fVar20 + fVar14;
          fVar21 = DAT_1401c86c8;
          if (fVar22 <= DAT_1401c86c8) {
            fVar21 = fVar22;
          }
          fVar21 = (float)(~-(uint)(fVar22 < 0.0) & (uint)fVar21);
          uVar6 = FUN_1400d0de1(param_3,fVar21,param_5,param_6,uVar12,fVar24);
          if ((param_8 & 0x40) == 0 && (uVar8 ^ 8) == 0) {
            uVar6 = FUN_1400d1127(param_7,param_3,uVar6);
          }
          fVar22 = (float)FUN_1400d0a68(param_3,uVar6,param_5,param_6,uVar12,fVar24);
          if (fVar20 <= 0.0) {
            fVar20 = (float)FUN_14007b71f(fVar22 - fVar14,fVar20);
          }
          else {
            fVar20 = (float)FUN_14004863e();
          }
          *(float *)(lVar5 + 0x2850) = *(float *)(lVar5 + 0x2850) - fVar20;
          *(undefined1 *)(lVar5 + 0x2854) = 0;
          goto LAB_1400b81ab;
        }
        *(undefined4 *)(lVar5 + 0x2850) = 0;
        *(undefined1 *)(lVar5 + 0x2854) = 0;
      }
    }
    else if (*(int *)(lVar5 + 0x169c) == 1) {
      if (*(char *)(lVar5 + 0x120) == '\0') goto LAB_1400b80cc;
      fVar14 = *(float *)(lVar5 + 0x118 + uVar9 * 4);
      if (*(char *)(lVar5 + 0x1688) == '\x01') {
        fVar22 = (float)FUN_1400d0a68(param_3,*param_4,param_5,param_6,uVar12,fVar24);
        if (uVar11 != 0) {
          fVar22 = DAT_1401c86c8 - fVar22;
        }
        fVar22 = (float)FUN_140048631(fVar18,fVar19,fVar22);
        fVar16 = 0.0;
        if (((DAT_1401c86a0 * fVar23 + fVar22 + DAT_1401c86a4 <= fVar14) && (uVar8 == 8)) &&
           (fVar14 <= fVar21 + fVar22 + DAT_1401c86c8)) {
          fVar16 = fVar14 - fVar22;
        }
        *(float *)(lVar5 + 0x284c) = fVar16;
      }
      fVar21 = 0.0;
      if (0.0 < fVar20) {
        fVar20 = ((fVar14 - *(float *)(lVar5 + 0x284c)) - fVar18) / fVar20;
        fVar21 = DAT_1401c86c8;
        if (fVar20 <= DAT_1401c86c8) {
          fVar21 = fVar20;
        }
        fVar21 = (float)(~-(uint)(fVar20 < 0.0) & (uint)fVar21);
      }
      if (uVar11 != 0) {
        fVar21 = DAT_1401c86c8 - fVar21;
      }
LAB_1400b81ab:
      if ((param_8 & 0x200000) == 0 && (*(uint *)(lVar5 + 0x1fe4) & 0x800) == 0) {
        lVar5 = FUN_1400d0de1(param_3,fVar21,param_5,param_6,uVar12,fVar24);
        if ((param_8 & 0x40) == 0 && uVar8 == 8) {
          lVar5 = FUN_1400d1127(param_7,param_3,lVar5);
        }
        if (*param_4 != lVar5) {
          *param_4 = lVar5;
          uVar6 = CONCAT71((int7)(uVar7 >> 8),1);
          goto LAB_1400b821a;
        }
      }
    }
  }
  uVar6 = 0;
LAB_1400b821a:
  fVar20 = DAT_1401c86c8;
  if (DAT_1401c86c8 <= fVar17) {
    fVar17 = (float)FUN_1400d0a68(param_3,*param_4,param_5,param_6,uVar12,fVar24);
    if (uVar11 != 0) {
      fVar17 = fVar20 - fVar17;
    }
    fVar17 = (float)FUN_140048631(fVar18,fVar19,fVar17);
    if (uVar11 == 0) {
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
  return uVar6;
}

