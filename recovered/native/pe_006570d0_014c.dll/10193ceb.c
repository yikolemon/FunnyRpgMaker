/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10193ceb */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10193ceb(int param_1,float param_2,float param_3,undefined4 param_4,float param_5)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float10 fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  fVar5 = (float10)FUN_100fdbca(param_5 / DAT_102b7100,0x3f800000);
  fVar1 = (float)fVar5;
  param_5 = param_5 - fVar1 * DAT_102b70e0;
  fVar6 = param_5 / DAT_102b6c58;
  fVar9 = param_2 + DAT_102b9570 * fVar1 + fVar6;
  fVar7 = (float)(_DAT_1028f620 ^ (uint)fVar6);
  fVar8 = (DAT_102b9570 * fVar1 + param_3 + param_5) - DAT_102b70e0 * fVar6;
  iVar4 = *(int *)(param_1 + 0x38);
  if (iVar4 == *(int *)(param_1 + 0x3c)) {
    if (iVar4 == 0) {
      iVar3 = 8;
    }
    else {
      iVar3 = iVar4 / 2 + iVar4;
    }
    iVar2 = iVar4 + 1;
    if (iVar4 + 1 < iVar3) {
      iVar2 = iVar3;
    }
    iVar3 = FUN_100fa1fa(iVar2 * 8);
    if (*(int *)(param_1 + 0x40) != 0) {
      FUN_1025b2d0(iVar3,*(int *)(param_1 + 0x40),*(int *)(param_1 + 0x38) << 3);
      FUN_100fa2cb(*(undefined4 *)(param_1 + 0x40));
    }
    *(int *)(param_1 + 0x40) = iVar3;
    *(int *)(param_1 + 0x3c) = iVar2;
    iVar4 = *(int *)(param_1 + 0x38);
  }
  else {
    iVar3 = *(int *)(param_1 + 0x40);
  }
  *(ulonglong *)(iVar3 + iVar4 * 8) = CONCAT44(fVar8 - fVar6,fVar9 - fVar6);
  iVar3 = *(int *)(param_1 + 0x38);
  iVar4 = iVar3 + 1;
  *(int *)(param_1 + 0x38) = iVar4;
  if (iVar4 == *(int *)(param_1 + 0x3c)) {
    iVar3 = iVar3 + 2;
    if (iVar4 == 0) {
      iVar4 = 8;
    }
    else {
      iVar4 = iVar4 / 2 + iVar4;
    }
    if (iVar3 < iVar4) {
      iVar3 = iVar4;
    }
    iVar2 = FUN_100fa1fa(iVar3 * 8);
    if (*(int *)(param_1 + 0x40) != 0) {
      FUN_1025b2d0(iVar2,*(int *)(param_1 + 0x40),*(int *)(param_1 + 0x38) << 3);
      FUN_100fa2cb(*(undefined4 *)(param_1 + 0x40));
    }
    *(int *)(param_1 + 0x40) = iVar2;
    *(int *)(param_1 + 0x3c) = iVar3;
    iVar4 = *(int *)(param_1 + 0x38);
  }
  else {
    iVar2 = *(int *)(param_1 + 0x40);
  }
  *(float *)(iVar2 + iVar4 * 8) = fVar9;
  *(float *)(iVar2 + 4 + iVar4 * 8) = fVar8;
  iVar3 = *(int *)(param_1 + 0x38);
  iVar4 = iVar3 + 1;
  *(int *)(param_1 + 0x38) = iVar4;
  if (iVar4 == *(int *)(param_1 + 0x3c)) {
    iVar3 = iVar3 + 2;
    if (iVar4 == 0) {
      iVar4 = 8;
    }
    else {
      iVar4 = iVar4 / 2 + iVar4;
    }
    if (iVar3 < iVar4) {
      iVar3 = iVar4;
    }
    iVar2 = FUN_100fa1fa(iVar3 * 8);
    if (*(int *)(param_1 + 0x40) != 0) {
      FUN_1025b2d0(iVar2,*(int *)(param_1 + 0x40),*(int *)(param_1 + 0x38) << 3);
      FUN_100fa2cb(*(undefined4 *)(param_1 + 0x40));
    }
    *(int *)(param_1 + 0x40) = iVar2;
    *(int *)(param_1 + 0x3c) = iVar3;
    iVar4 = *(int *)(param_1 + 0x38);
  }
  else {
    iVar2 = *(int *)(param_1 + 0x40);
  }
  *(ulonglong *)(iVar2 + iVar4 * 8) = CONCAT44(fVar7 + fVar7 + fVar8,fVar6 + fVar6 + fVar9);
  iVar4 = *(int *)(param_1 + 0x38) + 1;
  *(int *)(param_1 + 0x38) = iVar4;
  FUN_101888a4(*(undefined4 *)(param_1 + 0x40),iVar4,param_4,fVar1,0);
  *(undefined4 *)(param_1 + 0x38) = 0;
  return;
}

