/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1013c095 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_1013c095(float *param_1,int param_2,uint param_3,double *param_4,double param_5,double param_6,
            undefined4 param_7,uint param_8,float *param_9)

{
  double dVar1;
  int iVar2;
  byte bVar3;
  char cVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  float10 fVar10;
  float fVar11;
  float fVar12;
  double dVar13;
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
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  
  iVar2 = DAT_1039d74c;
  uVar7 = param_8 & 0x100000;
  dVar1 = (double)(~-(ulonglong)(param_5 < param_6) & (ulonglong)(param_5 - param_6) |
                  (ulonglong)(param_6 - param_5) & -(ulonglong)(param_5 < param_6));
  fVar16 = (float)dVar1;
  uVar8 = uVar7 >> 0x14;
  fVar19 = (*(float *)((int)param_1 + (uVar7 >> 0x12) + 8) -
           *(float *)((int)param_1 + (uVar7 >> 0x12))) + _DAT_102b9550;
  uVar9 = param_3 & 0xfffffffe;
  fVar11 = *(float *)(DAT_1039d74c + 0xd50);
  if ((uVar9 != 8) && (_DAT_102b9558 <= dVar1)) {
    fVar10 = (float10)FUN_100fdbca(fVar19 / (DAT_1028b430 + fVar16),fVar11);
    fVar11 = (float)fVar10;
  }
  fVar10 = (float10)FUN_100ea38a(fVar11,fVar19);
  fVar21 = (float)fVar10;
  fVar14 = fVar19 - fVar21;
  fVar18 = param_1[uVar8] + DAT_102b8ac0;
  fVar23 = DAT_102b70e0 * fVar21;
  fVar20 = param_1[uVar8 + 2] + _DAT_102b9554;
  fVar15 = (float)(_DAT_1028f620 ^ (uint)fVar21);
  fVar11 = 0.0;
  fVar22 = 0.0;
  if ((param_8 & 0x20) != 0) {
    dVar13 = DAT_1028b438;
    if (uVar9 == 8) {
      iVar5 = FUN_1013db7c(param_7,3);
      dVar13 = (double)iVar5;
    }
    fVar10 = (float10)FUN_1026fab0(0xa0000000,0x3fb99999,SUB84(dVar13,0),
                                   (int)((ulonglong)dVar13 >> 0x20));
    fVar22 = (float)fVar10;
    fVar11 = *(float *)(iVar2 + 0xd58) * DAT_102b70e0;
    fVar10 = (float10)FUN_100fdbca(fVar14,0x3f800000);
    fVar11 = fVar11 / (float)fVar10;
  }
  fVar18 = fVar18 + fVar23;
  fVar20 = fVar20 - fVar23;
  uVar26 = SUB84(param_6,0);
  uVar27 = (undefined4)((ulonglong)param_6 >> 0x20);
  uVar24 = SUB84(param_5,0);
  uVar25 = (undefined4)((ulonglong)param_5 >> 0x20);
  if (*(int *)(iVar2 + 0x1528) == param_2) {
    if (*(int *)(iVar2 + 0x1548) - 2U < 2) {
      if (*(char *)(iVar2 + 0x1534) == '\x01') {
        *(undefined4 *)(iVar2 + 0x25d4) = 0;
        *(undefined1 *)(iVar2 + 0x25d8) = 0;
      }
      if (uVar7 == 0) {
        fVar10 = (float10)FUN_10117386(0);
        fVar14 = (float)fVar10;
      }
      else {
        fVar10 = (float10)FUN_10117386(1);
        fVar14 = (float)((uint)(float)fVar10 ^ _DAT_1028f620);
      }
      if ((fVar14 != 0.0) || (NAN(fVar14))) {
        uVar6 = 0x1000;
        if (*(int *)(iVar2 + 0x208c) == 3) {
          uVar6 = 0x282;
        }
        bVar3 = FUN_10113c70(uVar6);
        uVar6 = 0x2000;
        if (*(int *)(iVar2 + 0x208c) == 3) {
          uVar6 = 0x283;
        }
        cVar4 = FUN_10113c70(uVar6);
        if ((uVar9 == 8) && (iVar5 = FUN_1013db7c(param_7,3), 0 < iVar5)) {
          fVar14 = fVar14 / DAT_102b8c10;
          if (bVar3 != 0) {
            fVar14 = fVar14 / DAT_102b710c;
          }
        }
        else if (((fVar16 != 0.0 && (double)((ulonglong)dVar1 & _DAT_1028b420) <= DAT_102b9560) |
                 bVar3) == 1) {
          fVar14 = *(float *)(&DAT_102b8c18 + (uint)(fVar14 < 0.0) * 4) / fVar16;
        }
        else {
          fVar14 = fVar14 / DAT_102b8c10;
        }
        if (cVar4 != '\0') {
          fVar14 = fVar14 * DAT_102b710c;
        }
        fVar14 = fVar14 + *(float *)(iVar2 + 0x25d4);
        *(float *)(iVar2 + 0x25d4) = fVar14;
        *(undefined1 *)(iVar2 + 0x25d8) = 1;
      }
      else {
        fVar14 = *(float *)(iVar2 + 0x25d4);
      }
      if ((*(int *)(iVar2 + 0x2060) == param_2) && (*(char *)(iVar2 + 0x1534) == '\0')) {
        FUN_101028d8();
      }
      else if (*(char *)(iVar2 + 0x25d8) == '\x01') {
        fVar10 = (float10)FUN_101556be(param_3,SUB84(*param_4,0),(int)((ulonglong)*param_4 >> 0x20),
                                       uVar24,uVar25,uVar26,uVar27,fVar22,fVar11);
        fVar16 = (float)fVar10;
        if (((DAT_1028b430 <= fVar16) && (0.0 < fVar14)) || ((fVar16 <= 0.0 && (fVar14 < 0.0)))) {
          *(undefined4 *)(iVar2 + 0x25d4) = 0;
          *(undefined1 *)(iVar2 + 0x25d8) = 0;
          uVar6 = 0;
          goto LAB_1013c96f;
        }
        fVar17 = fVar14 + fVar16;
        fVar23 = DAT_1028b430;
        if (fVar17 <= DAT_1028b430) {
          fVar23 = fVar17;
        }
        fVar23 = (float)(~-(uint)(fVar17 < 0.0) & (uint)fVar23);
        fVar10 = (float10)FUN_10155b61(param_3,fVar23,uVar24,uVar25,uVar26,uVar27,fVar22,fVar11);
        dVar1 = (double)fVar10;
        if ((param_8 & 0x40) == 0 && uVar9 == 8) {
          fVar10 = (float10)FUN_10155ef7(param_7,param_3,dVar1);
          dVar1 = (double)fVar10;
        }
        fVar10 = (float10)FUN_101556be(param_3,SUB84(dVar1,0),(int)((ulonglong)dVar1 >> 0x20),uVar24
                                       ,uVar25,uVar26,uVar27,fVar22,fVar11);
        if (fVar14 <= 0.0) {
          fVar10 = (float10)FUN_100fdbca((float)fVar10 - fVar16,fVar14);
        }
        else {
          fVar10 = (float10)FUN_100ea38a((float)fVar10 - fVar16,fVar14);
        }
        *(float *)(iVar2 + 0x25d4) = *(float *)(iVar2 + 0x25d4) - (float)fVar10;
        *(undefined1 *)(iVar2 + 0x25d8) = 0;
LAB_1013c952:
        if ((param_8 & 0x200000) == 0 && (*(uint *)(iVar2 + 0x1e84) & 0x800) == 0) {
          fVar10 = (float10)FUN_10155b61(param_3,fVar23,uVar24,uVar25,uVar26,uVar27,fVar22,fVar11);
          dVar1 = (double)fVar10;
          if ((param_8 & 0x40) == 0 && uVar9 == 8) {
            fVar10 = (float10)FUN_10155ef7(param_7,param_3,dVar1);
            dVar1 = (double)fVar10;
          }
          if ((*param_4 != dVar1) || (NAN(*param_4) || NAN(dVar1))) {
            *param_4 = dVar1;
            uVar6 = CONCAT31((int3)(uVar9 >> 8),1);
            goto LAB_1013c96f;
          }
        }
        goto LAB_1013c96d;
      }
      uVar6 = 0;
      goto LAB_1013c96f;
    }
    if (*(int *)(iVar2 + 0x1548) == 1) {
      if (*(char *)(iVar2 + 0xec) != '\0') {
        fVar16 = *(float *)(iVar2 + 0xe4 + uVar8 * 4);
        if (*(char *)(iVar2 + 0x1534) == '\x01') {
          fVar10 = (float10)FUN_101556be(param_3,SUB84(*param_4,0),
                                         (int)((ulonglong)*param_4 >> 0x20),uVar24,uVar25,uVar26,
                                         uVar27,fVar22,fVar11,fVar20,fVar18,fVar22,fVar11);
          fVar17 = (float)fVar10;
          if (uVar7 != 0) {
            fVar17 = DAT_1028b430 - fVar17;
          }
          fVar10 = (float10)FUN_100ea365(fVar18,fVar20,fVar17);
          fVar17 = (float)fVar10;
          fVar12 = 0.0;
          if (((DAT_102b70e0 * fVar15 + fVar17 + DAT_102b8a50 <= fVar16) && (uVar9 == 8)) &&
             (fVar16 <= fVar23 + fVar17 + DAT_1028b430)) {
            fVar12 = fVar16 - fVar17;
          }
          *(float *)(iVar2 + 0x25d0) = fVar12;
        }
        fVar23 = 0.0;
        if (0.0 < fVar14) {
          fVar14 = ((fVar16 - *(float *)(iVar2 + 0x25d0)) - fVar18) / fVar14;
          fVar23 = DAT_1028b430;
          if (fVar14 <= DAT_1028b430) {
            fVar23 = fVar14;
          }
          fVar23 = (float)(~-(uint)(fVar14 < 0.0) & (uint)fVar23);
        }
        if (uVar7 != 0) {
          fVar23 = DAT_1028b430 - fVar23;
        }
        goto LAB_1013c952;
      }
      FUN_101028d8();
    }
  }
LAB_1013c96d:
  uVar6 = 0;
LAB_1013c96f:
  if (DAT_1028b430 <= fVar19) {
    fVar10 = (float10)FUN_101556be(param_3,SUB84(*param_4,0),(int)((ulonglong)*param_4 >> 0x20),
                                   uVar24,uVar25,uVar26,uVar27,fVar22,fVar11,fVar20,fVar18);
    fVar11 = (float)fVar10;
    if (uVar7 != 0) {
      fVar11 = DAT_1028b430 - fVar11;
    }
    fVar10 = (float10)FUN_100ea365(fVar18,fVar20,fVar11);
    fVar11 = (float)fVar10;
    if (uVar7 == 0) {
      fVar16 = param_1[3] + _DAT_102b9554;
      fVar21 = fVar21 * DAT_102b70e0;
      fVar19 = param_1[1] + DAT_102b8ac0;
      *param_9 = fVar15 * DAT_102b70e0 + fVar11;
      param_9[1] = fVar19;
      param_9[2] = fVar21 + fVar11;
      param_9[3] = fVar16;
    }
    else {
      fVar21 = fVar21 * DAT_102b70e0;
      fVar16 = param_1[2] + _DAT_102b9554;
      fVar15 = fVar15 * DAT_102b70e0;
      *param_9 = *param_1 + DAT_102b8ac0;
      param_9[1] = fVar15 + fVar11;
      param_9[2] = fVar16;
      param_9[3] = fVar21 + fVar11;
    }
  }
  else {
    fVar11 = *param_1;
    fVar16 = param_1[1];
    *param_9 = fVar11;
    param_9[1] = fVar16;
    param_9[2] = fVar11;
    param_9[3] = fVar16;
  }
  return uVar6;
}

