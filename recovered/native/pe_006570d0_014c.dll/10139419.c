/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10139419 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_10139419(float *param_1,int param_2,uint param_3,int *param_4,uint param_5,uint param_6,
            undefined4 param_7,uint param_8,float *param_9)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  float10 fVar10;
  float fVar11;
  double dVar12;
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
  float fVar23;
  
  iVar4 = DAT_1039d74c;
  uVar5 = param_8 & 0x100000;
  uVar7 = uVar5 >> 0x14;
  uVar9 = param_3 & 0xfffffffe;
  uVar8 = param_6 - param_5;
  if (param_6 < param_5) {
    uVar8 = param_5 - param_6;
  }
  fVar16 = (float)((double)((ulonglong)uVar8 | (ulonglong)DAT_1028f6c0) - DAT_1028f6b0);
  fVar13 = (*(float *)((int)param_1 + (uVar5 >> 0x12) + 8) -
           *(float *)((int)param_1 + (uVar5 >> 0x12))) + _DAT_102b9550;
  fVar20 = *(float *)(DAT_1039d74c + 0xd50);
  if (uVar9 != 8) {
    fVar10 = (float10)FUN_100fdbca(fVar13 / (DAT_1028b430 + fVar16),fVar20);
    fVar20 = (float)fVar10;
  }
  fVar10 = (float10)FUN_100ea38a(fVar20,fVar13);
  fVar20 = (float)fVar10;
  fVar14 = fVar13 - fVar20;
  fVar18 = param_1[uVar7] + DAT_102b8ac0;
  fVar23 = DAT_102b70e0 * fVar20;
  fVar19 = param_1[uVar7 + 2] + _DAT_102b9554;
  fVar15 = (float)(_DAT_1028f620 ^ (uint)fVar20);
  fVar21 = 0.0;
  fVar22 = 0.0;
  if ((param_8 & 0x20) != 0) {
    dVar12 = DAT_1028b438;
    if (uVar9 == 8) {
      iVar3 = FUN_1013db7c(param_7,3);
      dVar12 = (double)iVar3;
    }
    fVar10 = (float10)FUN_1026fab0(0xa0000000,0x3fb99999,dVar12);
    fVar22 = (float)fVar10;
    fVar21 = *(float *)(iVar4 + 0xd58) * DAT_102b70e0;
    fVar10 = (float10)FUN_100fdbca(fVar14,0x3f800000);
    fVar21 = fVar21 / (float)fVar10;
  }
  fVar18 = fVar18 + fVar23;
  fVar19 = fVar19 - fVar23;
  if (*(int *)(iVar4 + 0x1528) == param_2) {
    if (*(int *)(iVar4 + 0x1548) - 2U < 2) {
      if (*(char *)(iVar4 + 0x1534) == '\x01') {
        *(undefined4 *)(iVar4 + 0x25d4) = 0;
        *(undefined1 *)(iVar4 + 0x25d8) = 0;
      }
      if (uVar5 == 0) {
        fVar10 = (float10)FUN_10117386(0);
        fVar14 = (float)fVar10;
      }
      else {
        fVar10 = (float10)FUN_10117386(1);
        fVar14 = (float)((uint)(float)fVar10 ^ _DAT_1028f620);
      }
      if ((fVar14 != 0.0) || (NAN(fVar14))) {
        uVar6 = 0x1000;
        if (*(int *)(iVar4 + 0x208c) == 3) {
          uVar6 = 0x282;
        }
        cVar1 = FUN_10113c70(uVar6);
        uVar6 = 0x2000;
        if (*(int *)(iVar4 + 0x208c) == 3) {
          uVar6 = 0x283;
        }
        uVar2 = FUN_10113c70(uVar6);
        uVar7 = (uint)CONCAT11(cVar1,uVar2);
        if ((uVar9 == 8) && (iVar3 = FUN_1013db7c(param_7,3), 0 < iVar3)) {
          fVar14 = fVar14 / DAT_102b8c10;
          if (cVar1 != '\0') {
            fVar14 = fVar14 / DAT_102b710c;
          }
        }
        else {
          uVar7 = CONCAT11(cVar1,uVar2) ^ 0x100;
          if ((99 < uVar8 - 1 & (byte)(uVar7 >> 8)) == 0) {
            fVar14 = *(float *)(&DAT_102b8c18 + (uint)(fVar14 < 0.0) * 4) / fVar16;
          }
          else {
            fVar14 = fVar14 / DAT_102b8c10;
          }
        }
        if ((char)uVar7 != '\0') {
          fVar14 = fVar14 * DAT_102b710c;
        }
        fVar14 = fVar14 + *(float *)(iVar4 + 0x25d4);
        *(float *)(iVar4 + 0x25d4) = fVar14;
        *(undefined1 *)(iVar4 + 0x25d8) = 1;
      }
      else {
        fVar14 = *(float *)(iVar4 + 0x25d4);
      }
      if ((*(int *)(iVar4 + 0x2060) == param_2) && (*(char *)(iVar4 + 0x1534) == '\0')) {
        FUN_101028d8();
      }
      else if (*(char *)(iVar4 + 0x25d8) == '\x01') {
        fVar10 = (float10)FUN_101535d7(param_3,*param_4,param_5,param_6,fVar22,fVar21);
        fVar16 = (float)fVar10;
        if (((DAT_1028b430 <= fVar16) && (0.0 < fVar14)) || ((fVar16 <= 0.0 && (fVar14 < 0.0)))) {
          *(undefined4 *)(iVar4 + 0x25d4) = 0;
          *(undefined1 *)(iVar4 + 0x25d8) = 0;
          uVar6 = 0;
          goto LAB_10139cc7;
        }
        fVar17 = fVar14 + fVar16;
        fVar23 = DAT_1028b430;
        if (fVar17 <= DAT_1028b430) {
          fVar23 = fVar17;
        }
        fVar23 = (float)(~-(uint)(fVar17 < 0.0) & (uint)fVar23);
        uVar6 = FUN_10153772(param_3,fVar23,param_5,param_6,fVar22,fVar21);
        if ((param_8 & 0x40) == 0 && uVar9 == 8) {
          uVar6 = FUN_10153915(param_7,param_3,uVar6);
        }
        fVar10 = (float10)FUN_101535d7(param_3,uVar6,param_5,param_6,fVar22,fVar21);
        if (fVar14 <= 0.0) {
          fVar10 = (float10)FUN_100fdbca((float)fVar10 - fVar16,fVar14);
        }
        else {
          fVar10 = (float10)FUN_100ea38a((float)fVar10 - fVar16,fVar14);
        }
        *(float *)(iVar4 + 0x25d4) = *(float *)(iVar4 + 0x25d4) - (float)fVar10;
        *(undefined1 *)(iVar4 + 0x25d8) = 0;
LAB_10139ca3:
        if ((param_8 & 0x200000) == 0 && (*(uint *)(iVar4 + 0x1e84) & 0x800) == 0) {
          iVar4 = FUN_10153772(param_3,fVar23,param_5,param_6,fVar22,fVar21,fVar19,fVar18);
          if ((param_8 & 0x40) == 0 && uVar9 == 8) {
            iVar4 = FUN_10153915(param_7,param_3,iVar4);
          }
          if (*param_4 == iVar4) {
            uVar6 = 0;
          }
          else {
            *param_4 = iVar4;
            uVar6 = 1;
          }
          goto LAB_10139cc7;
        }
        goto LAB_10139cbe;
      }
      uVar6 = 0;
      goto LAB_10139cc7;
    }
    if (*(int *)(iVar4 + 0x1548) == 1) {
      if (*(char *)(iVar4 + 0xec) != '\0') {
        fVar16 = *(float *)(iVar4 + 0xe4 + uVar7 * 4);
        if (*(char *)(iVar4 + 0x1534) == '\x01') {
          fVar10 = (float10)FUN_101535d7(param_3,*param_4,param_5,param_6,fVar22,fVar21,fVar19,
                                         fVar18,fVar22,fVar21);
          fVar17 = (float)fVar10;
          if (uVar5 != 0) {
            fVar17 = DAT_1028b430 - fVar17;
          }
          fVar10 = (float10)FUN_100ea365(fVar18,fVar19,fVar17);
          fVar17 = (float)fVar10;
          fVar11 = 0.0;
          if (((DAT_102b70e0 * fVar15 + fVar17 + DAT_102b8a50 <= fVar16) && (uVar9 == 8)) &&
             (fVar16 <= fVar23 + fVar17 + DAT_1028b430)) {
            fVar11 = fVar16 - fVar17;
          }
          *(float *)(iVar4 + 0x25d0) = fVar11;
        }
        fVar23 = 0.0;
        if (0.0 < fVar14) {
          fVar14 = ((fVar16 - *(float *)(iVar4 + 0x25d0)) - fVar18) / fVar14;
          fVar23 = DAT_1028b430;
          if (fVar14 <= DAT_1028b430) {
            fVar23 = fVar14;
          }
          fVar23 = (float)(~-(uint)(fVar14 < 0.0) & (uint)fVar23);
        }
        if (uVar5 != 0) {
          fVar23 = DAT_1028b430 - fVar23;
        }
        goto LAB_10139ca3;
      }
      FUN_101028d8();
    }
  }
LAB_10139cbe:
  uVar6 = 0;
LAB_10139cc7:
  if (DAT_1028b430 <= fVar13) {
    fVar10 = (float10)FUN_101535d7(param_3,*param_4,param_5,param_6,fVar22,fVar21,fVar19,fVar18);
    fVar13 = (float)fVar10;
    if (uVar5 != 0) {
      fVar13 = DAT_1028b430 - fVar13;
    }
    fVar10 = (float10)FUN_100ea365(fVar18,fVar19,fVar13);
    fVar13 = (float)fVar10;
    if (uVar5 == 0) {
      fVar16 = param_1[3] + _DAT_102b9554;
      fVar20 = fVar20 * DAT_102b70e0;
      fVar22 = param_1[1] + DAT_102b8ac0;
      *param_9 = fVar15 * DAT_102b70e0 + fVar13;
      param_9[1] = fVar22;
      param_9[2] = fVar20 + fVar13;
      param_9[3] = fVar16;
    }
    else {
      fVar20 = fVar20 * DAT_102b70e0;
      fVar16 = param_1[2] + _DAT_102b9554;
      fVar15 = fVar15 * DAT_102b70e0;
      *param_9 = *param_1 + DAT_102b8ac0;
      param_9[1] = fVar15 + fVar13;
      param_9[2] = fVar16;
      param_9[3] = fVar20 + fVar13;
    }
  }
  else {
    fVar20 = *param_1;
    fVar13 = param_1[1];
    *param_9 = fVar20;
    param_9[1] = fVar13;
    param_9[2] = fVar20;
    param_9[3] = fVar13;
  }
  return uVar6;
}

