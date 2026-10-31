/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1404939a0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_1404939a0(undefined8 param_1)

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
  
  uVar6 = (uint)((ulonglong)param_1 >> 0x20);
  fVar1 = (float)param_1;
  if (((byte)DAT_140632d84 & 3) == 3) {
    uVar6 = (uint)fVar1 >> 0x17 & 0xff;
    fVar8 = 0.0;
    if (0x7f800000 < (uint)ABS(fVar1)) {
      uVar3 = FUN_1404b8080();
      return uVar3;
    }
    if (uVar6 < 0x65) {
      FUN_1404ad7b0(0x20);
      return (ulonglong)DAT_140538904;
    }
    if (uVar6 < 0x7f) {
      fVar5 = fVar1;
      if ((int)fVar1 < 0) {
        fVar5 = (float)((uint)fVar1 ^ _DAT_1404c21b0);
      }
      if (uVar6 < 0x7e) {
        fVar7 = fVar5 * fVar5;
      }
      else {
        fVar7 = (DAT_1404bda40 - fVar5) * DAT_1404ecffc;
        fVar5 = SQRT(fVar7);
        fVar8 = fVar5;
      }
      fVar9 = ((fVar7 * (fVar7 * (-(fVar7 * DAT_140561640) + DAT_140561668) - DAT_140561650) +
               DAT_140561654) * fVar7) / (-(fVar7 * DAT_140561658) + DAT_14056165c);
      if (uVar6 >= 0x7e) {
        if ((int)fVar1 < 0) {
          dVar4 = ((double)(fVar5 * fVar9) - DAT_140561648) + (double)fVar8;
          dVar4 = DAT_14053b750 - (dVar4 + dVar4);
          return CONCAT44((int)((ulonglong)dVar4 >> 0x20),(float)dVar4);
        }
        fVar1 = (float)((uint)fVar8 & 0xffff0000);
        fVar8 = (-(fVar1 * fVar1) + fVar7) / (fVar1 + fVar8);
        return (ulonglong)(uint)(fVar9 * (fVar5 + fVar5) + fVar8 + fVar8 + fVar1 + fVar1);
      }
      dVar4 = DAT_140561660 - ((double)fVar1 - (DAT_140561648 - (double)(fVar9 * fVar1)));
      return CONCAT44((int)((ulonglong)dVar4 >> 0x20),(float)dVar4);
    }
    if (fVar1 == DAT_1404bda40) {
      return 0;
    }
    if (fVar1 == DAT_1404ccdb0) {
      FUN_1404ad7b0(0x20);
      return (ulonglong)DAT_1404f05e4;
    }
    uVar3 = FUN_1404ad8f0("address not available",0xd,0xffc00000,1,8,0x21,fVar1,0,1);
    return uVar3;
  }
  fVar8 = 0.0;
  uVar2 = (uint)fVar1 >> 0x17 & 0xff;
  if (0x7f800000 < (uint)ABS(fVar1)) {
    uVar3 = FUN_1404ad8e0();
    return uVar3;
  }
  if (uVar2 < 0x65) {
    FUN_1404ad7b0(0x20);
    return (ulonglong)DAT_140538904;
  }
  if (uVar2 < 0x7f) {
    fVar5 = fVar1;
    if ((int)fVar1 < 0) {
      fVar5 = (float)((uint)fVar1 ^ _DAT_1404c21b0);
      uVar6 = uVar6 ^ _UNK_1404c21b4;
    }
    if (uVar2 < 0x7e) {
      fVar7 = fVar5 * fVar5;
    }
    else {
      fVar7 = (DAT_1404bda40 - fVar5) * DAT_1404ecffc;
      fVar5 = SQRT(fVar7);
      uVar6 = 0;
      fVar8 = fVar5;
    }
    fVar9 = ((((DAT_140561668 - fVar7 * DAT_140561640) * fVar7 - DAT_140561650) * fVar7 +
             DAT_140561654) * fVar7) / (DAT_14056165c - fVar7 * DAT_140561658);
    if (uVar2 >= 0x7e) {
      if ((int)fVar1 < 0) {
        dVar4 = ((double)(fVar5 * fVar9) - DAT_140561648) + (double)fVar8;
        return (ulonglong)(uint)(float)(DAT_14053b750 - (dVar4 + dVar4));
      }
      fVar1 = (float)((uint)fVar8 & 0xffff0000);
      fVar8 = (fVar7 - fVar1 * fVar1) / (fVar1 + fVar8);
      return CONCAT44(uVar6,(fVar5 + fVar5) * fVar9 + fVar8 + fVar8 + fVar1 + fVar1);
    }
    return (ulonglong)
           (uint)(float)(DAT_140561660 - ((double)fVar1 - (DAT_140561648 - (double)(fVar9 * fVar1)))
                        );
  }
  if (fVar1 == DAT_1404bda40) {
    return 0;
  }
  if (fVar1 == DAT_1404ccdb0) {
    FUN_1404ad7b0(0x20);
    return (ulonglong)DAT_1404f05e4;
  }
  uVar3 = FUN_1404ad8f0("address not available",0xd,0xffc00000,1,8,0x21,fVar1,0,1);
  return uVar3;
}

