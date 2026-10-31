/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10138960 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_10138960(float *param_1,int param_2,uint param_3,int *param_4,int param_5,int param_6,
            undefined4 param_7,uint param_8,float *param_9)

{
  float fVar1;
  char cVar2;
  undefined1 uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  float10 fVar11;
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
  
  iVar5 = DAT_1039d74c;
  uVar6 = param_8 & 0x100000;
  uVar8 = uVar6 >> 0x14;
  uVar10 = param_3 & 0xfffffffe;
  iVar9 = param_6 - param_5;
  if (param_6 < param_5) {
    iVar9 = param_5 - param_6;
  }
  fVar14 = (*(float *)((int)param_1 + (uVar6 >> 0x12) + 8) -
           *(float *)((int)param_1 + (uVar6 >> 0x12))) + _DAT_102b9550;
  fVar20 = *(float *)(DAT_1039d74c + 0xd50);
  if (uVar10 != 8) {
    fVar11 = (float10)FUN_100fdbca(fVar14 / (DAT_1028b430 + (float)iVar9),fVar20);
    fVar20 = (float)fVar11;
  }
  fVar11 = (float10)FUN_100ea38a(fVar20,fVar14);
  fVar20 = (float)fVar11;
  fVar15 = fVar14 - fVar20;
  fVar18 = param_1[uVar8] + DAT_102b8ac0;
  fVar23 = DAT_102b70e0 * fVar20;
  fVar19 = param_1[uVar8 + 2] + _DAT_102b9554;
  fVar16 = (float)(_DAT_1028f620 ^ (uint)fVar20);
  fVar21 = 0.0;
  fVar22 = 0.0;
  if ((param_8 & 0x20) != 0) {
    dVar13 = DAT_1028b438;
    if (uVar10 == 8) {
      iVar4 = FUN_1013db7c(param_7,3);
      dVar13 = (double)iVar4;
    }
    fVar11 = (float10)FUN_1026fab0(0xa0000000,0x3fb99999,dVar13);
    fVar22 = (float)fVar11;
    fVar21 = *(float *)(iVar5 + 0xd58) * DAT_102b70e0;
    fVar11 = (float10)FUN_100fdbca(fVar15,0x3f800000);
    fVar21 = fVar21 / (float)fVar11;
  }
  fVar18 = fVar18 + fVar23;
  fVar19 = fVar19 - fVar23;
  if (*(int *)(iVar5 + 0x1528) == param_2) {
    if (*(int *)(iVar5 + 0x1548) - 2U < 2) {
      if (*(char *)(iVar5 + 0x1534) == '\x01') {
        *(undefined4 *)(iVar5 + 0x25d4) = 0;
        *(undefined1 *)(iVar5 + 0x25d8) = 0;
      }
      if (uVar6 == 0) {
        fVar11 = (float10)FUN_10117386(0);
        fVar15 = (float)fVar11;
      }
      else {
        fVar11 = (float10)FUN_10117386(1);
        fVar15 = (float)((uint)(float)fVar11 ^ _DAT_1028f620);
      }
      if ((fVar15 != 0.0) || (NAN(fVar15))) {
        uVar7 = 0x1000;
        if (*(int *)(iVar5 + 0x208c) == 3) {
          uVar7 = 0x282;
        }
        cVar2 = FUN_10113c70(uVar7);
        uVar7 = 0x2000;
        if (*(int *)(iVar5 + 0x208c) == 3) {
          uVar7 = 0x283;
        }
        uVar3 = FUN_10113c70(uVar7);
        uVar8 = (uint)CONCAT11(cVar2,uVar3);
        if ((uVar10 == 8) && (iVar4 = FUN_1013db7c(param_7,3), 0 < iVar4)) {
          fVar15 = fVar15 / DAT_102b8c10;
          if (cVar2 != '\0') {
            fVar15 = fVar15 / DAT_102b710c;
          }
        }
        else {
          uVar8 = CONCAT11(cVar2,uVar3) ^ 0x100;
          if ((99 < iVar9 - 1U & (byte)(uVar8 >> 8)) == 0) {
            fVar15 = *(float *)(&DAT_102b8c18 + (uint)(fVar15 < 0.0) * 4) / (float)iVar9;
          }
          else {
            fVar15 = fVar15 / DAT_102b8c10;
          }
        }
        if ((char)uVar8 != '\0') {
          fVar15 = fVar15 * DAT_102b710c;
        }
        fVar15 = fVar15 + *(float *)(iVar5 + 0x25d4);
        *(float *)(iVar5 + 0x25d4) = fVar15;
        *(undefined1 *)(iVar5 + 0x25d8) = 1;
      }
      else {
        fVar15 = *(float *)(iVar5 + 0x25d4);
      }
      if ((*(int *)(iVar5 + 0x2060) == param_2) && (*(char *)(iVar5 + 0x1534) == '\0')) {
        FUN_101028d8();
      }
      else if (*(char *)(iVar5 + 0x25d8) == '\x01') {
        fVar11 = (float10)FUN_10152e5b(param_3,*param_4,param_5,param_6,fVar22,fVar21);
        fVar1 = (float)fVar11;
        if (((DAT_1028b430 <= fVar1) && (0.0 < fVar15)) || ((fVar1 <= 0.0 && (fVar15 < 0.0)))) {
          *(undefined4 *)(iVar5 + 0x25d4) = 0;
          *(undefined1 *)(iVar5 + 0x25d8) = 0;
          uVar7 = 0;
          goto LAB_101391fa;
        }
        fVar17 = fVar15 + fVar1;
        fVar23 = DAT_1028b430;
        if (fVar17 <= DAT_1028b430) {
          fVar23 = fVar17;
        }
        fVar23 = (float)(~-(uint)(fVar17 < 0.0) & (uint)fVar23);
        uVar7 = FUN_101531fa(param_3,fVar23,param_5,param_6,fVar22,fVar21);
        if ((param_8 & 0x40) == 0 && uVar10 == 8) {
          uVar7 = FUN_10153542(param_7,param_3,uVar7);
        }
        fVar11 = (float10)FUN_10152e5b(param_3,uVar7,param_5,param_6,fVar22,fVar21);
        if (fVar15 <= 0.0) {
          fVar11 = (float10)FUN_100fdbca((float)fVar11 - fVar1,fVar15);
        }
        else {
          fVar11 = (float10)FUN_100ea38a((float)fVar11 - fVar1,fVar15);
        }
        *(float *)(iVar5 + 0x25d4) = *(float *)(iVar5 + 0x25d4) - (float)fVar11;
        *(undefined1 *)(iVar5 + 0x25d8) = 0;
LAB_101391d6:
        if ((param_8 & 0x200000) == 0 && (*(uint *)(iVar5 + 0x1e84) & 0x800) == 0) {
          iVar5 = FUN_101531fa(param_3,fVar23,param_5,param_6,fVar22,fVar21,fVar19,fVar18);
          if ((param_8 & 0x40) == 0 && uVar10 == 8) {
            iVar5 = FUN_10153542(param_7,param_3,iVar5);
          }
          if (*param_4 == iVar5) {
            uVar7 = 0;
          }
          else {
            *param_4 = iVar5;
            uVar7 = 1;
          }
          goto LAB_101391fa;
        }
        goto LAB_101391f1;
      }
      uVar7 = 0;
      goto LAB_101391fa;
    }
    if (*(int *)(iVar5 + 0x1548) == 1) {
      if (*(char *)(iVar5 + 0xec) != '\0') {
        fVar1 = *(float *)(iVar5 + 0xe4 + uVar8 * 4);
        if (*(char *)(iVar5 + 0x1534) == '\x01') {
          fVar11 = (float10)FUN_10152e5b(param_3,*param_4,param_5,param_6,fVar22,fVar21,fVar19,
                                         fVar18,fVar22,fVar21);
          fVar17 = (float)fVar11;
          if (uVar6 != 0) {
            fVar17 = DAT_1028b430 - fVar17;
          }
          fVar11 = (float10)FUN_100ea365(fVar18,fVar19,fVar17);
          fVar17 = (float)fVar11;
          fVar12 = 0.0;
          if (((DAT_102b70e0 * fVar16 + fVar17 + DAT_102b8a50 <= fVar1) && (uVar10 == 8)) &&
             (fVar1 <= fVar23 + fVar17 + DAT_1028b430)) {
            fVar12 = fVar1 - fVar17;
          }
          *(float *)(iVar5 + 0x25d0) = fVar12;
        }
        fVar23 = 0.0;
        if (0.0 < fVar15) {
          fVar15 = ((fVar1 - *(float *)(iVar5 + 0x25d0)) - fVar18) / fVar15;
          fVar23 = DAT_1028b430;
          if (fVar15 <= DAT_1028b430) {
            fVar23 = fVar15;
          }
          fVar23 = (float)(~-(uint)(fVar15 < 0.0) & (uint)fVar23);
        }
        if (uVar6 != 0) {
          fVar23 = DAT_1028b430 - fVar23;
        }
        goto LAB_101391d6;
      }
      FUN_101028d8();
    }
  }
LAB_101391f1:
  uVar7 = 0;
LAB_101391fa:
  if (DAT_1028b430 <= fVar14) {
    fVar11 = (float10)FUN_10152e5b(param_3,*param_4,param_5,param_6,fVar22,fVar21,fVar19,fVar18);
    fVar14 = (float)fVar11;
    if (uVar6 != 0) {
      fVar14 = DAT_1028b430 - fVar14;
    }
    fVar11 = (float10)FUN_100ea365(fVar18,fVar19,fVar14);
    fVar14 = (float)fVar11;
    if (uVar6 == 0) {
      fVar22 = param_1[3] + _DAT_102b9554;
      fVar20 = fVar20 * DAT_102b70e0;
      fVar21 = param_1[1] + DAT_102b8ac0;
      *param_9 = fVar16 * DAT_102b70e0 + fVar14;
      param_9[1] = fVar21;
      param_9[2] = fVar20 + fVar14;
      param_9[3] = fVar22;
    }
    else {
      fVar20 = fVar20 * DAT_102b70e0;
      fVar22 = param_1[2] + _DAT_102b9554;
      fVar16 = fVar16 * DAT_102b70e0;
      *param_9 = *param_1 + DAT_102b8ac0;
      param_9[1] = fVar16 + fVar14;
      param_9[2] = fVar22;
      param_9[3] = fVar20 + fVar14;
    }
  }
  else {
    fVar20 = *param_1;
    fVar14 = param_1[1];
    *param_9 = fVar20;
    param_9[1] = fVar14;
    param_9[2] = fVar20;
    param_9[3] = fVar14;
  }
  return uVar7;
}

