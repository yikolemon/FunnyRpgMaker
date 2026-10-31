/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18019b9c3 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18019b9c3(longlong param_1,undefined8 param_2,undefined4 param_3,float param_4)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  fVar5 = (float)FUN_180102463(param_4 / DAT_1802dc2d0,DAT_1802ac570);
  param_4 = param_4 - fVar5 * DAT_1802dbb2c;
  fVar7 = param_4 / DAT_1802dbb3c;
  fVar8 = (float)param_2 + DAT_1802de728 * fVar5 + fVar7;
  fVar6 = (float)(_DAT_1802b0ce0 ^ (uint)fVar7);
  fVar9 = (DAT_1802de728 * fVar5 + (float)((ulonglong)param_2 >> 0x20) + param_4) -
          DAT_1802dbb2c * fVar7;
  iVar3 = *(int *)(param_1 + 0x50);
  if (iVar3 == *(int *)(param_1 + 0x54)) {
    if (iVar3 == 0) {
      iVar2 = 8;
    }
    else {
      iVar2 = iVar3 / 2 + iVar3;
    }
    iVar4 = iVar3 + 1;
    if (iVar3 + 1 < iVar2) {
      iVar4 = iVar2;
    }
    lVar1 = FUN_1800fe7f8((longlong)iVar4 << 3);
    if (*(longlong *)(param_1 + 0x58) != 0) {
      FUN_1802a82f0(lVar1,*(longlong *)(param_1 + 0x58),(longlong)*(int *)(param_1 + 0x50) << 3);
      FUN_1800fe8d4(*(undefined8 *)(param_1 + 0x58));
    }
    *(longlong *)(param_1 + 0x58) = lVar1;
    *(int *)(param_1 + 0x54) = iVar4;
    iVar3 = *(int *)(param_1 + 0x50);
  }
  else {
    lVar1 = *(longlong *)(param_1 + 0x58);
  }
  *(ulonglong *)(lVar1 + (longlong)iVar3 * 8) = CONCAT44(fVar9 - fVar7,fVar8 - fVar7);
  iVar2 = *(int *)(param_1 + 0x50);
  iVar3 = iVar2 + 1;
  *(int *)(param_1 + 0x50) = iVar3;
  if (iVar3 == *(int *)(param_1 + 0x54)) {
    iVar2 = iVar2 + 2;
    if (iVar3 == 0) {
      iVar3 = 8;
    }
    else {
      iVar3 = iVar3 / 2 + iVar3;
    }
    if (iVar2 < iVar3) {
      iVar2 = iVar3;
    }
    lVar1 = FUN_1800fe7f8((longlong)iVar2 << 3);
    if (*(longlong *)(param_1 + 0x58) != 0) {
      FUN_1802a82f0(lVar1,*(longlong *)(param_1 + 0x58),(longlong)*(int *)(param_1 + 0x50) << 3);
      FUN_1800fe8d4(*(undefined8 *)(param_1 + 0x58));
    }
    *(longlong *)(param_1 + 0x58) = lVar1;
    *(int *)(param_1 + 0x54) = iVar2;
    iVar3 = *(int *)(param_1 + 0x50);
  }
  else {
    lVar1 = *(longlong *)(param_1 + 0x58);
  }
  *(float *)(lVar1 + (longlong)iVar3 * 8) = fVar8;
  *(float *)(lVar1 + 4 + (longlong)iVar3 * 8) = fVar9;
  iVar2 = *(int *)(param_1 + 0x50);
  iVar3 = iVar2 + 1;
  *(int *)(param_1 + 0x50) = iVar3;
  if (iVar3 == *(int *)(param_1 + 0x54)) {
    iVar2 = iVar2 + 2;
    if (iVar3 == 0) {
      iVar3 = 8;
    }
    else {
      iVar3 = iVar3 / 2 + iVar3;
    }
    if (iVar2 < iVar3) {
      iVar2 = iVar3;
    }
    lVar1 = FUN_1800fe7f8((longlong)iVar2 << 3);
    if (*(longlong *)(param_1 + 0x58) != 0) {
      FUN_1802a82f0(lVar1,*(longlong *)(param_1 + 0x58),(longlong)*(int *)(param_1 + 0x50) << 3);
      FUN_1800fe8d4(*(undefined8 *)(param_1 + 0x58));
    }
    *(longlong *)(param_1 + 0x58) = lVar1;
    *(int *)(param_1 + 0x54) = iVar2;
    iVar3 = *(int *)(param_1 + 0x50);
  }
  else {
    lVar1 = *(longlong *)(param_1 + 0x58);
  }
  *(ulonglong *)(lVar1 + (longlong)iVar3 * 8) =
       CONCAT44(fVar6 + fVar6 + fVar9,fVar7 + fVar7 + fVar8);
  iVar3 = *(int *)(param_1 + 0x50) + 1;
  *(int *)(param_1 + 0x50) = iVar3;
  FUN_18018fc54(param_1,*(undefined8 *)(param_1 + 0x58),iVar3,param_3,fVar5,0);
  *(undefined4 *)(param_1 + 0x50) = 0;
  return;
}

