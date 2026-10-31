/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10136f3e */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_10136f3e(uint param_1,double *param_2,float param_3,double param_4,double param_5,
            undefined4 param_6,uint param_7)

{
  double dVar1;
  double dVar2;
  int iVar3;
  byte bVar4;
  char cVar5;
  char cVar6;
  uint uVar7;
  int iVar8;
  bool bVar9;
  undefined4 uVar10;
  byte bVar11;
  uint uVar12;
  float10 fVar13;
  float10 fVar14;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  float fVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  double dVar19;
  float fVar20;
  float local_8c;
  double local_40;
  
  iVar3 = DAT_1039d74c;
  uVar16 = SUB84(param_4,0);
  uVar17 = (undefined4)((ulonglong)param_4 >> 0x20);
  bVar4 = 1;
  if (param_5 <= param_4) {
    if ((param_4 != param_5) || (NAN(param_4) || NAN(param_5))) {
      bVar4 = 0;
    }
    else {
      bVar4 = (byte)(param_7 >> 10) & 1 | param_4 != 0.0;
    }
  }
  bVar11 = bVar4 ^ 1;
  dVar19 = param_5 - param_4;
  if ((param_3 == 0.0 && bVar11 == 0) && (dVar19 < DAT_102b9530)) {
    param_3 = (float)((double)*(float *)(DAT_1039d74c + 0x25e0) * dVar19);
  }
  uVar12 = (param_7 & 0x100000) >> 0x14;
  uVar7 = param_1 & 0xfffffffe;
  if (((*(int *)(DAT_1039d74c + 0x1548) == 1) && (cVar5 = FUN_10103c30(0), cVar5 != '\0')) &&
     (cVar5 = FUN_10113fae(0,*(float *)(iVar3 + 0x90) * DAT_102b70e0), cVar5 != '\0')) {
    fVar20 = *(float *)(iVar3 + 0xd8 + uVar12 * 4);
    fVar15 = fVar20;
    if (*(char *)(iVar3 + 0x106) != '\0') {
      fVar15 = DAT_102b94f4 * fVar20;
    }
    if (((param_7 & 0x800) == 0) && (fVar20 = fVar15, *(char *)(iVar3 + 0x105) != '\0')) {
      fVar20 = fVar15 * DAT_102b710c;
    }
  }
  else {
    fVar20 = 0.0;
    if ((*(uint *)(iVar3 + 0x1548) & 0xfffffffe) == 2) {
      if (uVar7 == 8) {
        FUN_1013db7c(param_6,3);
      }
      uVar10 = 0x1000;
      if (*(int *)(iVar3 + 0x208c) == 3) {
        uVar10 = 0x282;
      }
      cVar5 = FUN_10113c70(uVar10);
      uVar10 = 0x2000;
      if (*(int *)(iVar3 + 0x208c) == 3) {
        uVar10 = 0x283;
      }
      cVar6 = FUN_10113c70(uVar10);
      fVar20 = DAT_102b710c;
      if (cVar6 == '\0') {
        fVar20 = DAT_1028b430;
      }
      if (cVar5 != '\0') {
        fVar20 = DAT_102b71b8;
      }
      if ((param_7 >> 0xb & 1) != 0) {
        fVar20 = DAT_1028b430;
      }
      fVar13 = (float10)FUN_10117386(uVar12);
      fVar20 = fVar20 * (float)fVar13;
      fVar15 = fVar20;
      FUN_10152e0a();
      fVar13 = (float10)FUN_100fdbca(param_3,fVar15);
      param_3 = (float)fVar13;
    }
  }
  fVar20 = fVar20 * param_3;
  if ((param_7 & 0x100000) != 0) {
    fVar20 = (float)((uint)fVar20 ^ _DAT_1028f620);
  }
  if ((((param_7 & 0x20) != 0) && (dVar19 < DAT_102b9530)) && (_DAT_102b9538 < dVar19)) {
    fVar20 = fVar20 / (float)dVar19;
  }
  if ((param_7 & 0x100) == 0 && bVar11 == 0) {
    if ((param_5 <= *param_2) && (0.0 < fVar20)) goto LAB_1013723e;
    bVar9 = fVar20 < 0.0 && *param_2 <= param_4;
  }
  else {
    bVar9 = false;
  }
  if ((*(char *)(iVar3 + 0x1534) == '\0') && (!bVar9)) {
    if ((fVar20 != 0.0) || (NAN(fVar20))) {
      *(float *)(iVar3 + 0x25dc) = *(float *)(iVar3 + 0x25dc) + fVar20;
      *(undefined1 *)(iVar3 + 0x25d9) = 1;
    }
    else if (*(char *)(iVar3 + 0x25d9) != '\x01') {
      return 0;
    }
    dVar1 = *param_2;
    uVar10 = SUB84(param_5,0);
    uVar18 = (undefined4)((ulonglong)param_5 >> 0x20);
    if ((param_7 & 0x20) == 0) {
      dVar1 = dVar1 + (double)*(float *)(iVar3 + 0x25dc);
      local_8c = 0.0;
      local_40 = 0.0;
    }
    else {
      dVar2 = DAT_1028b438;
      if (uVar7 == 8) {
        iVar8 = FUN_1013db7c(param_6,3);
        dVar2 = (double)iVar8;
      }
      fVar13 = (float10)FUN_1026fab0(0xa0000000,0x3fb99999,SUB84(dVar2,0),
                                     (int)((ulonglong)dVar2 >> 0x20));
      local_8c = (float)fVar13;
      fVar13 = (float10)FUN_101556be(param_1,SUB84(dVar1,0),(int)((ulonglong)dVar1 >> 0x20),uVar16,
                                     uVar17,uVar10,uVar18,local_8c,0);
      fVar14 = (float10)FUN_10155b61(param_1,(float)fVar13 + *(float *)(iVar3 + 0x25dc),uVar16,
                                     uVar17,uVar10,uVar18,local_8c,0);
      dVar1 = (double)fVar14;
      local_40 = (double)fVar13;
    }
    if ((param_7 & 0x40) == 0 && uVar7 == 8) {
      FUN_10155ef7(param_6,param_1,SUB84(dVar1,0),(int)((ulonglong)dVar1 >> 0x20));
      dVar1 = (double)extraout_ST0;
    }
    *(undefined1 *)(iVar3 + 0x25d9) = 0;
    if ((param_7 & 0x20) == 0) {
      local_40 = dVar1 - *param_2;
    }
    else {
      FUN_101556be(param_1,SUB84(dVar1,0),(int)((ulonglong)dVar1 >> 0x20),uVar16,uVar17,uVar10,
                   uVar18,local_8c,0);
      local_40 = (double)extraout_ST0_00 - local_40;
    }
    *(float *)(iVar3 + 0x25dc) = *(float *)(iVar3 + 0x25dc) - (float)local_40;
    dVar1 = (double)(~-(ulonglong)(dVar1 == 0.0) & (ulonglong)dVar1);
    dVar2 = *param_2;
    if (bVar11 == 0 && dVar1 != dVar2) {
      if (((byte)(param_7 >> 8) & bVar4) == 0) {
        if ((dVar1 < param_4) || (((uVar7 != 8 && (dVar2 < dVar1)) && (fVar20 < 0.0)))) {
          dVar1 = param_4;
        }
        if ((param_5 < dVar1) || (((uVar7 != 8 && (dVar1 < dVar2)) && (0.0 < fVar20)))) {
          dVar1 = param_5;
        }
      }
      else {
        uVar16 = SUB84(DAT_1028b438,0);
        uVar17 = (undefined4)((ulonglong)DAT_1028b438 >> 0x20);
        if (dVar1 < param_4) {
          uVar10 = uVar16;
          uVar18 = uVar17;
          if (uVar7 == 8) {
            uVar10 = 0;
            uVar18 = 0;
          }
          dVar1 = dVar1 + (double)CONCAT44(uVar18,uVar10) + dVar19;
        }
        if (param_5 < dVar1) {
          if (uVar7 == 8) {
            uVar16 = 0;
            uVar17 = 0;
          }
          dVar1 = dVar1 - (dVar19 + (double)CONCAT44(uVar17,uVar16));
        }
      }
    }
    if ((dVar2 == dVar1) && (!NAN(dVar2) && !NAN(dVar1))) {
      return 0;
    }
    *param_2 = dVar1;
    return 1;
  }
LAB_1013723e:
  *(undefined4 *)(iVar3 + 0x25dc) = 0;
  *(undefined1 *)(iVar3 + 0x25d9) = 0;
  return 0;
}

