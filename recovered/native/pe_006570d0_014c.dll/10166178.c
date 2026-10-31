/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10166178 */

void FUN_10166178(undefined1 *param_1)

{
  byte bVar1;
  ushort uVar2;
  char cVar3;
  undefined1 uVar4;
  float fVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 uVar8;
  float fVar9;
  float fVar10;
  undefined1 *puVar11;
  int iVar12;
  float10 fVar13;
  float local_b0;
  float local_ac;
  float local_a8;
  int local_a4;
  char local_9d;
  float local_9c;
  int local_98;
  int local_94;
  float local_90;
  float local_8c;
  undefined1 *local_88;
  float local_84;
  undefined4 local_80;
  int local_7c;
  int local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  char local_52;
  byte local_51;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  undefined4 local_2c;
  float local_28;
  undefined4 local_24;
  float local_20;
  undefined4 local_1c;
  undefined4 local_18;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_b0;
  iVar7 = *(int *)((int)DAT_1039d74c + 0x14cc);
  if (*(char *)(iVar7 + 0xfe) != '\0') goto LAB_10166982;
  iVar12 = *(int *)((int)DAT_1039d74c + 0x2308);
  local_94 = iVar7;
  if (iVar12 == 0) {
    FUN_100fcef5("Call should only be done while in BeginTable() scope!");
    goto LAB_10166982;
  }
  local_a8 = DAT_1039d74c;
  iVar7 = *(int *)(iVar12 + 0x48);
  fVar9 = (float)(iVar7 * 0x74 + *(int *)(iVar12 + 0x10));
  puVar11 = &DAT_10356101;
  if (param_1 != (undefined1 *)0x0) {
    puVar11 = param_1;
  }
  local_78 = FUN_100fd57d(puVar11,0);
  local_88 = puVar11;
  FUN_100fdb2e(&local_20,puVar11,local_78,0,0xbf800000);
  fVar5 = *(float *)(local_94 + 0x144);
  local_24 = *(undefined4 *)(local_94 + 0x148);
  local_80 = *(undefined4 *)(local_94 + 0x148);
  local_a4 = iVar7;
  local_28 = fVar5;
  FUN_101651f3(&local_38,iVar12,iVar7);
  fVar13 = (float10)FUN_100fdbca(local_1c,*(float *)(iVar12 + 0x58) -
                                          (*(float *)(iVar12 + 0x5c) + *(float *)(iVar12 + 0x5c)));
  fVar10 = local_a8;
  local_90 = (float)fVar13;
  local_18 = 0;
  local_98 = iVar12;
  local_8c = fVar5;
  local_68 = local_90;
  if (((*(byte *)(iVar12 + 4) & 8) == 0) || ((*(byte *)((int)fVar9 + 1) & 2) != 0)) {
    local_64 = 0.0;
    local_ac = local_20 + fVar5 + 0.0;
LAB_10166388:
    uStack_58 = 0;
    uStack_5c = 0;
    uStack_60 = 0;
    local_b0 = local_30;
    fVar13 = (float10)FUN_100ea38a(local_ac,local_30);
    local_30 = (float)fVar13;
    local_9c = 0.0;
    local_6c = local_30;
  }
  else {
    local_64 = (float)(int)(*(float *)((int)local_a8 + 0x1228) * DAT_102b8c94 +
                           *(float *)((int)local_a8 + 0xd0c));
    uVar2 = *(ushort *)((int)fVar9 + 0x5e);
    uStack_60 = 0;
    uStack_5c = 0;
    uStack_58 = 0;
    if ((short)uVar2 < 1) {
      local_9c = 0.0;
      local_ac = local_20 + fVar5 + 0.0 + local_64;
      if (uVar2 == 0xffff) goto LAB_10166388;
    }
    else {
      FUN_100fa4b1(&local_18,4,&DAT_1033b386,uVar2 + 1);
      local_9c = *(float *)((int)fVar10 + 0xd24);
      FUN_100fdb2e(&local_48,&local_18,0,0,0xbf800000);
      local_9c = local_9c + local_48;
      local_ac = local_20 + local_8c + local_9c + local_64;
    }
    local_b0 = local_30;
    fVar10 = local_a8;
  }
  fVar13 = (float10)FUN_100fdbca(*(undefined4 *)((int)fVar9 + 0x4c),local_30);
  *(float *)((int)fVar9 + 0x4c) = (float)fVar13;
  fVar13 = (float10)FUN_100fdbca(*(undefined4 *)((int)fVar9 + 0x50),local_ac);
  *(float *)((int)fVar9 + 0x50) = (float)fVar13;
  fVar5 = (float)FUN_101021d4(local_88,0);
  local_ac = local_34;
  fVar13 = (float10)FUN_100fdbca(local_2c,*(float *)((int)fVar10 + 0xd30) +
                                          *(float *)((int)fVar10 + 0xd30) + local_90 + local_34);
  local_84 = local_38;
  local_48 = local_38;
  local_44 = local_ac;
  local_40 = local_b0;
  local_3c = (float)fVar13;
  local_50 = 0.0;
  local_4c = local_90;
  FUN_1010c810(&local_50,0xbf800000);
  cVar3 = FUN_1010c9d8(&local_48,fVar5,0,0);
  if (cVar3 != '\0') {
    local_7c = (int)*(short *)(local_98 + 0x1c2);
    local_ac = fVar9;
    local_90 = fVar5;
    local_9d = FUN_1012d77e(&local_48,fVar5,&local_51,&local_52,0x1000);
    iVar7 = local_94;
    if (((local_52 == '\0') && (local_51 == 0)) && (local_a4 != local_7c)) {
      iVar12 = local_98;
      if ((*(byte *)(local_98 + 0x68) & 1) == 0) {
        uVar8 = *(undefined4 *)(local_98 + 0x48);
        uVar6 = FUN_100fcb39(0x30,0x3f800000);
        iVar12 = local_98;
        FUN_10165294(3,uVar6,uVar8);
      }
    }
    else {
      iVar7 = 0x1b;
      if (local_52 == '\0') {
        iVar7 = local_51 + 0x19;
      }
      uVar8 = FUN_100fcb39(iVar7,0x3f800000);
      iVar12 = local_98;
      FUN_10165294(3,uVar8,*(undefined4 *)(local_98 + 0x48));
      iVar7 = local_94;
    }
    fVar5 = local_90;
    FUN_100fe25e(&local_48,local_90,10);
    fVar9 = local_a8;
    if (local_52 == '\0') {
      *(float *)(iVar7 + 0x148) =
           *(float *)((int)local_a8 + 0xd20) * DAT_102b8d58 + *(float *)(iVar7 + 0x148);
    }
    else {
      *(short *)(iVar12 + 0x1ca) = (short)local_a4;
      *(float *)(iVar7 + 0x148) =
           *(float *)((int)local_a8 + 0xd20) * DAT_102b8d58 + *(float *)(iVar7 + 0x148);
      if ((((*(byte *)(iVar12 + 4) & 2) != 0) && (cVar3 = FUN_1010378f(0,0xbf800000), cVar3 != '\0')
          ) && (*(char *)((int)fVar9 + 0x2250) == '\0')) {
        *(undefined2 *)(iVar12 + 0x4e) = *(undefined2 *)(iVar12 + 0x4c);
        fVar10 = *(float *)((int)fVar9 + 0xd8);
        if (((fVar10 < 0.0) &&
            (*(float *)((int)fVar9 + 0xe4) <= local_84 && local_84 != *(float *)((int)fVar9 + 0xe4))
            ) && ((*(short *)((int)local_ac + 0x5a) != -1 && (*(int *)(iVar12 + 0x10) != 0)))) {
          FUN_1016107e(iVar12,local_a4,
                       (int)*(short *)(*(int *)(iVar12 + 0x10) + 0x56 +
                                      *(short *)((int)local_ac + 0x5a) * 0x74));
          fVar10 = *(float *)((int)fVar9 + 0xd8);
        }
        if ((((0.0 < fVar10) && (local_b0 < *(float *)((int)fVar9 + 0xe4))) &&
            (*(short *)((int)local_ac + 0x5c) != -1)) && (*(int *)(iVar12 + 0x10) != 0)) {
          FUN_1016107e(iVar12,local_a4,
                       (int)*(short *)(*(int *)(iVar12 + 0x10) + 0x56 +
                                      *(short *)((int)local_ac + 0x5c) * 0x74));
        }
      }
    }
    local_b0 = (local_b0 - local_64) - local_9c;
    fVar13 = (float10)FUN_100fdbca(local_b0,local_8c);
    fVar10 = local_ac;
    local_a8 = (float)fVar13;
    local_70 = local_a8;
    if (((*(byte *)(iVar12 + 4) & 8) != 0) && ((*(byte *)((int)local_ac + 1) & 2) == 0)) {
      if (*(short *)((int)local_ac + 0x5e) != -1) {
        fVar13 = (float10)FUN_100fdbca(local_84,local_b0);
        local_b0 = (float)fVar13;
        local_74 = local_b0;
        if (0 < *(short *)((int)fVar10 + 0x5e)) {
          uVar8 = FUN_100fcb39(0,0x3f333333);
          FUN_100fcc65(0,uVar8);
          iVar12 = local_98;
          FUN_100fd5ae(*(float *)((int)fVar9 + 0xd24) + local_b0,local_80,&local_18,0,1);
          FUN_100fce8e(1);
          local_b0 = local_b0 + local_9c;
        }
        bVar1 = *(byte *)((int)local_ac + 0x71);
        uVar8 = FUN_100fcb39(0,0x3f800000);
        FUN_10193b2c(*(undefined4 *)(iVar7 + 0x2e8),local_b0,local_80,uVar8,(bVar1 & 3) == 1 ^ 3,
                     0x3f266666);
      }
      fVar5 = local_90;
      if ((local_9d != '\0') && (local_a4 != *(short *)(iVar12 + 0x1ce))) {
        uVar4 = FUN_10165ab3(local_ac);
        FUN_10165b04(local_a4,uVar4,*(undefined1 *)((int)fVar9 + 0x105));
      }
    }
    iVar12 = local_78;
    local_4c = local_3c;
    local_50 = local_a8;
    FUN_100fdc57(*(undefined4 *)(iVar7 + 0x2e8),&local_28,&local_50,local_a8,local_88,local_78,
                 &local_20);
    if (((local_a8 - local_28 < local_20) && (local_51 != 0)) &&
       (*(int *)((int)fVar9 + 0x1528) == 0)) {
      FUN_10115d65(&DAT_10334092,iVar12 - (int)local_88,local_88);
    }
    cVar3 = FUN_101168ea(0,fVar5);
    if (cVar3 != '\0') {
      FUN_10163fd1(local_a4);
    }
  }
LAB_10166982:
  if (DAT_10388d00 != (local_14 ^ (uint)&local_b0)) {
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
  return;
}

