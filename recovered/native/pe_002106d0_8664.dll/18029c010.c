/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18029c010 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_18029c010(float param_1)

{
  double dVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  ulonglong uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  uVar4 = (uint)param_1 >> 0x17 & 0xff;
  fVar6 = 0.0;
  if (0x7f800000 < (uint)ABS(param_1)) {
    uVar5 = FUN_1802a6bb0();
    return uVar5;
  }
  if (uVar4 < 0x65) {
    FUN_18029c2e0(0x20);
    return (ulonglong)DAT_180327434;
  }
  if (uVar4 < 0x7f) {
    fVar7 = param_1;
    if ((int)param_1 < 0) {
      fVar7 = (float)((uint)param_1 ^ _DAT_1802b0ce0);
    }
    if (uVar4 < 0x7e) {
      fVar2 = fVar7 * fVar7;
    }
    else {
      fVar2 = (DAT_1802ac570 - fVar7) * DAT_1802dbb2c;
      fVar7 = SQRT(fVar2);
      fVar6 = fVar7;
    }
    fVar8 = ((fVar2 * (fVar2 * (-(fVar2 * DAT_180350170) + DAT_180350198) - DAT_180350180) +
             DAT_180350184) * fVar2) / (-(fVar2 * DAT_180350188) + DAT_18035018c);
    if (uVar4 >= 0x7e) {
      if ((int)param_1 < 0) {
        dVar1 = ((double)(fVar7 * fVar8) - DAT_180350178) + (double)fVar6;
        dVar1 = DAT_18032a280 - (dVar1 + dVar1);
        return CONCAT44((int)((ulonglong)dVar1 >> 0x20),(float)dVar1);
      }
      fVar3 = (float)((uint)fVar6 & 0xffff0000);
      fVar6 = (-(fVar3 * fVar3) + fVar2) / (fVar3 + fVar6);
      return (ulonglong)(uint)(fVar8 * (fVar7 + fVar7) + fVar6 + fVar6 + fVar3 + fVar3);
    }
    dVar1 = DAT_180350190 - ((double)param_1 - (DAT_180350178 - (double)(fVar8 * param_1)));
    return CONCAT44((int)((ulonglong)dVar1 >> 0x20),(float)dVar1);
  }
  if (param_1 == DAT_1802ac570) {
    return 0;
  }
  if (param_1 == DAT_1802bb8e0) {
    FUN_18029c2e0(0x20);
    return (ulonglong)DAT_1802df114;
  }
  uVar5 = FUN_18029c420("acosf",0xd,0xffc00000,1,8,0x21,param_1,0,1);
  return uVar5;
}

