/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18019578a */

void FUN_18019578a(longlong param_1,int param_2,int param_3,undefined8 param_4,undefined8 param_5,
                  uint param_6,uint param_7)

{
  longlong lVar1;
  uint uVar2;
  float *pfVar3;
  uint uVar4;
  float fVar5;
  uint uVar6;
  float fVar7;
  float fVar8;
  
  if (param_2 < param_3) {
    fVar5 = (float)((ulonglong)param_4 >> 0x20);
    param_5._4_4_ = param_5._4_4_ - fVar5;
    param_5._0_4_ = (float)param_5 - (float)param_4;
    fVar8 = DAT_1802ac570 / ((float)param_5 * (float)param_5 + param_5._4_4_ * param_5._4_4_);
    lVar1 = *(longlong *)(param_1 + 0x28);
    pfVar3 = (float *)(lVar1 + (longlong)param_2 * 0x14);
    uVar2 = 0xff;
    uVar4 = param_6 >> 0x10 & 0xff;
    uVar6 = param_6 >> 8 & 0xff;
    do {
      fVar7 = (float)FUN_1801179ee(((*pfVar3 - (float)param_4) * (float)param_5 +
                                   (pfVar3[1] - fVar5) * param_5._4_4_) * fVar8,uVar2,DAT_1802ac570)
      ;
      uVar2 = (int)(fVar7 * (float)(int)((param_7 >> 0x10 & 0xff) - uVar4) + (float)uVar4) << 0x10;
      pfVar3[4] = (float)((uint)*(byte *)((longlong)pfVar3 + 0x13) << 0x18 |
                          (int)((float)(int)((param_7 & 0xff) - (param_6 & 0xff)) * fVar7 +
                               (float)(param_6 & 0xff)) |
                          (int)((float)(int)((param_7 >> 8 & 0xff) - uVar6) * fVar7 + (float)uVar6)
                          << 8 | uVar2);
      pfVar3 = pfVar3 + 5;
    } while (pfVar3 < (float *)(lVar1 + (longlong)param_3 * 0x14));
  }
  return;
}

