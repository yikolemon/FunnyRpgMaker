/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1013b52c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_1013b52c(float *param_1,int param_2,uint param_3,float *param_4,float param_5,float param_6,
            undefined4 param_7,uint param_8,float *param_9)

{
  int iVar1;
  byte bVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  float10 fVar9;
  float fVar10;
  double dVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  
  iVar1 = DAT_1039d74c;
  uVar4 = param_8 & 0x100000;
  uVar7 = uVar4 >> 0x14;
  uVar8 = param_3 & 0xfffffffe;
  fVar14 = (float)(~-(uint)(param_5 < param_6) & (uint)(param_5 - param_6) |
                  (uint)(param_6 - param_5) & -(uint)(param_5 < param_6));
  fVar15 = (*(float *)((int)param_1 + (uVar4 >> 0x12) + 8) -
           *(float *)((int)param_1 + (uVar4 >> 0x12))) + _DAT_102b9550;
  fVar19 = *(float *)(DAT_1039d74c + 0xd50);
  if ((uVar8 != 8) && (0.0 <= fVar14)) {
    fVar9 = (float10)FUN_100fdbca(fVar15 / (DAT_1028b430 + fVar14),fVar19);
    fVar19 = (float)fVar9;
  }
  fVar9 = (float10)FUN_100ea38a(fVar19,fVar15);
  fVar19 = (float)fVar9;
  fVar12 = fVar15 - fVar19;
  fVar17 = param_1[uVar7] + DAT_102b8ac0;
  fVar22 = DAT_102b70e0 * fVar19;
  fVar18 = param_1[uVar7 + 2] + _DAT_102b9554;
  fVar13 = (float)(_DAT_1028f620 ^ (uint)fVar19);
  fVar20 = 0.0;
  fVar21 = 0.0;
  if ((param_8 & 0x20) != 0) {
    dVar11 = DAT_1028b438;
    if (uVar8 == 8) {
      iVar5 = FUN_1013db7c(param_7,3);
      dVar11 = (double)iVar5;
    }
    fVar9 = (float10)FUN_1026fab0(0xa0000000,0x3fb99999,dVar11);
    fVar21 = (float)fVar9;
    fVar20 = *(float *)(iVar1 + 0xd58) * DAT_102b70e0;
    fVar9 = (float10)FUN_100fdbca(fVar12,0x3f800000);
    fVar20 = fVar20 / (float)fVar9;
  }
  fVar17 = fVar17 + fVar22;
  fVar18 = fVar18 - fVar22;
  if (*(int *)(iVar1 + 0x1528) == param_2) {
    if (*(int *)(iVar1 + 0x1548) - 2U < 2) {
      if (*(char *)(iVar1 + 0x1534) == '\x01') {
        *(undefined4 *)(iVar1 + 0x25d4) = 0;
        *(undefined1 *)(iVar1 + 0x25d8) = 0;
      }
      if (uVar4 == 0) {
        fVar9 = (float10)FUN_10117386(0);
        fVar12 = (float)fVar9;
      }
      else {
        fVar9 = (float10)FUN_10117386(1);
        fVar12 = (float)((uint)(float)fVar9 ^ _DAT_1028f620);
      }
      if ((fVar12 != 0.0) || (NAN(fVar12))) {
        uVar6 = 0x1000;
        if (*(int *)(iVar1 + 0x208c) == 3) {
          uVar6 = 0x282;
        }
        bVar2 = FUN_10113c70(uVar6);
        uVar6 = 0x2000;
        if (*(int *)(iVar1 + 0x208c) == 3) {
          uVar6 = 0x283;
        }
        cVar3 = FUN_10113c70(uVar6);
        if ((uVar8 == 8) && (iVar5 = FUN_1013db7c(param_7,3), 0 < iVar5)) {
          fVar12 = fVar12 / DAT_102b8c10;
          if (bVar2 != 0) {
            fVar12 = fVar12 / DAT_102b710c;
          }
        }
        else if (((-((float)(_DAT_1028b410 & (uint)fVar14) <= DAT_102b8c10 && fVar14 != 0.0) | bVar2
                  ) & 1) == 0) {
          fVar12 = fVar12 / DAT_102b8c10;
        }
        else {
          fVar12 = *(float *)(&DAT_102b8c18 + (uint)(fVar12 < 0.0) * 4) / fVar14;
        }
        if (cVar3 != '\0') {
          fVar12 = fVar12 * DAT_102b710c;
        }
        fVar12 = fVar12 + *(float *)(iVar1 + 0x25d4);
        *(float *)(iVar1 + 0x25d4) = fVar12;
        *(undefined1 *)(iVar1 + 0x25d8) = 1;
      }
      else {
        fVar12 = *(float *)(iVar1 + 0x25d4);
      }
      if ((*(int *)(iVar1 + 0x2060) == param_2) && (*(char *)(iVar1 + 0x1534) == '\0')) {
        FUN_101028d8();
      }
      else if (*(char *)(iVar1 + 0x25d8) == '\x01') {
        fVar9 = (float10)FUN_10154e41(param_3,*param_4,param_5,param_6,fVar21,fVar20);
        fVar14 = (float)fVar9;
        if (((DAT_1028b430 <= fVar14) && (0.0 < fVar12)) || ((fVar14 <= 0.0 && (fVar12 < 0.0)))) {
          *(undefined4 *)(iVar1 + 0x25d4) = 0;
          *(undefined1 *)(iVar1 + 0x25d8) = 0;
          uVar6 = 0;
          goto LAB_1013be52;
        }
        fVar16 = fVar12 + fVar14;
        fVar22 = DAT_1028b430;
        if (fVar16 <= DAT_1028b430) {
          fVar22 = fVar16;
        }
        fVar22 = (float)(~-(uint)(fVar16 < 0.0) & (uint)fVar22);
        fVar9 = (float10)FUN_10155274(param_3,fVar22,param_5,param_6,fVar21,fVar20);
        fVar16 = (float)fVar9;
        if ((param_8 & 0x40) == 0 && uVar8 == 8) {
          fVar9 = (float10)FUN_10155601(param_7,param_3,fVar16);
          fVar16 = (float)fVar9;
        }
        fVar9 = (float10)FUN_10154e41(param_3,fVar16,param_5,param_6,fVar21,fVar20);
        if (fVar12 <= 0.0) {
          fVar9 = (float10)FUN_100fdbca((float)fVar9 - fVar14,fVar12);
        }
        else {
          fVar9 = (float10)FUN_100ea38a((float)fVar9 - fVar14,fVar12);
        }
        *(float *)(iVar1 + 0x25d4) = *(float *)(iVar1 + 0x25d4) - (float)fVar9;
        *(undefined1 *)(iVar1 + 0x25d8) = 0;
LAB_1013be35:
        if ((param_8 & 0x200000) == 0 && (*(uint *)(iVar1 + 0x1e84) & 0x800) == 0) {
          fVar9 = (float10)FUN_10155274(param_3,fVar22,param_5,param_6,fVar21,fVar20,fVar18,fVar17);
          fVar14 = (float)fVar9;
          if ((param_8 & 0x40) == 0 && uVar8 == 8) {
            fVar9 = (float10)FUN_10155601(param_7,param_3,fVar14);
            fVar14 = (float)fVar9;
          }
          if ((*param_4 != fVar14) || (NAN(*param_4) || NAN(fVar14))) {
            *param_4 = fVar14;
            uVar6 = 1;
            goto LAB_1013be52;
          }
        }
        goto LAB_1013be50;
      }
      uVar6 = 0;
      goto LAB_1013be52;
    }
    if (*(int *)(iVar1 + 0x1548) == 1) {
      if (*(char *)(iVar1 + 0xec) != '\0') {
        fVar14 = *(float *)(iVar1 + 0xe4 + uVar7 * 4);
        if (*(char *)(iVar1 + 0x1534) == '\x01') {
          fVar9 = (float10)FUN_10154e41(param_3,*param_4,param_5,param_6,fVar21,fVar20,fVar18,fVar17
                                        ,fVar21,fVar20);
          fVar16 = (float)fVar9;
          if (uVar4 != 0) {
            fVar16 = DAT_1028b430 - fVar16;
          }
          fVar9 = (float10)FUN_100ea365(fVar17,fVar18,fVar16);
          fVar16 = (float)fVar9;
          fVar10 = 0.0;
          if (((DAT_102b70e0 * fVar13 + fVar16 + DAT_102b8a50 <= fVar14) && (uVar8 == 8)) &&
             (fVar14 <= fVar22 + fVar16 + DAT_1028b430)) {
            fVar10 = fVar14 - fVar16;
          }
          *(float *)(iVar1 + 0x25d0) = fVar10;
        }
        fVar22 = 0.0;
        if (0.0 < fVar12) {
          fVar12 = ((fVar14 - *(float *)(iVar1 + 0x25d0)) - fVar17) / fVar12;
          fVar22 = DAT_1028b430;
          if (fVar12 <= DAT_1028b430) {
            fVar22 = fVar12;
          }
          fVar22 = (float)(~-(uint)(fVar12 < 0.0) & (uint)fVar22);
        }
        if (uVar4 != 0) {
          fVar22 = DAT_1028b430 - fVar22;
        }
        goto LAB_1013be35;
      }
      FUN_101028d8();
    }
  }
LAB_1013be50:
  uVar6 = 0;
LAB_1013be52:
  if (DAT_1028b430 <= fVar15) {
    fVar9 = (float10)FUN_10154e41(param_3,*param_4,param_5,param_6,fVar21,fVar20,fVar18,fVar17);
    fVar14 = (float)fVar9;
    if (uVar4 != 0) {
      fVar14 = DAT_1028b430 - fVar14;
    }
    fVar9 = (float10)FUN_100ea365(fVar17,fVar18,fVar14);
    fVar14 = (float)fVar9;
    if (uVar4 == 0) {
      fVar15 = param_1[3] + _DAT_102b9554;
      fVar19 = fVar19 * DAT_102b70e0;
      fVar21 = param_1[1] + DAT_102b8ac0;
      *param_9 = fVar13 * DAT_102b70e0 + fVar14;
      param_9[1] = fVar21;
      param_9[2] = fVar19 + fVar14;
      param_9[3] = fVar15;
    }
    else {
      fVar19 = fVar19 * DAT_102b70e0;
      fVar15 = param_1[2] + _DAT_102b9554;
      fVar13 = fVar13 * DAT_102b70e0;
      *param_9 = *param_1 + DAT_102b8ac0;
      param_9[1] = fVar13 + fVar14;
      param_9[2] = fVar15;
      param_9[3] = fVar19 + fVar14;
    }
  }
  else {
    fVar19 = *param_1;
    fVar14 = param_1[1];
    *param_9 = fVar19;
    param_9[1] = fVar14;
    param_9[2] = fVar19;
    param_9[3] = fVar14;
  }
  return uVar6;
}

