/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10139ee6 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_10139ee6(float *param_1,int param_2,uint param_3,longlong *param_4,uint param_5,int param_6,
            uint param_7,int param_8,undefined4 param_9,uint param_10,float *param_11)

{
  int iVar1;
  byte bVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  float10 fVar14;
  float fVar15;
  double dVar16;
  float fVar17;
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
  undefined8 uVar28;
  longlong lVar29;
  
  iVar1 = DAT_1039d74c;
  uVar6 = param_10 & 0x100000;
  uVar8 = uVar6 >> 0x14;
  uVar9 = param_3 & 0xfffffffe;
  uVar10 = (param_6 - param_8) - (uint)(param_5 < param_7);
  uVar4 = (int)uVar10 >> 0x1f;
  uVar12 = param_5 - param_7 ^ uVar4;
  iVar13 = uVar12 - uVar4;
  iVar11 = ((uVar10 ^ uVar4) - uVar4) - (uint)(uVar12 < uVar4);
  fVar20 = (float)CONCAT44(iVar11,iVar13);
  fVar17 = (*(float *)((int)param_1 + (uVar6 >> 0x12) + 8) -
           *(float *)((int)param_1 + (uVar6 >> 0x12))) + _DAT_102b9550;
  fVar24 = *(float *)(DAT_1039d74c + 0xd50);
  if (uVar9 != 8) {
    fVar14 = (float10)FUN_100fdbca(fVar17 / (DAT_1028b430 + fVar20),fVar24);
    fVar24 = (float)fVar14;
  }
  fVar14 = (float10)FUN_100ea38a(fVar24,fVar17);
  fVar24 = (float)fVar14;
  fVar18 = fVar17 - fVar24;
  fVar22 = param_1[uVar8] + DAT_102b8ac0;
  fVar27 = DAT_102b70e0 * fVar24;
  fVar23 = param_1[uVar8 + 2] + _DAT_102b9554;
  fVar19 = (float)(_DAT_1028f620 ^ (uint)fVar24);
  fVar25 = 0.0;
  fVar26 = 0.0;
  if ((param_10 & 0x20) != 0) {
    dVar16 = DAT_1028b438;
    if (uVar9 == 8) {
      iVar5 = FUN_1013db7c(param_9,3);
      dVar16 = (double)iVar5;
    }
    fVar14 = (float10)FUN_1026fab0(0xa0000000,0x3fb99999,dVar16);
    fVar26 = (float)fVar14;
    fVar25 = *(float *)(iVar1 + 0xd58) * DAT_102b70e0;
    fVar14 = (float10)FUN_100fdbca(fVar18,0x3f800000);
    fVar25 = fVar25 / (float)fVar14;
  }
  fVar22 = fVar22 + fVar27;
  fVar23 = fVar23 - fVar27;
  if (*(int *)(iVar1 + 0x1528) == param_2) {
    if (*(int *)(iVar1 + 0x1548) - 2U < 2) {
      if (*(char *)(iVar1 + 0x1534) == '\x01') {
        *(undefined4 *)(iVar1 + 0x25d4) = 0;
        *(undefined1 *)(iVar1 + 0x25d8) = 0;
      }
      if (uVar6 == 0) {
        fVar14 = (float10)FUN_10117386(0);
        fVar18 = (float)fVar14;
      }
      else {
        fVar14 = (float10)FUN_10117386(1);
        fVar18 = (float)((uint)(float)fVar14 ^ _DAT_1028f620);
      }
      if ((fVar18 != 0.0) || (NAN(fVar18))) {
        uVar7 = 0x1000;
        if (*(int *)(iVar1 + 0x208c) == 3) {
          uVar7 = 0x282;
        }
        bVar2 = FUN_10113c70(uVar7);
        uVar7 = 0x2000;
        if (*(int *)(iVar1 + 0x208c) == 3) {
          uVar7 = 0x283;
        }
        cVar3 = FUN_10113c70(uVar7);
        if ((uVar9 == 8) && (iVar5 = FUN_1013db7c(param_9,3), 0 < iVar5)) {
          fVar18 = fVar18 / DAT_102b8c10;
          if (bVar2 != 0) {
            fVar18 = fVar18 / DAT_102b710c;
          }
        }
        else {
          iVar11 = iVar11 + -1 + (uint)(iVar13 != 0);
          if (((iVar11 != 0 || (uint)-iVar11 < (uint)(99 < iVar13 - 1U)) & (bVar2 ^ 1)) == 0) {
            fVar18 = *(float *)(&DAT_102b8c18 + (uint)(fVar18 < 0.0) * 4) / fVar20;
          }
          else {
            fVar18 = fVar18 / DAT_102b8c10;
          }
        }
        if (cVar3 != '\0') {
          fVar18 = fVar18 * DAT_102b710c;
        }
        fVar18 = fVar18 + *(float *)(iVar1 + 0x25d4);
        *(float *)(iVar1 + 0x25d4) = fVar18;
        *(undefined1 *)(iVar1 + 0x25d8) = 1;
      }
      else {
        fVar18 = *(float *)(iVar1 + 0x25d4);
      }
      if ((*(int *)(iVar1 + 0x2060) == param_2) && (*(char *)(iVar1 + 0x1534) == '\0')) {
        FUN_101028d8();
      }
      else if (*(char *)(iVar1 + 0x25d8) == '\x01') {
        fVar14 = (float10)FUN_10153a33(param_3,(int)*param_4,*(undefined4 *)((int)param_4 + 4),
                                       param_5,param_6,param_7,param_8,fVar26,fVar25);
        fVar20 = (float)fVar14;
        if (((DAT_1028b430 <= fVar20) && (0.0 < fVar18)) || ((fVar20 <= 0.0 && (fVar18 < 0.0)))) {
          *(undefined4 *)(iVar1 + 0x25d4) = 0;
          *(undefined1 *)(iVar1 + 0x25d8) = 0;
          uVar7 = 0;
          goto LAB_1013a7d2;
        }
        fVar21 = fVar18 + fVar20;
        fVar27 = DAT_1028b430;
        if (fVar21 <= DAT_1028b430) {
          fVar27 = fVar21;
        }
        fVar27 = (float)(~-(uint)(fVar21 < 0.0) & (uint)fVar27);
        uVar28 = FUN_10153fc5(param_3,fVar27,param_5,param_6,param_7,param_8,fVar26,fVar25);
        if ((param_10 & 0x40) == 0 && uVar9 == 8) {
          uVar28 = FUN_101545a6(param_9,param_3,uVar28);
        }
        fVar14 = (float10)FUN_10153a33(param_3,uVar28,param_5,param_6,param_7,param_8,fVar26,fVar25)
        ;
        if (fVar18 <= 0.0) {
          fVar14 = (float10)FUN_100fdbca((float)fVar14 - fVar20,fVar18);
        }
        else {
          fVar14 = (float10)FUN_100ea38a((float)fVar14 - fVar20,fVar18);
        }
        *(float *)(iVar1 + 0x25d4) = *(float *)(iVar1 + 0x25d4) - (float)fVar14;
        *(undefined1 *)(iVar1 + 0x25d8) = 0;
LAB_1013a7b5:
        if ((param_10 & 0x200000) == 0 && (*(uint *)(iVar1 + 0x1e84) & 0x800) == 0) {
          lVar29 = FUN_10153fc5(param_3,fVar27,param_5,param_6,param_7,param_8,fVar26,fVar25);
          if ((param_10 & 0x40) == 0 && uVar9 == 8) {
            lVar29 = FUN_101545a6(param_9,param_3,lVar29);
          }
          if (lVar29 == *param_4) {
            uVar7 = 0;
          }
          else {
            *param_4 = lVar29;
            uVar7 = CONCAT31((int3)(uVar9 >> 8),1);
          }
          goto LAB_1013a7d2;
        }
        goto LAB_1013a7d0;
      }
      uVar7 = 0;
      goto LAB_1013a7d2;
    }
    if (*(int *)(iVar1 + 0x1548) == 1) {
      if (*(char *)(iVar1 + 0xec) != '\0') {
        fVar20 = *(float *)(iVar1 + 0xe4 + uVar8 * 4);
        if (*(char *)(iVar1 + 0x1534) == '\x01') {
          fVar14 = (float10)FUN_10153a33(param_3,(int)*param_4,*(undefined4 *)((int)param_4 + 4),
                                         param_5,param_6,param_7,param_8,fVar26,fVar25);
          fVar21 = (float)fVar14;
          if (uVar6 != 0) {
            fVar21 = DAT_1028b430 - fVar21;
          }
          fVar14 = (float10)FUN_100ea365(fVar22,fVar23,fVar21);
          fVar21 = (float)fVar14;
          fVar15 = 0.0;
          if (((DAT_102b70e0 * fVar19 + fVar21 + DAT_102b8a50 <= fVar20) && (uVar9 == 8)) &&
             (fVar20 <= fVar27 + fVar21 + DAT_1028b430)) {
            fVar15 = fVar20 - fVar21;
          }
          *(float *)(iVar1 + 0x25d0) = fVar15;
        }
        fVar27 = 0.0;
        if (0.0 < fVar18) {
          fVar18 = ((fVar20 - *(float *)(iVar1 + 0x25d0)) - fVar22) / fVar18;
          fVar27 = DAT_1028b430;
          if (fVar18 <= DAT_1028b430) {
            fVar27 = fVar18;
          }
          fVar27 = (float)(~-(uint)(fVar18 < 0.0) & (uint)fVar27);
        }
        if (uVar6 != 0) {
          fVar27 = DAT_1028b430 - fVar27;
        }
        goto LAB_1013a7b5;
      }
      FUN_101028d8();
    }
  }
LAB_1013a7d0:
  uVar7 = 0;
LAB_1013a7d2:
  if (DAT_1028b430 <= fVar17) {
    fVar14 = (float10)FUN_10153a33(param_3,(int)*param_4,*(undefined4 *)((int)param_4 + 4),param_5,
                                   param_6,param_7,param_8,fVar26,fVar25);
    fVar20 = (float)fVar14;
    if (uVar6 != 0) {
      fVar20 = DAT_1028b430 - fVar20;
    }
    fVar14 = (float10)FUN_100ea365(fVar22,fVar23,fVar20);
    fVar20 = (float)fVar14;
    if (uVar6 == 0) {
      fVar17 = param_1[3] + _DAT_102b9554;
      fVar24 = fVar24 * DAT_102b70e0;
      fVar26 = param_1[1] + DAT_102b8ac0;
      *param_11 = fVar19 * DAT_102b70e0 + fVar20;
      param_11[1] = fVar26;
      param_11[2] = fVar24 + fVar20;
      param_11[3] = fVar17;
    }
    else {
      fVar24 = fVar24 * DAT_102b70e0;
      fVar17 = param_1[2] + _DAT_102b9554;
      fVar19 = fVar19 * DAT_102b70e0;
      *param_11 = *param_1 + DAT_102b8ac0;
      param_11[1] = fVar19 + fVar20;
      param_11[2] = fVar17;
      param_11[3] = fVar24 + fVar20;
    }
  }
  else {
    fVar24 = *param_1;
    fVar20 = param_1[1];
    *param_11 = fVar24;
    param_11[1] = fVar20;
    param_11[2] = fVar24;
    param_11[3] = fVar20;
  }
  return uVar7;
}

