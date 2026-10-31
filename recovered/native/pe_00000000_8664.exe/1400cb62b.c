/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400cb62b */

ulonglong FUN_1400cb62b(longlong *param_1,longlong *param_2,uint param_3)

{
  undefined4 *puVar1;
  float fVar2;
  float fVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  undefined4 uVar8;
  longlong lVar9;
  int iVar10;
  uint uVar11;
  undefined8 unaff_RBX;
  int iVar12;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_60;
  float local_5c;
  undefined4 local_58;
  float fStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  lVar6 = DAT_140f2a910;
  local_48 = DAT_140f17b40 ^ (ulonglong)auStack_98;
  lVar5 = *(longlong *)(DAT_140f2a910 + 0x1608);
  cVar4 = *(char *)(lVar5 + 0x10e);
  if (cVar4 != '\0') goto LAB_1400cb8d5;
  if ((param_3 >> 0x14 & 1) == 0) {
    FUN_1400914dd(*(undefined4 *)((longlong)param_1 + 0x1c));
  }
  FUN_1400cb90d(&local_58,param_1);
  iVar7 = *(int *)(lVar6 + 0x2590);
  if (iVar7 == *(int *)(lVar6 + 0x2594)) {
    if (iVar7 == 0) {
      iVar10 = 8;
    }
    else {
      iVar10 = iVar7 / 2 + iVar7;
    }
    iVar12 = iVar7 + 1;
    if (iVar7 + 1 < iVar10) {
      iVar12 = iVar10;
    }
    lVar9 = FUN_140077ab4((longlong)iVar12 << 4);
    if (*(longlong *)(lVar6 + 0x2598) != 0) {
      FUN_1401c5180(lVar9,*(longlong *)(lVar6 + 0x2598),(longlong)*(int *)(lVar6 + 0x2590) << 4);
      FUN_140077b90(*(undefined8 *)(lVar6 + 0x2598));
    }
    *(longlong *)(lVar6 + 0x2598) = lVar9;
    *(int *)(lVar6 + 0x2594) = iVar12;
    iVar7 = *(int *)(lVar6 + 0x2590);
  }
  else {
    lVar9 = *(longlong *)(lVar6 + 0x2598);
  }
  puVar1 = (undefined4 *)(lVar9 + (longlong)iVar7 * 0x10);
  *puVar1 = local_58;
  puVar1[1] = fStack_54;
  puVar1[2] = uStack_50;
  puVar1[3] = uStack_4c;
  *(int *)(lVar6 + 0x2590) = *(int *)(lVar6 + 0x2590) + 1;
  *(longlong **)(lVar6 + 0x2560) = param_1;
  *param_1 = lVar5;
  param_1[0x13] = *(longlong *)(lVar5 + 0x158);
  iVar7 = (int)param_1[6];
  if (iVar7 == *(int *)(lVar6 + 4)) {
    fVar2 = *(float *)((longlong)param_1 + 0x44);
    fVar3 = *(float *)((longlong)param_1 + 0x8c);
    *(int *)(lVar5 + 0x158) = (int)param_1[7];
    *(float *)(lVar5 + 0x15c) = fVar2 + fVar3;
    *(char *)((longlong)param_1 + 0x82) = *(char *)((longlong)param_1 + 0x82) + '\x01';
    goto LAB_1400cb8d5;
  }
  if (((*(uint *)(param_1 + 3) ^ param_3) & 1) == 0) {
    if (((param_3 & 0x100001) == 0) && (*(char *)((longlong)param_1 + 0x85) != '\0')) {
LAB_1400cb7a8:
      if (1 < (ulonglong)(longlong)(int)param_1[1]) {
        FUN_1401a7460(param_1[2],(longlong)(int)param_1[1],0x38);
        iVar7 = (int)param_1[6];
      }
    }
  }
  else if ((param_3 >> 0x14 & 1) == 0) goto LAB_1400cb7a8;
  uVar11 = param_3 | 0x80;
  if ((param_3 & 0x380) != 0) {
    uVar11 = param_3;
  }
  *(undefined1 *)((longlong)param_1 + 0x85) = 0;
  *(uint *)(param_1 + 3) = uVar11;
  lVar9 = param_2[1];
  param_1[7] = *param_2;
  param_1[8] = lVar9;
  *(undefined1 *)((longlong)param_1 + 0x83) = 1;
  *(int *)((longlong)param_1 + 0x34) = iVar7;
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)(lVar6 + 4);
  *(undefined4 *)(param_1 + 10) = *(undefined4 *)((longlong)param_1 + 0x4c);
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0;
  fVar2 = *(float *)(lVar6 + 0xe08);
  *(float *)((longlong)param_1 + 0x8c) = fVar2;
  param_1[0x12] = *(longlong *)(lVar6 + 0xdf4);
  *(undefined4 *)(param_1 + 0x11) = 0xffff0000;
  *(undefined1 *)((longlong)param_1 + 0x82) = 1;
  fVar3 = *(float *)((longlong)param_1 + 0x44);
  *(int *)(lVar5 + 0x158) = (int)param_1[7];
  *(float *)(lVar5 + 0x15c) = fVar2 + fVar3;
  uVar8 = FUN_14007a557(((uVar11 >> 0x15 & 1) == 0) * '\x03' + '%');
  if (0.0 < *(float *)(lVar6 + 0xe64)) {
    fStack_54 = *(float *)((longlong)param_1 + 0x44);
    local_58 = (undefined4)param_1[0xf];
    local_5c = fStack_54 - *(float *)(lVar6 + 0xe64);
    local_60 = *(undefined4 *)((longlong)param_1 + 0x74);
    local_70 = 0;
    local_78 = 0;
    FUN_1400de294(*(undefined8 *)(lVar5 + 800),&local_60,&local_58,uVar8);
  }
LAB_1400cb8d5:
  if (DAT_140f17b40 != (local_48 ^ (ulonglong)auStack_98)) {
                    /* WARNING: Subroutine does not return */
    FUN_140188a00(local_48 ^ (ulonglong)auStack_98);
  }
  return (CONCAT71((int7)((ulonglong)unaff_RBX >> 8),cVar4) ^ 1) & 0xffffffff;
}

