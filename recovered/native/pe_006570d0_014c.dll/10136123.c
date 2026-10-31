/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10136123 */

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_10136123(uint param_1,uint *param_2,float param_3,uint param_4,uint param_5,uint param_6,
            uint param_7,undefined4 param_8,uint param_9)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  bool bVar4;
  char cVar5;
  char cVar6;
  bool bVar7;
  byte bVar10;
  int iVar8;
  uint uVar9;
  undefined4 uVar11;
  uint uVar12;
  uint uVar13;
  float10 fVar14;
  float fVar15;
  double dVar16;
  float fVar17;
  float local_9c;
  double local_48;
  
  iVar3 = DAT_1039d74c;
  bVar4 = true;
  if (param_7 <= param_5 && (uint)(param_4 < param_6) <= param_5 - param_7) {
    if (param_7 == param_5 && param_6 == param_4) {
      bVar4 = (param_9 & 0x400) != 0 || (param_4 != 0 || param_5 != 0);
    }
    else {
      bVar4 = false;
    }
  }
  bVar10 = bVar4 ^ 1;
  if (param_3 == 0.0 && bVar10 == 0) {
    iVar8 = (param_7 - param_5) - (uint)(param_6 < param_4);
    param_3 = *(float *)(DAT_1039d74c + 0x25e0) *
              ((float)CONCAT44(iVar8,param_6 - param_4) +
              *(float *)(&DAT_102b7070 + (iVar8 >> 0x1f) * -4));
  }
  uVar12 = (param_9 & 0x100000) >> 0x14;
  uVar9 = param_1 & 0xfffffffe;
  if (((*(int *)(DAT_1039d74c + 0x1548) == 1) && (cVar5 = FUN_10103c30(0), cVar5 != '\0')) &&
     (cVar5 = FUN_10113fae(0,*(float *)(iVar3 + 0x90) * DAT_102b70e0), cVar5 != '\0')) {
    fVar17 = *(float *)(iVar3 + 0xd8 + uVar12 * 4);
    fVar15 = fVar17;
    if (*(char *)(iVar3 + 0x106) != '\0') {
      fVar15 = DAT_102b94f4 * fVar17;
    }
    if (((param_9 & 0x800) == 0) && (fVar17 = fVar15, *(char *)(iVar3 + 0x105) != '\0')) {
      fVar17 = fVar15 * DAT_102b710c;
    }
  }
  else {
    fVar17 = 0.0;
    if ((*(uint *)(iVar3 + 0x1548) & 0xfffffffe) == 2) {
      if (uVar9 == 8) {
        FUN_1013db7c(param_8,3);
      }
      uVar11 = 0x1000;
      if (*(int *)(iVar3 + 0x208c) == 3) {
        uVar11 = 0x282;
      }
      cVar5 = FUN_10113c70(uVar11);
      uVar11 = 0x2000;
      if (*(int *)(iVar3 + 0x208c) == 3) {
        uVar11 = 0x283;
      }
      cVar6 = FUN_10113c70(uVar11);
      fVar17 = DAT_102b710c;
      if (cVar6 == '\0') {
        fVar17 = DAT_1028b430;
      }
      if (cVar5 != '\0') {
        fVar17 = DAT_102b71b8;
      }
      if ((param_9 >> 0xb & 1) != 0) {
        fVar17 = DAT_1028b430;
      }
      fVar14 = (float10)FUN_10117386(uVar12);
      fVar17 = fVar17 * (float)fVar14;
      fVar15 = fVar17;
      FUN_10152e0a();
      fVar14 = (float10)FUN_100fdbca(param_3,fVar15);
      param_3 = (float)fVar14;
    }
  }
  fVar17 = fVar17 * param_3;
  if ((param_9 & 0x100000) != 0) {
    fVar17 = (float)((uint)fVar17 ^ _DAT_1028f620);
  }
  iVar8 = (param_7 - param_5) - (uint)(param_6 < param_4);
  fVar15 = fVar17;
  if ((param_9 & 0x20) != 0) {
    fVar15 = fVar17 / ((float)CONCAT44(iVar8,param_6 - param_4) +
                      *(float *)(&DAT_102b7070 + (iVar8 >> 0x1f) * -4));
  }
  if (param_6 != param_4 || param_7 != param_5) {
    fVar17 = fVar15;
  }
  if ((param_9 & 0x100) == 0 && bVar10 == 0) {
    uVar12 = param_2[1];
    if ((param_7 <= uVar12 && (uint)(*param_2 < param_6) <= uVar12 - param_7) && (0.0 < fVar17))
    goto LAB_101364ba;
    bVar7 = fVar17 < 0.0 && (uVar12 <= param_5 && (uint)(param_4 < *param_2) <= param_5 - uVar12);
  }
  else {
    bVar7 = false;
  }
  if ((*(char *)(iVar3 + 0x1534) == '\0') && (!bVar7)) {
    if ((fVar17 != 0.0) || (NAN(fVar17))) {
      *(float *)(iVar3 + 0x25dc) = *(float *)(iVar3 + 0x25dc) + fVar17;
      *(undefined1 *)(iVar3 + 0x25d9) = 1;
    }
    else if (*(char *)(iVar3 + 0x25d9) != '\x01') {
      return 0;
    }
    uVar12 = *param_2;
    uVar13 = param_2[1];
    if ((param_9 & 0x20) == 0) {
      lVar2 = (longlong)ROUND(*(float *)(iVar3 + 0x25dc)) + *(longlong *)param_2;
      local_9c = 0.0;
      local_48 = 0.0;
    }
    else {
      dVar16 = DAT_1028b438;
      if (uVar9 == 8) {
        iVar8 = FUN_1013db7c(param_8,3);
        dVar16 = (double)iVar8;
      }
      fVar14 = (float10)FUN_1026fab0(0xa0000000,0x3fb99999,dVar16);
      local_9c = (float)fVar14;
      fVar14 = (float10)FUN_1015472b(param_1,uVar12,uVar13,param_4,param_5,param_6,param_7,local_9c,
                                     0);
      lVar2 = FUN_10154997(param_1,(float)fVar14 + *(float *)(iVar3 + 0x25dc),param_4,param_5,
                           param_6,param_7,local_9c,0);
      local_48 = (double)fVar14;
    }
    if ((param_9 & 0x40) == 0 && uVar9 == 8) {
      lVar2 = FUN_10154c1d(param_8,param_1,lVar2);
    }
    uVar13 = (uint)((ulonglong)lVar2 >> 0x20);
    uVar12 = (uint)lVar2;
    *(undefined1 *)(iVar3 + 0x25d9) = 0;
    if ((param_9 & 0x20) == 0) {
      fVar15 = (float)CONCAT44((uVar13 - param_2[1]) - (uint)(uVar12 < *param_2),uVar12 - *param_2);
    }
    else {
      fVar14 = (float10)FUN_1015472b(param_1,lVar2,param_4,param_5,param_6,param_7,local_9c,0);
      fVar15 = (float)((double)fVar14 - local_48);
    }
    *(float *)(iVar3 + 0x25dc) = *(float *)(iVar3 + 0x25dc) - fVar15;
    uVar1 = param_2[1];
    if (bVar10 == 0 && lVar2 != *(longlong *)param_2) {
      if (((byte)(param_9 >> 8) & bVar4) == 0) {
        if ((uVar13 < param_5 || uVar13 - param_5 < (uint)(uVar12 < param_4)) ||
           (((uVar9 != 8 && (uVar1 < uVar13 || uVar1 - uVar13 < (uint)(*param_2 < uVar12))) &&
            (fVar17 < 0.0)))) {
          lVar2 = CONCAT44(param_5,param_4);
        }
        uVar12 = (uint)((ulonglong)lVar2 >> 0x20);
        if ((param_7 < uVar12 || param_7 - uVar12 < (uint)(param_6 < (uint)lVar2)) ||
           (((uVar9 != 8 && (uVar12 < uVar1 || uVar12 - uVar1 < (uint)((uint)lVar2 < *param_2))) &&
            (0.0 < fVar17)))) {
          lVar2 = CONCAT44(param_7,param_6);
        }
      }
      else {
        if (uVar13 < param_5 || uVar13 - param_5 < (uint)(uVar12 < param_4)) {
          uVar12 = (uVar9 != 8) - param_4;
          lVar2 = lVar2 + CONCAT44((-(uint)((uVar9 != 8) < param_4) - param_5) + param_7 +
                                   (uint)CARRY4(uVar12,param_6),uVar12 + param_6);
        }
        uVar12 = (uint)((ulonglong)lVar2 >> 0x20);
        if (param_7 < uVar12 || param_7 - uVar12 < (uint)(param_6 < (uint)lVar2)) {
          uVar12 = param_4 - (uVar9 != 8);
          lVar2 = lVar2 + CONCAT44(((param_5 - (param_4 < (uVar9 != 8))) - param_7) -
                                   (uint)(uVar12 < param_6),uVar12 - param_6);
        }
      }
    }
    if (lVar2 == *(longlong *)param_2) {
      return 0;
    }
    *(longlong *)param_2 = lVar2;
    return 1;
  }
LAB_101364ba:
  *(undefined4 *)(iVar3 + 0x25dc) = 0;
  *(undefined1 *)(iVar3 + 0x25d9) = 0;
  return 0;
}

