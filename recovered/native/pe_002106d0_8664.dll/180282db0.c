/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180282db0 */

ulonglong FUN_180282db0(float param_1,float param_2)

{
  uint uVar1;
  double dVar2;
  int iVar3;
  double dVar4;
  ulonglong uVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  uint uVar9;
  uint uVar10;
  double dVar11;
  double dVar12;
  uint uVar13;
  
  dVar6 = (double)param_2;
  uVar13 = (uint)((ulonglong)dVar6 >> 0x20);
  dVar11 = (double)param_1;
  uVar1 = (uint)((ulonglong)dVar11 >> 0x20);
  iVar3 = (uVar1 >> 0x14 & 0x7ff) - (uVar13 >> 0x14 & 0x7ff);
  dVar4 = ABS(dVar6);
  dVar2 = ABS(dVar11);
  if ((0x7ff0000000000000 < (ulonglong)dVar4) ||
     (param_2 = param_1, 0x7ff0000000000000 < (ulonglong)dVar2)) {
    uVar5 = FUN_18029c410(param_2);
    return uVar5;
  }
  if (dVar2 == 0.0) {
    if ((longlong)dVar6 < 0) {
joined_r0x000180282fe5:
      if (-1 < (longlong)dVar11) {
        FUN_18029c2e0(0x20);
        return (ulonglong)DAT_1802df114;
      }
      FUN_18029c2e0(0x20);
      return (ulonglong)DAT_180351950;
    }
LAB_180282fc2:
    return (ulonglong)(uint)(float)dVar11;
  }
  if (dVar4 == 0.0) {
    if ((longlong)dVar11 < 0) goto LAB_180282e9e;
    FUN_18029c2e0(0x20);
  }
  if (0x1a < iVar3) {
    if (-1 < (longlong)dVar11) {
      FUN_18029c2e0(0x20);
      return (ulonglong)DAT_180327434;
    }
LAB_180282e9e:
    FUN_18029c2e0(0x20);
    return (ulonglong)DAT_1802df854;
  }
  if ((iVar3 < -0xd) && (-1 < (longlong)dVar6)) {
    if (iVar3 < -0x96) {
      FUN_18029c2e0(0x30);
      if ((longlong)dVar11 < 0) {
        return (ulonglong)DAT_1802df154;
      }
      return 0;
    }
    if (-0x7f < iVar3) {
      return (ulonglong)(uint)(float)(dVar11 / dVar6);
    }
    dVar6 = (dVar11 * 1.2676506002282294e+30) / dVar6;
    uVar5 = (ulonglong)ABS(dVar6) >> 0x34;
    uVar1 = (uint)((ulonglong)ABS(dVar6) >> 0x34);
    if (uVar1 < 0x65) {
      if ((int)(0x65 - uVar1) < 0x37) {
        uVar5 = ((ulonglong)dVar6 & 0x1fffffffffffff | 0x10000000000000) >>
                (100U - (char)uVar5 & 0x3f);
        uVar5 = (uVar5 >> 1) + (ulonglong)((uint)uVar5 & 1);
      }
      else {
        uVar5 = 0;
      }
    }
    else {
      uVar5 = uVar5 - 100 << 0x34 | (ulonglong)dVar6 & 0xfffffffffffff;
    }
    dVar11 = (double)((ulonglong)dVar6 & 0x8000000000000000 | uVar5);
    if ((uVar5 & 0x7ff0000000000000) == 0) {
      FUN_18029c2e0(0x30);
    }
    goto LAB_180282fc2;
  }
  if ((iVar3 < -0x1a) && ((longlong)dVar6 < 0)) goto joined_r0x000180282fe5;
  if ((dVar2 == INFINITY) && (dVar4 == INFINITY)) {
    FUN_18029c2e0(0x20);
    if (-1 < (longlong)dVar6) {
      if ((longlong)dVar11 < 0) {
        return (ulonglong)DAT_1802dead4;
      }
      return (ulonglong)DAT_1802dead8;
    }
    if ((longlong)dVar11 < 0) {
      return (ulonglong)DAT_18035194c;
    }
    return (ulonglong)DAT_180351948;
  }
  uVar9 = (uint)DAT_1802b0dc0;
  uVar10 = (uint)((ulonglong)DAT_1802b0dc0 >> 0x20);
  dVar2 = dVar6;
  if ((longlong)dVar6 < 0) {
    dVar2 = (double)CONCAT44(uVar13 ^ uVar10,SUB84(dVar6,0) ^ uVar9);
  }
  dVar4 = dVar11;
  if ((longlong)dVar11 < 0) {
    dVar4 = (double)CONCAT44(uVar1 ^ uVar10,SUB84(dVar11,0) ^ uVar9);
  }
  dVar12 = dVar4;
  dVar7 = dVar2;
  if (dVar2 < dVar4) {
    dVar12 = dVar2;
    dVar7 = dVar4;
  }
  dVar8 = dVar12 / dVar7;
  if (dVar8 <= DAT_180351110) {
    if (dVar8 < DAT_18032a270) goto LAB_18028314b;
    dVar7 = dVar8 * dVar8;
    dVar7 = (DAT_180351148 - (DAT_180351138 - dVar7 * DAT_180351128) * dVar7) * dVar7 * dVar8;
  }
  else {
    uVar1 = (uint)(dVar8 * DAT_180351168 + DAT_1802df1c8);
    dVar8 = (double)uVar1;
    dVar7 = (dVar12 * DAT_180351168 - dVar8 * dVar7) / (dVar8 * dVar12 + dVar7 * DAT_180351168);
    dVar8 = dVar7 + *(double *)(&DAT_1803511a0 + (ulonglong)(uVar1 - 0x10) * 8);
    dVar7 = dVar7 * dVar7 * dVar7 * DAT_180351140;
  }
  dVar8 = dVar8 - dVar7;
LAB_18028314b:
  if (dVar2 < dVar4) {
    dVar8 = DAT_180350190 - dVar8;
  }
  if ((longlong)dVar6 < 0) {
    dVar8 = DAT_18032a280 - dVar8;
  }
  if ((longlong)dVar11 < 0) {
    dVar8 = (double)CONCAT44((uint)((ulonglong)dVar8 >> 0x20) ^ uVar10,SUB84(dVar8,0) ^ uVar9);
  }
  return (ulonglong)(uint)(float)dVar8;
}

