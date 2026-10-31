/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180154daa */

void FUN_180154daa(longlong param_1,float *param_2,uint param_3,undefined4 param_4)

{
  undefined4 uVar1;
  float fVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 local_90;
  undefined8 local_88;
  ulonglong local_80;
  
  lVar3 = DAT_180419160;
  local_80 = DAT_180402640 ^ (ulonglong)auStack_b8;
  puVar5 = (undefined4 *)(DAT_180419160 + 0xdfc);
  if ((param_3 >> 0x15 & 1) == 0) {
    puVar5 = (undefined4 *)(DAT_180419160 + 0xe4c);
  }
  FUN_1800eebe2(*puVar5,(param_2[2] - *param_2) * DAT_1802dbb2c + DAT_1802bb8e0);
  fVar11 = (float)FUN_180102463(0);
  fVar13 = param_2[1] + DAT_1802ac570;
  fVar12 = param_2[3] - *(float *)(lVar3 + 0xe64);
  fVar14 = *param_2;
  iVar9 = *(int *)(param_1 + 0x50);
  if (iVar9 == *(int *)(param_1 + 0x54)) {
    if (iVar9 == 0) {
      iVar8 = 8;
    }
    else {
      iVar8 = iVar9 / 2 + iVar9;
    }
    iVar10 = iVar9 + 1;
    if (iVar9 + 1 < iVar8) {
      iVar10 = iVar8;
    }
    lVar6 = FUN_1800fe7f8((longlong)iVar10 << 3);
    if (*(longlong *)(param_1 + 0x58) != 0) {
      FUN_1802a82f0(lVar6,*(longlong *)(param_1 + 0x58),(longlong)*(int *)(param_1 + 0x50) << 3);
      FUN_1800fe8d4(*(undefined8 *)(param_1 + 0x58));
    }
    *(longlong *)(param_1 + 0x58) = lVar6;
    *(int *)(param_1 + 0x54) = iVar10;
    iVar9 = *(int *)(param_1 + 0x50);
  }
  else {
    lVar6 = *(longlong *)(param_1 + 0x58);
  }
  *(float *)(lVar6 + (longlong)iVar9 * 8) = fVar14;
  *(float *)(lVar6 + 4 + (longlong)iVar9 * 8) = fVar12;
  *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + 1;
  fVar13 = fVar13 + fVar11;
  local_88 = CONCAT44(fVar13,*param_2 + fVar11);
  local_98 = 9;
  FUN_1801910be(param_1,&local_88,fVar11,6);
  local_88 = CONCAT44(fVar13,param_2[2] - fVar11);
  local_98 = 0xc;
  FUN_1801910be(param_1,&local_88,fVar11,9);
  fVar14 = param_2[2];
  iVar9 = *(int *)(param_1 + 0x50);
  if (iVar9 == *(int *)(param_1 + 0x54)) {
    if (iVar9 == 0) {
      iVar8 = 8;
    }
    else {
      iVar8 = iVar9 / 2 + iVar9;
    }
    iVar10 = iVar9 + 1;
    if (iVar9 + 1 < iVar8) {
      iVar10 = iVar8;
    }
    lVar6 = FUN_1800fe7f8((longlong)iVar10 << 3);
    if (*(longlong *)(param_1 + 0x58) != 0) {
      FUN_1802a82f0(lVar6,*(longlong *)(param_1 + 0x58),(longlong)*(int *)(param_1 + 0x50) << 3);
      FUN_1800fe8d4(*(undefined8 *)(param_1 + 0x58));
    }
    *(longlong *)(param_1 + 0x58) = lVar6;
    *(int *)(param_1 + 0x54) = iVar10;
    iVar9 = *(int *)(param_1 + 0x50);
  }
  else {
    lVar6 = *(longlong *)(param_1 + 0x58);
  }
  *(float *)(lVar6 + (longlong)iVar9 * 8) = fVar14;
  *(float *)(lVar6 + 4 + (longlong)iVar9 * 8) = fVar12;
  iVar9 = *(int *)(param_1 + 0x50) + 1;
  *(int *)(param_1 + 0x50) = iVar9;
  FUN_1801907e0(param_1,*(undefined8 *)(param_1 + 0x58),iVar9,param_4);
  *(undefined4 *)(param_1 + 0x50) = 0;
  if (0.0 < *(float *)(lVar3 + 0xe50)) {
    fVar14 = *param_2 + DAT_1802dbb2c;
    if (*(int *)(param_1 + 0x54) == 0) {
      lVar6 = FUN_1800fe7f8(0x40);
      if (*(longlong *)(param_1 + 0x58) != 0) {
        FUN_1802a82f0(lVar6,*(longlong *)(param_1 + 0x58),(longlong)*(int *)(param_1 + 0x50) << 3);
        FUN_1800fe8d4(*(undefined8 *)(param_1 + 0x58));
      }
      *(longlong *)(param_1 + 0x58) = lVar6;
      *(undefined4 *)(param_1 + 0x54) = 8;
      lVar7 = (longlong)*(int *)(param_1 + 0x50);
    }
    else {
      lVar6 = *(longlong *)(param_1 + 0x58);
      lVar7 = 0;
    }
    *(float *)(lVar6 + lVar7 * 8) = fVar14;
    *(float *)(lVar6 + 4 + lVar7 * 8) = fVar12;
    *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + 1;
    fVar13 = fVar13 + DAT_1802de570._4_4_;
    local_88 = CONCAT44(fVar13,*param_2 + fVar11 + (float)DAT_1802de570);
    local_98 = 9;
    FUN_1801910be(param_1,&local_88,fVar11,6);
    fVar2 = DAT_1802de848;
    local_88 = CONCAT44(fVar13,(param_2[2] - fVar11) + DAT_1802de848);
    local_98 = 0xc;
    FUN_1801910be(param_1,&local_88,fVar11,9);
    fVar14 = param_2[2];
    iVar9 = *(int *)(param_1 + 0x50);
    if (iVar9 == *(int *)(param_1 + 0x54)) {
      if (iVar9 == 0) {
        iVar8 = 8;
      }
      else {
        iVar8 = iVar9 / 2 + iVar9;
      }
      iVar10 = iVar9 + 1;
      if (iVar9 + 1 < iVar8) {
        iVar10 = iVar8;
      }
      lVar6 = FUN_1800fe7f8((longlong)iVar10 << 3);
      if (*(longlong *)(param_1 + 0x58) != 0) {
        FUN_1802a82f0(lVar6,*(longlong *)(param_1 + 0x58),(longlong)*(int *)(param_1 + 0x50) << 3);
        FUN_1800fe8d4(*(undefined8 *)(param_1 + 0x58));
      }
      *(longlong *)(param_1 + 0x58) = lVar6;
      *(int *)(param_1 + 0x54) = iVar10;
      iVar9 = *(int *)(param_1 + 0x50);
    }
    else {
      lVar6 = *(longlong *)(param_1 + 0x58);
    }
    *(float *)(lVar6 + (longlong)iVar9 * 8) = fVar2 + fVar14;
    *(float *)(lVar6 + 4 + (longlong)iVar9 * 8) = fVar12;
    *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + 1;
    uVar1 = *(undefined4 *)(lVar3 + 0xe50);
    uVar4 = FUN_18010129b(5,DAT_1802ac570);
    local_90 = 0;
    local_98 = uVar1;
    FUN_18018fc54(param_1,*(undefined8 *)(param_1 + 0x58),*(undefined4 *)(param_1 + 0x50),uVar4);
    *(undefined4 *)(param_1 + 0x50) = 0;
  }
  if (DAT_180402640 == (local_80 ^ (ulonglong)auStack_b8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_80 ^ (ulonglong)auStack_b8);
}

