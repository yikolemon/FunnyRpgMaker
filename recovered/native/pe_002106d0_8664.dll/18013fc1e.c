/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18013fc1e */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_18013fc1e(float *param_1,ulonglong param_2,uint param_3,float *param_4,float param_5,
             float param_6,undefined8 param_7,uint param_8,float *param_9)

{
  undefined8 uVar1;
  longlong lVar2;
  byte bVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  uint uVar8;
  ulonglong uVar9;
  uint uVar10;
  undefined4 uVar11;
  float fVar12;
  float fVar13;
  uint uVar14;
  float fVar15;
  undefined4 uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  
  lVar2 = DAT_180419160;
  uVar7 = param_2 & 0xffffffff;
  uVar10 = param_8 & 0x100000;
  uVar9 = (ulonglong)(uVar10 >> 0x14);
  uVar8 = param_3 & 0xfffffffe;
  fVar15 = (float)(~-(uint)(param_5 < param_6) & (uint)(param_5 - param_6) |
                  (uint)(param_6 - param_5) & -(uint)(param_5 < param_6));
  fVar19 = (*(float *)((longlong)param_1 + (ulonglong)(uVar10 >> 0x12) + 8) -
           *(float *)((longlong)param_1 + (ulonglong)(uVar10 >> 0x12))) + DAT_1802df088;
  uVar11 = *(undefined4 *)(DAT_180419160 + 0xe38);
  if ((uVar8 != 8) && (0.0 <= fVar15)) {
    uVar11 = FUN_180102463(fVar19 / (DAT_1802ac570 + fVar15));
  }
  fVar12 = (float)FUN_1800eebe2(uVar11,fVar19);
  fVar22 = fVar19 - fVar12;
  fVar20 = param_1[uVar9] + DAT_1802de650;
  fVar18 = DAT_1802dbb2c * fVar12;
  fVar21 = param_1[uVar9 + 2] + DAT_1802df08c;
  fVar24 = (float)(_DAT_1802b0ce0 ^ (uint)fVar12);
  fVar23 = 0.0;
  uVar11 = 0;
  if ((param_8 & 0x20) != 0) {
    fVar23 = DAT_1802ac570;
    if (uVar8 == 8) {
      iVar5 = FUN_180141e5a(param_7,3);
      fVar23 = (float)iVar5;
    }
    uVar11 = FUN_1802886b0(DAT_1802dc268,fVar23);
    fVar23 = *(float *)(lVar2 + 0xe40) * DAT_1802dbb2c;
    fVar13 = (float)FUN_180102463(fVar22,DAT_1802ac570);
    fVar23 = fVar23 / fVar13;
  }
  fVar20 = fVar20 + fVar18;
  fVar21 = fVar21 - fVar18;
  if (*(int *)(lVar2 + 0x167c) == (int)param_2) {
    if (*(int *)(lVar2 + 0x169c) - 2U < 2) {
      if (*(char *)(lVar2 + 0x1688) == '\x01') {
        *(undefined4 *)(lVar2 + 0x2850) = 0;
        *(undefined1 *)(lVar2 + 0x2854) = 0;
      }
      if (uVar10 == 0) {
        fVar22 = (float)FUN_18011c24b(0);
      }
      else {
        uVar14 = FUN_18011c24b(1);
        fVar22 = (float)(uVar14 ^ _DAT_1802b0ce0);
      }
      if ((fVar22 != 0.0) || (NAN(fVar22))) {
        uVar6 = 0x1000;
        if (*(int *)(lVar2 + 0x2250) == 3) {
          uVar6 = 0x282;
        }
        bVar3 = FUN_180118a7b(uVar6);
        uVar6 = 0x2000;
        if (*(int *)(lVar2 + 0x2250) == 3) {
          uVar6 = 0x283;
        }
        cVar4 = FUN_180118a7b(uVar6);
        if ((uVar8 == 8) && (iVar5 = FUN_180141e5a(param_7,3), 0 < iVar5)) {
          fVar22 = fVar22 / DAT_1802dbb34;
          if (bVar3 != 0) {
            fVar22 = fVar22 / DAT_1802dc2dc;
          }
        }
        else if (((-((float)(_DAT_1802ac550 & (uint)fVar15) <= DAT_1802dbb34 && fVar15 != 0.0) |
                  bVar3) & 1) == 0) {
          fVar22 = fVar22 / DAT_1802dbb34;
        }
        else {
          fVar22 = *(float *)(&DAT_1802de750 + (ulonglong)(fVar22 < 0.0) * 4) / fVar15;
        }
        if (cVar4 != '\0') {
          fVar22 = fVar22 * DAT_1802dc2dc;
        }
        fVar22 = fVar22 + *(float *)(lVar2 + 0x2850);
        *(float *)(lVar2 + 0x2850) = fVar22;
        *(undefined1 *)(lVar2 + 0x2854) = 1;
      }
      else {
        fVar22 = *(float *)(lVar2 + 0x2850);
      }
      if ((*(int *)(lVar2 + 0x221c) == (int)param_2) && (*(char *)(lVar2 + 0x1688) == '\0')) {
LAB_18014011e:
        FUN_180107456();
      }
      else if (*(char *)(lVar2 + 0x2854) == '\x01') {
        fVar15 = (float)FUN_1801587bf(param_3,*param_4,param_5,param_6,uVar11,fVar23);
        if (((fVar15 < DAT_1802ac570) || (fVar22 <= 0.0)) && ((0.0 < fVar15 || (0.0 <= fVar22)))) {
          uVar7 = (ulonglong)(uVar8 ^ 8);
          fVar13 = fVar22 + fVar15;
          fVar18 = DAT_1802ac570;
          if (fVar13 <= DAT_1802ac570) {
            fVar18 = fVar13;
          }
          fVar18 = (float)(~-(uint)(fVar13 < 0.0) & (uint)fVar18);
          uVar16 = FUN_180158b48(param_3,fVar18,param_5,param_6,uVar11,fVar23);
          if ((param_8 & 0x40) == 0 && (uVar8 ^ 8) == 0) {
            uVar16 = FUN_180158eaa(param_7,param_3,uVar16);
          }
          fVar13 = (float)FUN_1801587bf(param_3,uVar16,param_5,param_6,uVar11,fVar23);
          if (fVar22 <= 0.0) {
            fVar15 = (float)FUN_180102463(fVar13 - fVar15,fVar22);
          }
          else {
            fVar15 = (float)FUN_1800eebe2();
          }
          *(float *)(lVar2 + 0x2850) = *(float *)(lVar2 + 0x2850) - fVar15;
          *(undefined1 *)(lVar2 + 0x2854) = 0;
          goto LAB_1801401f4;
        }
        *(undefined4 *)(lVar2 + 0x2850) = 0;
        *(undefined1 *)(lVar2 + 0x2854) = 0;
      }
    }
    else if (*(int *)(lVar2 + 0x169c) == 1) {
      if (*(char *)(lVar2 + 0x120) == '\0') goto LAB_18014011e;
      fVar15 = *(float *)(lVar2 + 0x118 + uVar9 * 4);
      if (*(char *)(lVar2 + 0x1688) == '\x01') {
        fVar13 = (float)FUN_1801587bf(param_3,*param_4,param_5,param_6,uVar11,fVar23);
        if (uVar10 != 0) {
          fVar13 = DAT_1802ac570 - fVar13;
        }
        fVar13 = (float)FUN_1800eebd5(fVar20,fVar21,fVar13);
        fVar17 = 0.0;
        if (((DAT_1802dbb2c * fVar24 + fVar13 + DAT_1802bb8e0 <= fVar15) && (uVar8 == 8)) &&
           (fVar15 <= fVar18 + fVar13 + DAT_1802ac570)) {
          fVar17 = fVar15 - fVar13;
        }
        *(float *)(lVar2 + 0x284c) = fVar17;
      }
      fVar18 = 0.0;
      if (0.0 < fVar22) {
        fVar22 = ((fVar15 - *(float *)(lVar2 + 0x284c)) - fVar20) / fVar22;
        fVar18 = DAT_1802ac570;
        if (fVar22 <= DAT_1802ac570) {
          fVar18 = fVar22;
        }
        fVar18 = (float)(~-(uint)(fVar22 < 0.0) & (uint)fVar18);
      }
      if (uVar10 != 0) {
        fVar18 = DAT_1802ac570 - fVar18;
      }
LAB_1801401f4:
      if ((param_8 & 0x200000) == 0 && (*(uint *)(lVar2 + 0x1fe4) & 0x800) == 0) {
        fVar15 = (float)FUN_180158b48(param_3,fVar18,param_5,param_6,uVar11,fVar23);
        if ((param_8 & 0x40) == 0 && uVar8 == 8) {
          fVar15 = (float)FUN_180158eaa(param_7,param_3,fVar15);
        }
        if ((*param_4 != fVar15) || (NAN(*param_4) || NAN(fVar15))) {
          *param_4 = fVar15;
          uVar6 = CONCAT71((int7)(uVar7 >> 8),1);
          goto LAB_180140213;
        }
      }
    }
  }
  uVar6 = 0;
LAB_180140213:
  fVar15 = DAT_1802ac570;
  if (DAT_1802ac570 <= fVar19) {
    fVar19 = (float)FUN_1801587bf(param_3,*param_4,param_5,param_6,uVar11,fVar23);
    if (uVar10 != 0) {
      fVar19 = fVar15 - fVar19;
    }
    fVar15 = (float)FUN_1800eebd5(fVar20,fVar21,fVar19);
    if (uVar10 == 0) {
      fVar19 = param_1[3] + DAT_1802df08c;
      fVar12 = fVar12 * DAT_1802dbb2c;
      fVar18 = param_1[1] + DAT_1802de650;
      *param_9 = fVar24 * DAT_1802dbb2c + fVar15;
      param_9[1] = fVar18;
      param_9[2] = fVar12 + fVar15;
      param_9[3] = fVar19;
    }
    else {
      fVar12 = fVar12 * DAT_1802dbb2c;
      fVar19 = param_1[2] + DAT_1802df08c;
      fVar24 = fVar24 * DAT_1802dbb2c;
      *param_9 = *param_1 + DAT_1802de650;
      param_9[1] = fVar24 + fVar15;
      param_9[2] = fVar19;
      param_9[3] = fVar12 + fVar15;
    }
  }
  else {
    uVar1 = *(undefined8 *)param_1;
    *(undefined8 *)param_9 = uVar1;
    *(undefined8 *)(param_9 + 2) = uVar1;
  }
  return uVar6;
}

