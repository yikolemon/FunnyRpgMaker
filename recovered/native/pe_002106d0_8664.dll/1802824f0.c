/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1802824f0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_1802824f0(ulonglong param_1)

{
  float fVar1;
  uint uVar2;
  ulonglong uVar3;
  double dVar4;
  float fVar5;
  uint uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  fVar1 = (float)param_1;
  uVar6 = (uint)(param_1 >> 0x20);
  fVar8 = 0.0;
  uVar2 = (uint)((param_1 & 0xffffffff) >> 0x17) & 0xff;
  if (0x7f800000 < (uint)ABS(fVar1)) {
    uVar3 = FUN_18029c410();
    return uVar3;
  }
  if (uVar2 < 0x65) {
    FUN_18029c2e0(0x20);
    return (ulonglong)DAT_180327434;
  }
  if (uVar2 < 0x7f) {
    fVar5 = fVar1;
    if ((int)fVar1 < 0) {
      fVar5 = (float)((uint)fVar1 ^ _DAT_1802b0ce0);
      uVar6 = uVar6 ^ _UNK_1802b0ce4;
    }
    if (uVar2 < 0x7e) {
      fVar7 = fVar5 * fVar5;
    }
    else {
      fVar7 = (DAT_1802ac570 - fVar5) * DAT_1802dbb2c;
      uVar6 = 0;
      fVar8 = SQRT(fVar7);
      fVar5 = fVar8;
    }
    fVar9 = ((((DAT_180350198 - fVar7 * DAT_180350170) * fVar7 - DAT_180350180) * fVar7 +
             DAT_180350184) * fVar7) / (DAT_18035018c - fVar7 * DAT_180350188);
    if (uVar2 < 0x7e) {
      return (ulonglong)
             (uint)(float)(DAT_180350190 -
                          ((double)fVar1 - (DAT_180350178 - (double)(fVar9 * fVar1))));
    }
    if (-1 < (int)fVar1) {
      fVar1 = (float)((uint)fVar8 & 0xffff0000);
      fVar8 = (fVar7 - fVar1 * fVar1) / (fVar1 + fVar8);
      return CONCAT44(uVar6,(fVar5 + fVar5) * fVar9 + fVar8 + fVar8 + fVar1 + fVar1);
    }
    dVar4 = ((double)(fVar5 * fVar9) - DAT_180350178) + (double)fVar8;
    return (ulonglong)(uint)(float)(DAT_18032a280 - (dVar4 + dVar4));
  }
  if (fVar1 == DAT_1802ac570) {
    return 0;
  }
  if (fVar1 != DAT_1802bb8e0) {
    uVar3 = FUN_18029c420("acosf",0xd,0xffc00000,1,8,0x21,fVar1,0,1);
    return uVar3;
  }
  FUN_18029c2e0(0x20);
  return (ulonglong)DAT_1802df114;
}

