/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401b9410 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_1401b9410(float param_1)

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
    uVar5 = FUN_1401c3b70();
    return uVar5;
  }
  if (uVar4 < 0x65) {
    FUN_1401b96e0(0x20);
    return (ulonglong)DAT_140e8c804;
  }
  if (uVar4 < 0x7f) {
    fVar7 = param_1;
    if ((int)param_1 < 0) {
      fVar7 = (float)((uint)param_1 ^ _DAT_1401c8590);
    }
    if (uVar4 < 0x7e) {
      fVar2 = fVar7 * fVar7;
    }
    else {
      fVar2 = (DAT_1401c86c8 - fVar7) * DAT_1401c86a0;
      fVar7 = SQRT(fVar2);
      fVar6 = fVar7;
    }
    fVar8 = ((fVar2 * (fVar2 * (-(fVar2 * DAT_140eb4448) + DAT_140eb4470) - DAT_140eb4458) +
             DAT_140eb445c) * fVar2) / (-(fVar2 * DAT_140eb4460) + DAT_140eb4464);
    if (uVar4 >= 0x7e) {
      if ((int)param_1 < 0) {
        dVar1 = ((double)(fVar7 * fVar8) - DAT_140eb4450) + (double)fVar6;
        dVar1 = DAT_140e8e270 - (dVar1 + dVar1);
        return CONCAT44((int)((ulonglong)dVar1 >> 0x20),(float)dVar1);
      }
      fVar3 = (float)((uint)fVar6 & 0xffff0000);
      fVar6 = (-(fVar3 * fVar3) + fVar2) / (fVar3 + fVar6);
      return (ulonglong)(uint)(fVar8 * (fVar7 + fVar7) + fVar6 + fVar6 + fVar3 + fVar3);
    }
    dVar1 = DAT_140eb4468 - ((double)param_1 - (DAT_140eb4450 - (double)(fVar8 * param_1)));
    return CONCAT44((int)((ulonglong)dVar1 >> 0x20),(float)dVar1);
  }
  if (param_1 == DAT_1401c86c8) {
    return 0;
  }
  if (param_1 == DAT_1401c86a4) {
    FUN_1401b96e0(0x20);
    return (ulonglong)DAT_140211e84;
  }
  uVar5 = FUN_1401b9820("acosf",0xd,0xffc00000,1,8,0x21,param_1,0,1);
  return uVar5;
}

