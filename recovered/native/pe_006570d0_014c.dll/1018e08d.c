/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1018e08d */

void FUN_1018e08d(int param_1,int param_2,int param_3,float param_4,float param_5,float param_6,
                 float param_7,uint param_8,uint param_9)

{
  float fVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  float *pfVar5;
  float10 fVar6;
  float fVar7;
  
  if (param_2 < param_3) {
    iVar2 = *(int *)(param_1 + 0x20);
    pfVar5 = (float *)(iVar2 + param_2 * 0x14);
    param_7 = param_7 - param_5;
    param_6 = param_6 - param_4;
    fVar7 = DAT_1028b430 / (param_6 * param_6 + param_7 * param_7);
    uVar4 = param_8 >> 8 & 0xff;
    uVar3 = param_8 >> 0x10 & 0xff;
    do {
      fVar6 = (float10)FUN_10112cc4(((*pfVar5 - param_4) * param_6 + (pfVar5[1] - param_5) * param_7
                                    ) * fVar7,0,0x3f800000);
      fVar1 = (float)fVar6;
      pfVar5[4] = (float)((uint)*(byte *)((int)pfVar5 + 0x13) << 0x18 |
                          (int)((float)(int)((param_9 & 0xff) - (param_8 & 0xff)) * fVar1 +
                               (float)(param_8 & 0xff)) |
                          (int)((float)(int)((param_9 >> 8 & 0xff) - uVar4) * fVar1 + (float)uVar4)
                          << 8 | (int)(fVar1 * (float)(int)((param_9 >> 0x10 & 0xff) - uVar3) +
                                      (float)uVar3) << 0x10);
      pfVar5 = pfVar5 + 5;
    } while (pfVar5 < (float *)(iVar2 + param_3 * 0x14));
  }
  return;
}

