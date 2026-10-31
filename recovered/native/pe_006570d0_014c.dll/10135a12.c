/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10135a12 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_10135a12(uint param_1,uint *param_2,float param_3,uint param_4,int param_5,uint param_6,
            int param_7,undefined4 param_8,uint param_9)

{
  uint uVar1;
  longlong lVar2;
  char cVar3;
  char cVar4;
  byte bVar7;
  uint uVar5;
  int iVar6;
  bool bVar8;
  undefined4 uVar9;
  int iVar10;
  uint uVar11;
  bool bVar12;
  float10 fVar13;
  float fVar14;
  double dVar15;
  float fVar16;
  float local_a4;
  double local_48;
  
  iVar6 = DAT_1039d74c;
  bVar12 = true;
  if ((SBORROW4(param_5,param_7) != SBORROW4(param_5 - param_7,(uint)(param_4 < param_6))) ==
      (int)((param_5 - param_7) - (uint)(param_4 < param_6)) < 0) {
    if (param_7 == param_5 && param_6 == param_4) {
      bVar12 = (param_9 & 0x400) != 0 || (param_4 != 0 || param_5 != 0);
    }
    else {
      bVar12 = false;
    }
  }
  bVar7 = bVar12 ^ 1;
  if (param_3 == 0.0 && bVar7 == 0) {
    param_3 = *(float *)(DAT_1039d74c + 0x25e0) *
              (float)CONCAT44((param_7 - param_5) - (uint)(param_6 < param_4),param_6 - param_4);
  }
  uVar11 = (param_9 & 0x100000) >> 0x14;
  uVar5 = param_1 & 0xfffffffe;
  if (((*(int *)(DAT_1039d74c + 0x1548) == 1) && (cVar3 = FUN_10103c30(0), cVar3 != '\0')) &&
     (cVar3 = FUN_10113fae(0,*(float *)(iVar6 + 0x90) * DAT_102b70e0), cVar3 != '\0')) {
    fVar16 = *(float *)(iVar6 + 0xd8 + uVar11 * 4);
    fVar14 = fVar16;
    if (*(char *)(iVar6 + 0x106) != '\0') {
      fVar14 = DAT_102b94f4 * fVar16;
    }
    if (((param_9 & 0x800) == 0) && (fVar16 = fVar14, *(char *)(iVar6 + 0x105) != '\0')) {
      fVar16 = fVar14 * DAT_102b710c;
    }
  }
  else {
    fVar16 = 0.0;
    if ((*(uint *)(iVar6 + 0x1548) & 0xfffffffe) == 2) {
      if (uVar5 == 8) {
        FUN_1013db7c(param_8,3);
      }
      uVar9 = 0x1000;
      if (*(int *)(iVar6 + 0x208c) == 3) {
        uVar9 = 0x282;
      }
      cVar3 = FUN_10113c70(uVar9);
      uVar9 = 0x2000;
      if (*(int *)(iVar6 + 0x208c) == 3) {
        uVar9 = 0x283;
      }
      cVar4 = FUN_10113c70(uVar9);
      fVar16 = DAT_102b710c;
      if (cVar4 == '\0') {
        fVar16 = DAT_1028b430;
      }
      if (cVar3 != '\0') {
        fVar16 = DAT_102b71b8;
      }
      if ((param_9 >> 0xb & 1) != 0) {
        fVar16 = DAT_1028b430;
      }
      fVar13 = (float10)FUN_10117386(uVar11);
      fVar16 = fVar16 * (float)fVar13;
      fVar14 = fVar16;
      FUN_10152e0a();
      fVar13 = (float10)FUN_100fdbca(param_3,fVar14);
      param_3 = (float)fVar13;
    }
  }
  fVar16 = fVar16 * param_3;
  if ((param_9 & 0x100000) != 0) {
    fVar16 = (float)((uint)fVar16 ^ _DAT_1028f620);
  }
  if ((param_9 & 0x20) != 0) {
    iVar10 = (param_7 - param_5) - (uint)(param_6 < param_4);
    if ((int)(uint)(param_6 - param_4 == 0) <= iVar10) {
      fVar16 = fVar16 / (float)CONCAT44(iVar10,param_6 - param_4);
    }
  }
  if ((param_9 & 0x100) == 0 && bVar7 == 0) {
    uVar11 = param_2[1];
    uVar1 = (uint)(*param_2 < param_6);
    if (((SBORROW4(uVar11,param_7) != SBORROW4(uVar11 - param_7,uVar1)) ==
         (int)((uVar11 - param_7) - uVar1) < 0) && (0.0 < fVar16)) goto LAB_10135d23;
    uVar1 = (uint)(param_4 < *param_2);
    bVar8 = fVar16 < 0.0 &&
            (SBORROW4(param_5,uVar11) != SBORROW4(param_5 - uVar11,uVar1)) ==
            (int)((param_5 - uVar11) - uVar1) < 0;
  }
  else {
    bVar8 = false;
  }
  if ((*(char *)(iVar6 + 0x1534) == '\0') && (!bVar8)) {
    if ((fVar16 != 0.0) || (NAN(fVar16))) {
      *(float *)(iVar6 + 0x25dc) = *(float *)(iVar6 + 0x25dc) + fVar16;
      *(undefined1 *)(iVar6 + 0x25d9) = 1;
    }
    else if (*(char *)(iVar6 + 0x25d9) != '\x01') {
      return 0;
    }
    uVar11 = *param_2;
    uVar1 = param_2[1];
    if ((param_9 & 0x20) == 0) {
      lVar2 = (longlong)ROUND(*(float *)(iVar6 + 0x25dc)) + *(longlong *)param_2;
      local_a4 = 0.0;
      local_48 = 0.0;
    }
    else {
      dVar15 = DAT_1028b438;
      if (uVar5 == 8) {
        iVar10 = FUN_1013db7c(param_8,3);
        dVar15 = (double)iVar10;
      }
      fVar13 = (float10)FUN_1026fab0(0xa0000000,0x3fb99999,dVar15);
      local_a4 = (float)fVar13;
      fVar13 = (float10)FUN_10153a33(param_1,uVar11,uVar1,param_4,param_5,param_6,param_7,local_a4,0
                                    );
      lVar2 = FUN_10153fc5(param_1,(float)fVar13 + *(float *)(iVar6 + 0x25dc),param_4,param_5,
                           param_6,param_7,local_a4,0);
      local_48 = (double)fVar13;
    }
    if ((param_9 & 0x40) == 0 && uVar5 == 8) {
      lVar2 = FUN_101545a6(param_8,param_1,lVar2);
    }
    iVar10 = (int)((ulonglong)lVar2 >> 0x20);
    uVar11 = (uint)lVar2;
    *(undefined1 *)(iVar6 + 0x25d9) = 0;
    if ((param_9 & 0x20) == 0) {
      fVar14 = (float)CONCAT44((iVar10 - param_2[1]) - (uint)(uVar11 < *param_2),uVar11 - *param_2);
    }
    else {
      fVar13 = (float10)FUN_10153a33(param_1,lVar2,param_4,param_5,param_6,param_7,local_a4,0);
      fVar14 = (float)((double)fVar13 - local_48);
    }
    *(float *)(iVar6 + 0x25dc) = *(float *)(iVar6 + 0x25dc) - fVar14;
    uVar1 = param_2[1];
    if (bVar7 == 0 && lVar2 != *(longlong *)param_2) {
      if (((byte)(param_9 >> 8) & bVar12) == 0) {
        if (((SBORROW4(iVar10,param_5) != SBORROW4(iVar10 - param_5,(uint)(uVar11 < param_4))) !=
             (int)((iVar10 - param_5) - (uint)(uVar11 < param_4)) < 0) ||
           (((uVar5 != 8 &&
             (uVar11 = (uint)(*param_2 < uVar11),
             (SBORROW4(uVar1,iVar10) != SBORROW4(uVar1 - iVar10,uVar11)) !=
             (int)((uVar1 - iVar10) - uVar11) < 0)) && (fVar16 < 0.0)))) {
          lVar2 = CONCAT44(param_5,param_4);
        }
        iVar6 = (int)((ulonglong)lVar2 >> 0x20);
        uVar11 = (uint)(param_6 < (uint)lVar2);
        if (((SBORROW4(param_7,iVar6) != SBORROW4(param_7 - iVar6,uVar11)) !=
             (int)((param_7 - iVar6) - uVar11) < 0) ||
           (((uVar5 != 8 &&
             (uVar5 = (uint)((uint)lVar2 < *param_2),
             (SBORROW4(iVar6,uVar1) != SBORROW4(iVar6 - uVar1,uVar5)) !=
             (int)((iVar6 - uVar1) - uVar5) < 0)) && (0.0 < fVar16)))) {
          lVar2 = CONCAT44(param_7,param_6);
        }
      }
      else {
        if ((SBORROW4(iVar10,param_5) != SBORROW4(iVar10 - param_5,(uint)(uVar11 < param_4))) !=
            (int)((iVar10 - param_5) - (uint)(uVar11 < param_4)) < 0) {
          uVar11 = (uVar5 != 8) - param_4;
          lVar2 = lVar2 + CONCAT44((-(uint)((uVar5 != 8) < param_4) - param_5) + param_7 +
                                   (uint)CARRY4(uVar11,param_6),uVar11 + param_6);
        }
        iVar10 = (int)((ulonglong)lVar2 >> 0x20);
        uVar11 = (uint)(param_6 < (uint)lVar2);
        iVar6 = param_7 - iVar10;
        if ((SBORROW4(param_7,iVar10) != SBORROW4(iVar6,uVar11)) != (int)(iVar6 - uVar11) < 0) {
          uVar11 = param_4 - (uVar5 != 8);
          lVar2 = lVar2 + CONCAT44(((param_5 - (uint)(param_4 < (uVar5 != 8))) - param_7) -
                                   (uint)(uVar11 < param_6),uVar11 - param_6);
        }
      }
    }
    if (lVar2 == *(longlong *)param_2) {
      return 0;
    }
    *(longlong *)param_2 = lVar2;
    return 1;
  }
LAB_10135d23:
  *(undefined4 *)(iVar6 + 0x25dc) = 0;
  *(undefined1 *)(iVar6 + 0x25d9) = 0;
  return 0;
}

