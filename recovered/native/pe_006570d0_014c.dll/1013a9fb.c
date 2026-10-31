/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1013a9fb */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_1013a9fb(float *param_1,int param_2,uint param_3,longlong *param_4,uint param_5,
                 uint param_6,uint param_7,uint param_8,undefined4 param_9,uint param_10,
                 float *param_11)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  byte bVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  uint uVar9;
  uint uVar10;
  bool bVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  float10 fVar15;
  float fVar16;
  double dVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined8 uVar29;
  longlong lVar30;
  
  iVar3 = DAT_1039d74c;
  uVar7 = param_10 & 0x100000;
  uVar9 = uVar7 >> 0x14;
  uVar10 = param_3 & 0xfffffffe;
  uVar1 = (uint)(param_6 < param_8 || param_6 - param_8 < (uint)(param_5 < param_7));
  uVar2 = -uVar1;
  uVar13 = param_5 - param_7 ^ uVar2;
  iVar14 = uVar13 + uVar1;
  iVar12 = (((param_6 - param_8) - (uint)(param_5 < param_7) ^ uVar2) + uVar1) -
           (uint)(uVar13 < uVar2);
  fVar21 = (float)CONCAT44(iVar12,iVar14) + *(float *)(&DAT_102b7070 + (iVar12 >> 0x1f) * -4);
  fVar18 = (*(float *)((int)param_1 + (uVar7 >> 0x12) + 8) -
           *(float *)((int)param_1 + (uVar7 >> 0x12))) + _DAT_102b9550;
  fVar25 = *(float *)(DAT_1039d74c + 0xd50);
  if (uVar10 != 8) {
    fVar15 = (float10)FUN_100fdbca(fVar18 / (DAT_1028b430 + fVar21),fVar25);
    fVar25 = (float)fVar15;
  }
  fVar15 = (float10)FUN_100ea38a(fVar25,fVar18);
  fVar25 = (float)fVar15;
  fVar19 = fVar18 - fVar25;
  fVar23 = param_1[uVar9] + DAT_102b8ac0;
  fVar28 = DAT_102b70e0 * fVar25;
  fVar24 = param_1[uVar9 + 2] + _DAT_102b9554;
  fVar20 = (float)(_DAT_1028f620 ^ (uint)fVar25);
  fVar26 = 0.0;
  fVar27 = 0.0;
  if ((param_10 & 0x20) != 0) {
    dVar17 = DAT_1028b438;
    if (uVar10 == 8) {
      iVar6 = FUN_1013db7c(param_9,3);
      dVar17 = (double)iVar6;
    }
    fVar15 = (float10)FUN_1026fab0(0xa0000000,0x3fb99999,dVar17);
    fVar27 = (float)fVar15;
    fVar26 = *(float *)(iVar3 + 0xd58) * DAT_102b70e0;
    fVar15 = (float10)FUN_100fdbca(fVar19,0x3f800000);
    fVar26 = fVar26 / (float)fVar15;
  }
  fVar23 = fVar23 + fVar28;
  fVar24 = fVar24 - fVar28;
  if (*(int *)(iVar3 + 0x1528) != param_2) {
    bVar11 = false;
    goto LAB_1013b304;
  }
  if (*(int *)(iVar3 + 0x1548) - 2U < 2) {
    if (*(char *)(iVar3 + 0x1534) == '\x01') {
      *(undefined4 *)(iVar3 + 0x25d4) = 0;
      *(undefined1 *)(iVar3 + 0x25d8) = 0;
    }
    if (uVar7 == 0) {
      fVar15 = (float10)FUN_10117386(0);
      fVar19 = (float)fVar15;
    }
    else {
      fVar15 = (float10)FUN_10117386(1);
      fVar19 = (float)((uint)(float)fVar15 ^ _DAT_1028f620);
    }
    if ((fVar19 != 0.0) || (NAN(fVar19))) {
      uVar8 = 0x1000;
      if (*(int *)(iVar3 + 0x208c) == 3) {
        uVar8 = 0x282;
      }
      bVar4 = FUN_10113c70(uVar8);
      uVar8 = 0x2000;
      if (*(int *)(iVar3 + 0x208c) == 3) {
        uVar8 = 0x283;
      }
      cVar5 = FUN_10113c70(uVar8);
      if ((uVar10 == 8) && (iVar6 = FUN_1013db7c(param_9,3), 0 < iVar6)) {
        fVar19 = fVar19 / DAT_102b8c10;
        if (bVar4 != 0) {
          fVar19 = fVar19 / DAT_102b710c;
        }
      }
      else {
        iVar12 = iVar12 + -1 + (uint)(iVar14 != 0);
        if (((iVar12 != 0 || (uint)-iVar12 < (uint)(99 < iVar14 - 1U)) & (bVar4 ^ 1)) == 0) {
          fVar19 = *(float *)(&DAT_102b8c18 + (uint)(fVar19 < 0.0) * 4) / fVar21;
        }
        else {
          fVar19 = fVar19 / DAT_102b8c10;
        }
      }
      if (cVar5 != '\0') {
        fVar19 = fVar19 * DAT_102b710c;
      }
      fVar19 = fVar19 + *(float *)(iVar3 + 0x25d4);
      *(float *)(iVar3 + 0x25d4) = fVar19;
      *(undefined1 *)(iVar3 + 0x25d8) = 1;
    }
    else {
      fVar19 = *(float *)(iVar3 + 0x25d4);
    }
    if ((*(int *)(iVar3 + 0x2060) == param_2) && (*(char *)(iVar3 + 0x1534) == '\0')) {
      FUN_101028d8();
    }
    else if (*(char *)(iVar3 + 0x25d8) == '\x01') {
      fVar15 = (float10)FUN_1015472b(param_3,(int)*param_4,*(undefined4 *)((int)param_4 + 4),param_5
                                     ,param_6,param_7,param_8,fVar27,fVar26);
      fVar21 = (float)fVar15;
      if (((fVar21 < DAT_1028b430) || (fVar19 <= 0.0)) && ((0.0 < fVar21 || (0.0 <= fVar19)))) {
        fVar22 = fVar19 + fVar21;
        fVar28 = DAT_1028b430;
        if (fVar22 <= DAT_1028b430) {
          fVar28 = fVar22;
        }
        fVar28 = (float)(~-(uint)(fVar22 < 0.0) & (uint)fVar28);
        uVar29 = FUN_10154997(param_3,fVar28,param_5,param_6,param_7,param_8,fVar27,fVar26);
        if ((param_10 & 0x40) == 0 && uVar10 == 8) {
          uVar29 = FUN_10154c1d(param_9,param_3,uVar29);
        }
        fVar15 = (float10)FUN_1015472b(param_3,uVar29,param_5,param_6,param_7,param_8,fVar27,fVar26)
        ;
        if (fVar19 <= 0.0) {
          fVar15 = (float10)FUN_100fdbca((float)fVar15 - fVar21,fVar19);
        }
        else {
          fVar15 = (float10)FUN_100ea38a((float)fVar15 - fVar21,fVar19);
        }
        *(float *)(iVar3 + 0x25d4) = *(float *)(iVar3 + 0x25d4) - (float)fVar15;
        *(undefined1 *)(iVar3 + 0x25d8) = 0;
        goto LAB_1013b2e4;
      }
      *(undefined4 *)(iVar3 + 0x25d4) = 0;
      *(undefined1 *)(iVar3 + 0x25d8) = 0;
      goto LAB_1013b301;
    }
    bVar11 = false;
  }
  else {
    if (*(int *)(iVar3 + 0x1548) == 1) {
      if (*(char *)(iVar3 + 0xec) == '\0') {
        FUN_101028d8();
      }
      else {
        fVar21 = *(float *)(iVar3 + 0xe4 + uVar9 * 4);
        if (*(char *)(iVar3 + 0x1534) == '\x01') {
          fVar15 = (float10)FUN_1015472b(param_3,(int)*param_4,*(undefined4 *)((int)param_4 + 4),
                                         param_5,param_6,param_7,param_8,fVar27,fVar26,fVar24,fVar23
                                         ,fVar27,fVar26);
          fVar22 = (float)fVar15;
          if (uVar7 != 0) {
            fVar22 = DAT_1028b430 - fVar22;
          }
          fVar15 = (float10)FUN_100ea365(fVar23,fVar24,fVar22);
          fVar22 = (float)fVar15;
          fVar16 = 0.0;
          if (((DAT_102b70e0 * fVar20 + fVar22 + DAT_102b8a50 <= fVar21) && (uVar10 == 8)) &&
             (fVar21 <= fVar28 + fVar22 + DAT_1028b430)) {
            fVar16 = fVar21 - fVar22;
          }
          *(float *)(iVar3 + 0x25d0) = fVar16;
        }
        fVar28 = 0.0;
        if (0.0 < fVar19) {
          fVar19 = ((fVar21 - *(float *)(iVar3 + 0x25d0)) - fVar23) / fVar19;
          fVar28 = DAT_1028b430;
          if (fVar19 <= DAT_1028b430) {
            fVar28 = fVar19;
          }
          fVar28 = (float)(~-(uint)(fVar19 < 0.0) & (uint)fVar28);
        }
        if (uVar7 != 0) {
          fVar28 = DAT_1028b430 - fVar28;
        }
LAB_1013b2e4:
        if ((param_10 & 0x200000) == 0 && (*(uint *)(iVar3 + 0x1e84) & 0x800) == 0) {
          lVar30 = FUN_10154997(param_3,fVar28,param_5,param_6,param_7,param_8,fVar27,fVar26);
          if ((param_10 & 0x40) == 0 && uVar10 == 8) {
            lVar30 = FUN_10154c1d(param_9,param_3,lVar30);
          }
          bVar11 = lVar30 != *param_4;
          if (bVar11) {
            *param_4 = lVar30;
          }
          goto LAB_1013b304;
        }
      }
    }
LAB_1013b301:
    bVar11 = false;
  }
LAB_1013b304:
  if (DAT_1028b430 <= fVar18) {
    fVar15 = (float10)FUN_1015472b(param_3,(int)*param_4,*(undefined4 *)((int)param_4 + 4),param_5,
                                   param_6,param_7,param_8,fVar27,fVar26,fVar24,fVar23);
    fVar21 = (float)fVar15;
    if (uVar7 != 0) {
      fVar21 = DAT_1028b430 - fVar21;
    }
    fVar15 = (float10)FUN_100ea365(fVar23,fVar24,fVar21);
    fVar21 = (float)fVar15;
    if (uVar7 == 0) {
      fVar18 = param_1[3] + _DAT_102b9554;
      fVar25 = fVar25 * DAT_102b70e0;
      fVar27 = param_1[1] + DAT_102b8ac0;
      *param_11 = fVar20 * DAT_102b70e0 + fVar21;
      param_11[1] = fVar27;
      param_11[2] = fVar25 + fVar21;
      param_11[3] = fVar18;
    }
    else {
      fVar25 = fVar25 * DAT_102b70e0;
      fVar18 = param_1[2] + _DAT_102b9554;
      fVar20 = fVar20 * DAT_102b70e0;
      *param_11 = *param_1 + DAT_102b8ac0;
      param_11[1] = fVar20 + fVar21;
      param_11[2] = fVar18;
      param_11[3] = fVar25 + fVar21;
    }
  }
  else {
    fVar25 = *param_1;
    fVar21 = param_1[1];
    *param_11 = fVar25;
    param_11[1] = fVar21;
    param_11[2] = fVar25;
    param_11[3] = fVar21;
  }
  return bVar11;
}

