/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400dd89a */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400dd89a(longlong param_1,float *param_2,float *param_3,float param_4,uint param_5)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined8 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined8 local_88;
  ulonglong local_80;
  
  uVar1 = _DAT_1401ced40;
  fVar11 = DAT_1401c86c8;
  fVar12 = DAT_1401c86a4;
  fVar9 = DAT_1401c86a0;
  local_80 = DAT_140f17b40 ^ (ulonglong)auStack_b8;
  if (DAT_1401c86a0 <= param_4) {
    uVar6 = param_5 | 0xf0;
    if ((param_5 & 0x1f0) != 0) {
      uVar6 = param_5;
    }
    param_5 = uVar6;
    uVar6 = ~param_5;
    fVar8 = DAT_1401c86a0;
    if ((uVar6 & 0xc0) != 0) {
      fVar8 = DAT_1401c86c8;
    }
    fVar10 = DAT_1401c86a0;
    if ((uVar6 & 0x30) != 0) {
      fVar10 = fVar8;
    }
    uVar7 = FUN_14004863e(local_80,(float)((uint)(*param_3 - *param_2) & _DAT_1401ced40) * fVar10 +
                                   DAT_1401c86a4);
    fVar8 = fVar9;
    if ((uVar6 & 0xa0) != 0) {
      fVar8 = fVar11;
    }
    if ((uVar6 & 0x50) != 0) {
      fVar9 = fVar8;
    }
    param_4 = (float)FUN_14004863e(uVar7,(float)((uint)(param_3[1] - param_2[1]) & uVar1) * fVar9 +
                                         fVar12);
  }
  if ((param_4 < DAT_1401c86a0) || ((param_5 & 0x1f0) == 0x100)) {
    iVar4 = *(int *)(param_1 + 0x50);
    if (iVar4 == *(int *)(param_1 + 0x54)) {
      if (iVar4 == 0) {
        iVar3 = 8;
      }
      else {
        iVar3 = iVar4 / 2 + iVar4;
      }
      iVar5 = iVar4 + 1;
      if (iVar4 + 1 < iVar3) {
        iVar5 = iVar3;
      }
      lVar2 = FUN_140077ab4((longlong)iVar5 << 3);
      if (*(longlong *)(param_1 + 0x58) != 0) {
        FUN_1401c5180(lVar2,*(longlong *)(param_1 + 0x58),(longlong)*(int *)(param_1 + 0x50) << 3);
        FUN_140077b90(*(undefined8 *)(param_1 + 0x58));
      }
      *(longlong *)(param_1 + 0x58) = lVar2;
      *(int *)(param_1 + 0x54) = iVar5;
      iVar4 = *(int *)(param_1 + 0x50);
    }
    else {
      lVar2 = *(longlong *)(param_1 + 0x58);
    }
    *(undefined8 *)(lVar2 + (longlong)iVar4 * 8) = *(undefined8 *)param_2;
    iVar3 = *(int *)(param_1 + 0x50);
    iVar4 = iVar3 + 1;
    *(int *)(param_1 + 0x50) = iVar4;
    fVar9 = param_2[1];
    fVar12 = *param_3;
    if (iVar4 == *(int *)(param_1 + 0x54)) {
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
      lVar2 = FUN_140077ab4((longlong)iVar3 << 3);
      if (*(longlong *)(param_1 + 0x58) != 0) {
        FUN_1401c5180(lVar2,*(longlong *)(param_1 + 0x58),(longlong)*(int *)(param_1 + 0x50) << 3);
        FUN_140077b90(*(undefined8 *)(param_1 + 0x58));
      }
      *(longlong *)(param_1 + 0x58) = lVar2;
      *(int *)(param_1 + 0x54) = iVar3;
      iVar4 = *(int *)(param_1 + 0x50);
    }
    else {
      lVar2 = *(longlong *)(param_1 + 0x58);
    }
    *(float *)(lVar2 + (longlong)iVar4 * 8) = fVar12;
    *(float *)(lVar2 + 4 + (longlong)iVar4 * 8) = fVar9;
    iVar3 = *(int *)(param_1 + 0x50);
    iVar4 = iVar3 + 1;
    *(int *)(param_1 + 0x50) = iVar4;
    if (iVar4 == *(int *)(param_1 + 0x54)) {
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
      lVar2 = FUN_140077ab4((longlong)iVar3 << 3);
      if (*(longlong *)(param_1 + 0x58) != 0) {
        FUN_1401c5180(lVar2,*(longlong *)(param_1 + 0x58),(longlong)*(int *)(param_1 + 0x50) << 3);
        FUN_140077b90(*(undefined8 *)(param_1 + 0x58));
      }
      *(longlong *)(param_1 + 0x58) = lVar2;
      *(int *)(param_1 + 0x54) = iVar3;
      iVar4 = *(int *)(param_1 + 0x50);
    }
    else {
      lVar2 = *(longlong *)(param_1 + 0x58);
    }
    *(undefined8 *)(lVar2 + (longlong)iVar4 * 8) = *(undefined8 *)param_3;
    iVar3 = *(int *)(param_1 + 0x50);
    iVar4 = iVar3 + 1;
    *(int *)(param_1 + 0x50) = iVar4;
    fVar9 = param_3[1];
    fVar12 = *param_2;
    if (iVar4 == *(int *)(param_1 + 0x54)) {
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
      lVar2 = FUN_140077ab4((longlong)iVar3 << 3);
      if (*(longlong *)(param_1 + 0x58) != 0) {
        FUN_1401c5180(lVar2,*(longlong *)(param_1 + 0x58),(longlong)*(int *)(param_1 + 0x50) << 3);
        FUN_140077b90(*(undefined8 *)(param_1 + 0x58));
      }
      *(longlong *)(param_1 + 0x58) = lVar2;
      *(int *)(param_1 + 0x54) = iVar3;
      iVar4 = *(int *)(param_1 + 0x50);
    }
    else {
      lVar2 = *(longlong *)(param_1 + 0x58);
    }
    *(float *)(lVar2 + (longlong)iVar4 * 8) = fVar12;
    *(float *)(lVar2 + 4 + (longlong)iVar4 * 8) = fVar9;
    *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + 1;
  }
  else {
    fVar9 = 0.0;
    if ((param_5 & 0x10) != 0) {
      fVar9 = param_4;
    }
    fVar12 = 0.0;
    if ((param_5 & 0x20) != 0) {
      fVar12 = param_4;
    }
    fVar11 = 0.0;
    if ((char)param_5 < '\0') {
      fVar11 = param_4;
    }
    fVar8 = 0.0;
    if ((param_5 & 0x40) != 0) {
      fVar8 = param_4;
    }
    local_88 = CONCAT44(fVar9 + (float)((ulonglong)*(undefined8 *)param_2 >> 0x20),
                        fVar9 + (float)*(undefined8 *)param_2);
    local_98 = 9;
    FUN_1400dc632(param_1,&local_88,fVar9,6);
    local_88 = CONCAT44(param_2[1] + fVar12,*param_3 - fVar12);
    local_98 = 0xc;
    FUN_1400dc632(param_1,&local_88,fVar12,9);
    local_88 = CONCAT44((float)((ulonglong)*(undefined8 *)param_3 >> 0x20) - fVar11,
                        (float)*(undefined8 *)param_3 - fVar11);
    local_98 = 3;
    FUN_1400dc632(param_1,&local_88,fVar11,0);
    local_88 = CONCAT44(param_3[1] - fVar8,*param_2 + fVar8);
    local_98 = 6;
    FUN_1400dc632(param_1,&local_88,fVar8,3);
  }
  if (DAT_140f17b40 != (local_80 ^ (ulonglong)auStack_b8)) {
                    /* WARNING: Subroutine does not return */
    FUN_140188a00(local_80 ^ (ulonglong)auStack_b8);
  }
  return;
}

