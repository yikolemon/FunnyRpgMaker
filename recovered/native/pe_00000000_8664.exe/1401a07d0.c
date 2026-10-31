/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401a07d0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_1401a07d0(ulonglong param_1)

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
    uVar3 = FUN_1401b9810();
    return uVar3;
  }
  if (uVar2 < 0x65) {
    FUN_1401b96e0(0x20);
    return (ulonglong)DAT_140e8c804;
  }
  if (uVar2 < 0x7f) {
    fVar5 = fVar1;
    if ((int)fVar1 < 0) {
      fVar5 = (float)((uint)fVar1 ^ _DAT_1401c8590);
      uVar6 = uVar6 ^ _UNK_1401c8594;
    }
    if (uVar2 < 0x7e) {
      fVar7 = fVar5 * fVar5;
    }
    else {
      fVar7 = (DAT_1401c86c8 - fVar5) * DAT_1401c86a0;
      uVar6 = 0;
      fVar8 = SQRT(fVar7);
      fVar5 = fVar8;
    }
    fVar9 = ((((DAT_140eb4470 - fVar7 * DAT_140eb4448) * fVar7 - DAT_140eb4458) * fVar7 +
             DAT_140eb445c) * fVar7) / (DAT_140eb4464 - fVar7 * DAT_140eb4460);
    if (uVar2 < 0x7e) {
      return (ulonglong)
             (uint)(float)(DAT_140eb4468 -
                          ((double)fVar1 - (DAT_140eb4450 - (double)(fVar9 * fVar1))));
    }
    if (-1 < (int)fVar1) {
      fVar1 = (float)((uint)fVar8 & 0xffff0000);
      fVar8 = (fVar7 - fVar1 * fVar1) / (fVar1 + fVar8);
      return CONCAT44(uVar6,(fVar5 + fVar5) * fVar9 + fVar8 + fVar8 + fVar1 + fVar1);
    }
    dVar4 = ((double)(fVar5 * fVar9) - DAT_140eb4450) + (double)fVar8;
    return (ulonglong)(uint)(float)(DAT_140e8e270 - (dVar4 + dVar4));
  }
  if (fVar1 == DAT_1401c86c8) {
    return 0;
  }
  if (fVar1 != DAT_1401c86a4) {
    uVar3 = FUN_1401b9820("acosf",0xd,0xffc00000,1,8,0x21,fVar1,0,1);
    return uVar3;
  }
  FUN_1401b96e0(0x20);
  return (ulonglong)DAT_140211e84;
}

