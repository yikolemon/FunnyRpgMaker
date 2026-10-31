/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18013dd9e */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_18013dd9e(float *param_1,int param_2,uint param_3,int *param_4,int param_5,int param_6,
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
  
  lVar2 = DAT_180419160;
  uVar10 = param_8 & 0x100000;
  uVar11 = (ulonglong)(uVar10 >> 0x14);
  uVar9 = param_3 & 0xfffffffe;
  iVar7 = param_6 - param_5;
  if (param_6 < param_5) {
    iVar7 = param_5 - param_6;
  }
  fVar17 = (*(float *)((longlong)param_1 + (ulonglong)(uVar10 >> 0x12) + 8) -
           *(float *)((longlong)param_1 + (ulonglong)(uVar10 >> 0x12))) + DAT_1802df088;
  uVar12 = *(undefined4 *)(DAT_180419160 + 0xe38);
  if (uVar9 != 8) {
    uVar12 = FUN_180102463(fVar17 / (DAT_1802ac570 + (float)iVar7));
  }
  fVar13 = (float)FUN_1800eebe2(uVar12,fVar17);
  fVar20 = fVar17 - fVar13;
  fVar18 = param_1[uVar11] + DAT_1802de650;
  fVar21 = DAT_1802dbb2c * fVar13;
  fVar19 = param_1[uVar11 + 2] + DAT_1802df08c;
  fVar23 = (float)(_DAT_1802b0ce0 ^ (uint)fVar13);
  fVar24 = 0.0;
  uVar12 = 0;
  if ((param_8 & 0x20) != 0) {
    fVar24 = DAT_1802ac570;
    if (uVar9 == 8) {
      iVar5 = FUN_180141e5a(param_7,3);
      fVar24 = (float)iVar5;
    }
    uVar12 = FUN_1802886b0(DAT_1802dc268,fVar24);
    fVar24 = *(float *)(lVar2 + 0xe40) * DAT_1802dbb2c;
    fVar14 = (float)FUN_180102463(fVar20,DAT_1802ac570);
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
        fVar20 = (float)FUN_18011c24b(0);
      }
      else {
        uVar15 = FUN_18011c24b(1);
        fVar20 = (float)(uVar15 ^ _DAT_1802b0ce0);
      }
      if ((fVar20 != 0.0) || (NAN(fVar20))) {
        uVar8 = 0x1000;
        if (*(int *)(lVar2 + 0x2250) == 3) {
          uVar8 = 0x282;
        }
        bVar3 = FUN_180118a7b(uVar8);
        uVar8 = 0x2000;
        if (*(int *)(lVar2 + 0x2250) == 3) {
          uVar8 = 0x283;
        }
        cVar4 = FUN_180118a7b(uVar8);
        if ((uVar9 == 8) && (iVar5 = FUN_180141e5a(param_7,3), 0 < iVar5)) {
          fVar20 = fVar20 / DAT_1802dbb34;
          if (bVar3 != 0) {
            fVar20 = fVar20 / DAT_1802dc2dc;
          }
        }
        else if ((99 < iVar7 - 1U & (bVar3 ^ 1)) == 0) {
          fVar20 = *(float *)(&DAT_1802de750 + (ulonglong)(fVar20 < 0.0) * 4) / (float)iVar7;
        }
        else {
          fVar20 = fVar20 / DAT_1802dbb34;
        }
        if (cVar4 != '\0') {
          fVar20 = fVar20 * DAT_1802dc2dc;
        }
        fVar20 = fVar20 + *(float *)(lVar2 + 0x2850);
        *(float *)(lVar2 + 0x2850) = fVar20;
        *(undefined1 *)(lVar2 + 0x2854) = 1;
      }
      else {
        fVar20 = *(float *)(lVar2 + 0x2850);
      }
      if ((*(int *)(lVar2 + 0x221c) == param_2) && (*(char *)(lVar2 + 0x1688) == '\0')) {
LAB_18013e26b:
        FUN_180107456();
      }
      else if (*(char *)(lVar2 + 0x2854) == '\x01') {
        fVar14 = (float)FUN_1801570ce(param_3,*param_4,param_5,param_6,uVar12,fVar24);
        if (((fVar14 < DAT_1802ac570) || (fVar20 <= 0.0)) && ((0.0 < fVar14 || (0.0 <= fVar20)))) {
          fVar22 = fVar20 + fVar14;
          fVar21 = DAT_1802ac570;
          if (fVar22 <= DAT_1802ac570) {
            fVar21 = fVar22;
          }
          fVar21 = (float)(~-(uint)(fVar22 < 0.0) & (uint)fVar21);
          uVar11 = (ulonglong)param_3;
          uVar6 = FUN_1801573c0(uVar11,fVar21,param_5,param_6,uVar12,fVar24);
          if ((param_8 & 0x40) == 0 && uVar9 == 8) {
            uVar6 = FUN_1801576df(param_7,param_3,uVar6);
          }
          fVar22 = (float)FUN_1801570ce(uVar11,uVar6,param_5,param_6,uVar12,fVar24);
          if (fVar20 <= 0.0) {
            fVar20 = (float)FUN_180102463(fVar22 - fVar14,fVar20);
          }
          else {
            fVar20 = (float)FUN_1800eebe2();
          }
          *(float *)(lVar2 + 0x2850) = *(float *)(lVar2 + 0x2850) - fVar20;
          *(undefined1 *)(lVar2 + 0x2854) = 0;
          goto LAB_18013e349;
        }
        *(undefined4 *)(lVar2 + 0x2850) = 0;
        *(undefined1 *)(lVar2 + 0x2854) = 0;
      }
    }
    else if (*(int *)(lVar2 + 0x169c) == 1) {
      if (*(char *)(lVar2 + 0x120) == '\0') goto LAB_18013e26b;
      fVar14 = *(float *)(lVar2 + 0x118 + uVar11 * 4);
      if (*(char *)(lVar2 + 0x1688) == '\x01') {
        fVar22 = (float)FUN_1801570ce(param_3,*param_4,param_5,param_6,uVar12,fVar24);
        if (uVar10 != 0) {
          fVar22 = DAT_1802ac570 - fVar22;
        }
        fVar22 = (float)FUN_1800eebd5(fVar18,fVar19,fVar22);
        fVar16 = 0.0;
        if (((DAT_1802dbb2c * fVar23 + fVar22 + DAT_1802bb8e0 <= fVar14) && (uVar9 == 8)) &&
           (fVar14 <= fVar21 + fVar22 + DAT_1802ac570)) {
          fVar16 = fVar14 - fVar22;
        }
        *(float *)(lVar2 + 0x284c) = fVar16;
      }
      fVar21 = 0.0;
      if (0.0 < fVar20) {
        fVar20 = ((fVar14 - *(float *)(lVar2 + 0x284c)) - fVar18) / fVar20;
        fVar21 = DAT_1802ac570;
        if (fVar20 <= DAT_1802ac570) {
          fVar21 = fVar20;
        }
        fVar21 = (float)(~-(uint)(fVar20 < 0.0) & (uint)fVar21);
      }
      if (uVar10 != 0) {
        fVar21 = DAT_1802ac570 - fVar21;
      }
LAB_18013e349:
      if ((param_8 & 0x200000) == 0 && (*(uint *)(lVar2 + 0x1fe4) & 0x800) == 0) {
        iVar7 = FUN_1801573c0(param_3,fVar21,param_5,param_6,uVar12,fVar24);
        if ((param_8 & 0x40) == 0 && uVar9 == 8) {
          iVar7 = FUN_1801576df(param_7,param_3,iVar7);
        }
        if (*param_4 != iVar7) {
          *param_4 = iVar7;
          uVar8 = CONCAT71((int7)(uVar11 >> 8),1);
          goto LAB_18013e3ba;
        }
      }
    }
  }
  uVar8 = 0;
LAB_18013e3ba:
  fVar20 = DAT_1802ac570;
  if (DAT_1802ac570 <= fVar17) {
    fVar17 = (float)FUN_1801570ce(param_3,*param_4,param_5,param_6,uVar12,fVar24);
    if (uVar10 != 0) {
      fVar17 = fVar20 - fVar17;
    }
    fVar17 = (float)FUN_1800eebd5(fVar18,fVar19,fVar17);
    if (uVar10 == 0) {
      fVar18 = param_1[3] + DAT_1802df08c;
      fVar13 = fVar13 * DAT_1802dbb2c;
      fVar19 = param_1[1] + DAT_1802de650;
      *param_9 = fVar23 * DAT_1802dbb2c + fVar17;
      param_9[1] = fVar19;
      param_9[2] = fVar13 + fVar17;
      param_9[3] = fVar18;
    }
    else {
      fVar13 = fVar13 * DAT_1802dbb2c;
      fVar18 = param_1[2] + DAT_1802df08c;
      fVar23 = fVar23 * DAT_1802dbb2c;
      *param_9 = *param_1 + DAT_1802de650;
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

