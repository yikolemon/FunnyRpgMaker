/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101152df */

void FUN_101152df(int param_1,float param_2)

{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  float10 fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  iVar3 = DAT_1039d74c;
  iVar2 = *(int *)(DAT_1039d74c + 0x14cc);
  iVar4 = *(int *)(iVar2 + 0x224);
  if (iVar4 == *(int *)(iVar2 + 0x228)) {
    if (iVar4 == 0) {
      iVar5 = 8;
    }
    else {
      iVar5 = iVar4 / 2 + iVar4;
    }
    iVar6 = iVar4 + 1;
    if (iVar4 + 1 < iVar5) {
      iVar6 = iVar5;
    }
    iVar5 = FUN_100fa1fa(iVar6 * 4);
    if (*(int *)(iVar2 + 0x22c) != 0) {
      FUN_1025b2d0(iVar5,*(int *)(iVar2 + 0x22c),*(int *)(iVar2 + 0x224) << 2);
      FUN_100fa2cb(*(undefined4 *)(iVar2 + 0x22c));
    }
    *(int *)(iVar2 + 0x22c) = iVar5;
    *(int *)(iVar2 + 0x228) = iVar6;
    iVar4 = *(int *)(iVar2 + 0x224);
  }
  else {
    iVar5 = *(int *)(iVar2 + 0x22c);
  }
  *(undefined4 *)(iVar5 + iVar4 * 4) = *(undefined4 *)(iVar2 + 0x218);
  *(int *)(iVar2 + 0x224) = *(int *)(iVar2 + 0x224) + 1;
  param_2 = param_2 - (float)(param_1 + -1) * *(float *)(iVar3 + 0xd24);
  fVar10 = param_2;
  if (1 < param_1) {
    fVar8 = (float)param_1;
    fVar9 = param_2;
    do {
      param_1 = param_1 + -1;
      fVar10 = (float)(int)(((float)param_1 * param_2) / fVar8);
      fVar7 = (float10)FUN_100fdbca(fVar9 - fVar10,0x3f800000);
      iVar4 = *(int *)(iVar2 + 0x224);
      if (iVar4 == *(int *)(iVar2 + 0x228)) {
        if (iVar4 == 0) {
          iVar5 = 8;
        }
        else {
          iVar5 = iVar4 / 2 + iVar4;
        }
        iVar6 = iVar4 + 1;
        if (iVar4 + 1 < iVar5) {
          iVar6 = iVar5;
        }
        iVar5 = FUN_100fa1fa(iVar6 * 4);
        if (*(int *)(iVar2 + 0x22c) != 0) {
          FUN_1025b2d0(iVar5,*(int *)(iVar2 + 0x22c),*(int *)(iVar2 + 0x224) << 2);
          FUN_100fa2cb(*(undefined4 *)(iVar2 + 0x22c));
        }
        *(int *)(iVar2 + 0x22c) = iVar5;
        *(int *)(iVar2 + 0x228) = iVar6;
        iVar4 = *(int *)(iVar2 + 0x224);
      }
      else {
        iVar5 = *(int *)(iVar2 + 0x22c);
      }
      *(float *)(iVar5 + iVar4 * 4) = (float)fVar7;
      *(int *)(iVar2 + 0x224) = *(int *)(iVar2 + 0x224) + 1;
      fVar9 = fVar10;
    } while (1 < param_1);
  }
  fVar7 = (float10)FUN_100fdbca(fVar10,0x3f800000);
  *(float *)(iVar2 + 0x218) = (float)fVar7;
  pbVar1 = (byte *)(iVar3 + 0x1e48);
  *pbVar1 = *pbVar1 & 0xfe;
  return;
}

