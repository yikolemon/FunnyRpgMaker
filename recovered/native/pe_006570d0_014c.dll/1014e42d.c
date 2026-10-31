/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1014e42d */

uint FUN_1014e42d(int *param_1,int *param_2,uint param_3)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  char cVar9;
  undefined4 unaff_EBX;
  undefined3 uVar11;
  int iVar10;
  undefined1 auStack_2c [3];
  char local_29;
  int local_28;
  int local_24;
  float local_20;
  int local_1c;
  float fStack_18;
  uint local_14;
  
  iVar4 = DAT_1039d74c;
  local_14 = DAT_10388d00 ^ (uint)auStack_2c;
  iVar7 = *(int *)(DAT_1039d74c + 0x14cc);
  cVar9 = *(char *)(iVar7 + 0xfe);
  uVar11 = (undefined3)((uint)unaff_EBX >> 8);
  if (cVar9 != '\0') goto LAB_1014e6b2;
  if ((param_3 >> 0x14 & 1) == 0) {
    FUN_10113406(param_1[5]);
  }
  FUN_1014e6da();
  iVar5 = *(int *)(iVar4 + 0x237c);
  local_29 = cVar9;
  local_28 = iVar7;
  if (iVar5 == *(int *)(iVar4 + 0x2380)) {
    if (iVar5 == 0) {
      iVar7 = 8;
    }
    else {
      iVar7 = iVar5 / 2 + iVar5;
    }
    iVar10 = iVar5 + 1;
    if (iVar5 + 1 < iVar7) {
      iVar10 = iVar7;
    }
    iVar7 = FUN_100fa1fa(iVar10 * 8);
    if (*(int *)(iVar4 + 0x2384) != 0) {
      FUN_1025b2d0(iVar7,*(int *)(iVar4 + 0x2384),*(int *)(iVar4 + 0x237c) << 3);
      FUN_100fa2cb(*(undefined4 *)(iVar4 + 0x2384));
    }
    *(int *)(iVar4 + 0x2384) = iVar7;
    *(int *)(iVar4 + 0x2380) = iVar10;
    iVar5 = *(int *)(iVar4 + 0x237c);
    uVar11 = (undefined3)((uint)iVar10 >> 8);
  }
  else {
    iVar7 = *(int *)(iVar4 + 0x2384);
  }
  *(ulonglong *)(iVar7 + iVar5 * 8) = CONCAT44(fStack_18,local_1c);
  *(int *)(iVar4 + 0x237c) = *(int *)(iVar4 + 0x237c) + 1;
  *(int **)(iVar4 + 0x2358) = param_1;
  *param_1 = local_28;
  *(undefined8 *)(param_1 + 0x24) = *(undefined8 *)(local_28 + 0x144);
  iVar7 = param_1[10];
  if (iVar7 == *(int *)(iVar4 + 4)) {
    fVar1 = (float)param_1[0xf];
    fVar2 = (float)param_1[0x21];
    *(int *)(local_28 + 0x144) = param_1[0xc];
    *(float *)(local_28 + 0x148) = fVar1 + fVar2;
    *(char *)((int)param_1 + 0x7a) = *(char *)((int)param_1 + 0x7a) + '\x01';
    cVar9 = local_29;
    goto LAB_1014e6b2;
  }
  if (((param_1[4] ^ param_3) & 1) == 0) {
    if (((param_3 & 0x100001) == 0) && (*(char *)((int)param_1 + 0x7d) != '\0')) {
LAB_1014e58f:
      if (1 < (uint)param_1[1]) {
        FUN_1026fb00(param_1[3],param_1[1],0x30,&LAB_1014e718);
        iVar7 = param_1[10];
      }
    }
  }
  else if ((param_3 >> 0x14 & 1) == 0) goto LAB_1014e58f;
  *(undefined1 *)((int)param_1 + 0x7d) = 0;
  uVar8 = param_3 | 0x80;
  if ((param_3 & 0x380) != 0) {
    uVar8 = param_3;
  }
  param_1[4] = uVar8;
  iVar5 = param_2[1];
  iVar10 = param_2[2];
  iVar3 = param_2[3];
  param_1[0xc] = *param_2;
  param_1[0xd] = iVar5;
  param_1[0xe] = iVar10;
  param_1[0xf] = iVar3;
  *(undefined1 *)((int)param_1 + 0x7b) = 1;
  param_1[0xb] = iVar7;
  param_1[10] = *(int *)(iVar4 + 4);
  param_1[0x12] = param_1[0x11];
  param_1[0x11] = 0;
  fVar1 = *(float *)(iVar4 + 0xd20);
  param_1[0x21] = (int)fVar1;
  iVar7 = *(int *)(iVar4 + 0xd0c);
  iVar5 = *(int *)(iVar4 + 0xd10);
  param_1[0x23] = iVar5;
  param_1[0x22] = iVar7;
  param_1[0x20] = -0x10000;
  *(undefined1 *)((int)param_1 + 0x7a) = 1;
  fVar2 = (float)param_1[0xf];
  *(int *)(local_28 + 0x144) = param_1[0xc];
  *(float *)(local_28 + 0x148) = fVar1 + fVar2;
  uVar6 = FUN_100fcb39(((uVar8 >> 0x15 & 1) == 0) * '\x03' + '%',0x3f800000);
  cVar9 = local_29;
  uVar11 = (undefined3)((uint)iVar5 >> 8);
  if (0.0 < *(float *)(iVar4 + 0xd7c)) {
    fStack_18 = (float)param_1[0xf];
    local_1c = param_1[0x1c];
    local_20 = fStack_18 - *(float *)(iVar4 + 0xd7c);
    local_24 = param_1[0x1b];
    FUN_1018b85a(&local_24,&local_1c,uVar6,0,0);
  }
LAB_1014e6b2:
  if (DAT_10388d00 != (local_14 ^ (uint)auStack_2c)) {
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
  return CONCAT31(uVar11,cVar9) ^ 1;
}

