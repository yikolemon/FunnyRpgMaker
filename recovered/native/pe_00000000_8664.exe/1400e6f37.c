/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400e6f37 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400e6f37(longlong param_1,undefined8 param_2,undefined4 param_3,float param_4)

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
  
  fVar5 = (float)FUN_14007b71f(param_4 / DAT_1401c86c0,DAT_1401c86c8);
  param_4 = param_4 - fVar5 * DAT_1401c86a0;
  fVar7 = param_4 / DAT_1402113b0;
  fVar8 = (float)param_2 + DAT_140210020 * fVar5 + fVar7;
  fVar6 = (float)(_DAT_1401c8590 ^ (uint)fVar7);
  fVar9 = (DAT_140210020 * fVar5 + (float)((ulonglong)param_2 >> 0x20) + param_4) -
          DAT_1401c86a0 * fVar7;
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
    lVar1 = FUN_140077ab4((longlong)iVar4 << 3);
    if (*(longlong *)(param_1 + 0x58) != 0) {
      FUN_1401c5180(lVar1,*(longlong *)(param_1 + 0x58),(longlong)*(int *)(param_1 + 0x50) << 3);
      FUN_140077b90(*(undefined8 *)(param_1 + 0x58));
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
    lVar1 = FUN_140077ab4((longlong)iVar2 << 3);
    if (*(longlong *)(param_1 + 0x58) != 0) {
      FUN_1401c5180(lVar1,*(longlong *)(param_1 + 0x58),(longlong)*(int *)(param_1 + 0x50) << 3);
      FUN_140077b90(*(undefined8 *)(param_1 + 0x58));
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
    lVar1 = FUN_140077ab4((longlong)iVar2 << 3);
    if (*(longlong *)(param_1 + 0x58) != 0) {
      FUN_1401c5180(lVar1,*(longlong *)(param_1 + 0x58),(longlong)*(int *)(param_1 + 0x50) << 3);
      FUN_140077b90(*(undefined8 *)(param_1 + 0x58));
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
  FUN_1400db1c8(param_1,*(undefined8 *)(param_1 + 0x58),iVar3,param_3,fVar5,0);
  *(undefined4 *)(param_1 + 0x50) = 0;
  return;
}

