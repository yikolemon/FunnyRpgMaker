/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18013f460 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_18013f460(float *param_1,ulonglong param_2,uint param_3,longlong *param_4,ulonglong param_5,
             ulonglong param_6,undefined8 param_7,uint param_8,float *param_9)

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
  ulonglong uVar10;
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
  
  lVar5 = DAT_180419160;
  uVar7 = param_2 & 0xffffffff;
  uVar11 = param_8 & 0x100000;
  uVar9 = (ulonglong)(uVar11 >> 0x14);
  uVar8 = param_3 & 0xfffffffe;
  uVar10 = param_6 - param_5;
  if (param_6 < param_5) {
    uVar10 = param_5 - param_6;
  }
  fVar17 = (*(float *)((longlong)param_1 + (ulonglong)(uVar11 >> 0x12) + 8) -
           *(float *)((longlong)param_1 + (ulonglong)(uVar11 >> 0x12))) + DAT_1802df088;
  uVar12 = *(undefined4 *)(DAT_180419160 + 0xe38);
  if (uVar8 != 8) {
    uVar12 = FUN_180102463(fVar17 / (DAT_1802ac570 + (float)uVar10));
  }
  fVar13 = (float)FUN_1800eebe2(uVar12,fVar17);
  fVar20 = fVar17 - fVar13;
  fVar18 = param_1[uVar9] + DAT_1802de650;
  fVar21 = DAT_1802dbb2c * fVar13;
  fVar19 = param_1[uVar9 + 2] + DAT_1802df08c;
  fVar23 = (float)(_DAT_1802b0ce0 ^ (uint)fVar13);
  fVar24 = 0.0;
  uVar12 = 0;
  if ((param_8 & 0x20) != 0) {
    fVar24 = DAT_1802ac570;
    if (uVar8 == 8) {
      iVar4 = FUN_180141e5a(param_7,3);
      fVar24 = (float)iVar4;
    }
    uVar12 = FUN_1802886b0(DAT_1802dc268,fVar24);
    fVar24 = *(float *)(lVar5 + 0xe40) * DAT_1802dbb2c;
    fVar14 = (float)FUN_180102463(fVar20,DAT_1802ac570);
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
        fVar20 = (float)FUN_18011c24b(0);
      }
      else {
        uVar15 = FUN_18011c24b(1);
        fVar20 = (float)(uVar15 ^ _DAT_1802b0ce0);
      }
      if ((fVar20 != 0.0) || (NAN(fVar20))) {
        uVar6 = 0x1000;
        if (*(int *)(lVar5 + 0x2250) == 3) {
          uVar6 = 0x282;
        }
        bVar2 = FUN_180118a7b(uVar6);
        uVar6 = 0x2000;
        if (*(int *)(lVar5 + 0x2250) == 3) {
          uVar6 = 0x283;
        }
        cVar3 = FUN_180118a7b(uVar6);
        if ((uVar8 == 8) && (iVar4 = FUN_180141e5a(param_7,3), 0 < iVar4)) {
          fVar20 = fVar20 / DAT_1802dbb34;
          if (bVar2 != 0) {
            fVar20 = fVar20 / DAT_1802dc2dc;
          }
        }
        else if ((99 < uVar10 - 1 & (bVar2 ^ 1)) == 0) {
          fVar20 = *(float *)(&DAT_1802de750 + (ulonglong)(fVar20 < 0.0) * 4) / (float)uVar10;
        }
        else {
          fVar20 = fVar20 / DAT_1802dbb34;
        }
        if (cVar3 != '\0') {
          fVar20 = fVar20 * DAT_1802dc2dc;
        }
        fVar20 = fVar20 + *(float *)(lVar5 + 0x2850);
        *(float *)(lVar5 + 0x2850) = fVar20;
        *(undefined1 *)(lVar5 + 0x2854) = 1;
      }
      else {
        fVar20 = *(float *)(lVar5 + 0x2850);
      }
      if ((*(int *)(lVar5 + 0x221c) == (int)param_2) && (*(char *)(lVar5 + 0x1688) == '\0')) {
LAB_18013f95a:
        FUN_180107456();
      }
      else if (*(char *)(lVar5 + 0x2854) == '\x01') {
        fVar14 = (float)FUN_1801582cf(param_3,*param_4,param_5,param_6,uVar12,fVar24);
        if (((fVar14 < DAT_1802ac570) || (fVar20 <= 0.0)) && ((0.0 < fVar14 || (0.0 <= fVar20)))) {
          uVar7 = (ulonglong)(uVar8 ^ 8);
          fVar22 = fVar20 + fVar14;
          fVar21 = DAT_1802ac570;
          if (fVar22 <= DAT_1802ac570) {
            fVar21 = fVar22;
          }
          fVar21 = (float)(~-(uint)(fVar22 < 0.0) & (uint)fVar21);
          uVar6 = FUN_18015848d(param_3,fVar21,param_5,param_6,uVar12,fVar24);
          if ((param_8 & 0x40) == 0 && (uVar8 ^ 8) == 0) {
            uVar6 = FUN_180158684(param_7,param_3,uVar6);
          }
          fVar22 = (float)FUN_1801582cf(param_3,uVar6,param_5,param_6,uVar12,fVar24);
          if (fVar20 <= 0.0) {
            fVar20 = (float)FUN_180102463(fVar22 - fVar14,fVar20);
          }
          else {
            fVar20 = (float)FUN_1800eebe2();
          }
          *(float *)(lVar5 + 0x2850) = *(float *)(lVar5 + 0x2850) - fVar20;
          *(undefined1 *)(lVar5 + 0x2854) = 0;
          goto LAB_18013fa39;
        }
        *(undefined4 *)(lVar5 + 0x2850) = 0;
        *(undefined1 *)(lVar5 + 0x2854) = 0;
      }
    }
    else if (*(int *)(lVar5 + 0x169c) == 1) {
      if (*(char *)(lVar5 + 0x120) == '\0') goto LAB_18013f95a;
      fVar14 = *(float *)(lVar5 + 0x118 + uVar9 * 4);
      if (*(char *)(lVar5 + 0x1688) == '\x01') {
        fVar22 = (float)FUN_1801582cf(param_3,*param_4,param_5,param_6,uVar12,fVar24);
        if (uVar11 != 0) {
          fVar22 = DAT_1802ac570 - fVar22;
        }
        fVar22 = (float)FUN_1800eebd5(fVar18,fVar19,fVar22);
        fVar16 = 0.0;
        if (((DAT_1802dbb2c * fVar23 + fVar22 + DAT_1802bb8e0 <= fVar14) && (uVar8 == 8)) &&
           (fVar14 <= fVar21 + fVar22 + DAT_1802ac570)) {
          fVar16 = fVar14 - fVar22;
        }
        *(float *)(lVar5 + 0x284c) = fVar16;
      }
      fVar21 = 0.0;
      if (0.0 < fVar20) {
        fVar20 = ((fVar14 - *(float *)(lVar5 + 0x284c)) - fVar18) / fVar20;
        fVar21 = DAT_1802ac570;
        if (fVar20 <= DAT_1802ac570) {
          fVar21 = fVar20;
        }
        fVar21 = (float)(~-(uint)(fVar20 < 0.0) & (uint)fVar21);
      }
      if (uVar11 != 0) {
        fVar21 = DAT_1802ac570 - fVar21;
      }
LAB_18013fa39:
      if ((param_8 & 0x200000) == 0 && (*(uint *)(lVar5 + 0x1fe4) & 0x800) == 0) {
        lVar5 = FUN_18015848d(param_3,fVar21,param_5,param_6,uVar12,fVar24);
        if ((param_8 & 0x40) == 0 && uVar8 == 8) {
          lVar5 = FUN_180158684(param_7,param_3,lVar5);
        }
        if (*param_4 != lVar5) {
          *param_4 = lVar5;
          uVar6 = CONCAT71((int7)(uVar7 >> 8),1);
          goto LAB_18013faa8;
        }
      }
    }
  }
  uVar6 = 0;
LAB_18013faa8:
  fVar20 = DAT_1802ac570;
  if (DAT_1802ac570 <= fVar17) {
    fVar17 = (float)FUN_1801582cf(param_3,*param_4,param_5,param_6,uVar12,fVar24);
    if (uVar11 != 0) {
      fVar17 = fVar20 - fVar17;
    }
    fVar17 = (float)FUN_1800eebd5(fVar18,fVar19,fVar17);
    if (uVar11 == 0) {
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
  return uVar6;
}

