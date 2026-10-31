/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10130e0c */

undefined4 FUN_10130e0c(undefined4 param_1,char param_2)

{
  float fVar1;
  int iVar2;
  char cVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  byte bVar6;
  undefined *puVar7;
  undefined4 uVar8;
  int iVar9;
  float10 fVar10;
  float fVar11;
  float local_8c;
  int local_88;
  undefined4 local_84;
  undefined4 local_80;
  int local_7c;
  float local_78;
  float local_74;
  float local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  float local_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float local_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  undefined8 local_40;
  byte local_36;
  char local_35;
  float local_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float local_24;
  float local_20;
  undefined8 local_1c;
  uint local_14;
  
  iVar2 = DAT_1039d74c;
  local_14 = DAT_10388d00 ^ (uint)&local_8c;
  *(undefined1 *)(*(int *)(DAT_1039d74c + 0x14cc) + 0xfb) = 1;
  iVar9 = *(int *)(iVar2 + 0x14cc);
  uVar8 = 0;
  if (*(char *)(iVar9 + 0xfe) == '\0') {
    local_88 = iVar2;
    local_84 = FUN_101021d4(param_1,0);
    local_80 = FUN_100fd57d(param_1,0);
    iVar2 = local_88;
    FUN_100fdb2e(&local_24,param_1,local_80,0,0xbf800000);
    fVar10 = (float10)FUN_101155f9();
    local_74 = (float)fVar10;
    local_60 = *(float *)(iVar9 + 0x144);
    fStack_5c = *(float *)(iVar9 + 0x148);
    fVar1 = *(float *)(iVar2 + 0xd10);
    fVar11 = 0.0;
    if (0.0 < local_24) {
      fVar11 = local_24 + *(float *)(iVar2 + 0xd24);
    }
    fStack_2c = fVar11 + local_74 + local_60;
    fStack_28 = fVar1 + fVar1 + local_20 + fStack_5c;
    local_1c = CONCAT44(fStack_28 - fStack_5c,fStack_2c - local_60);
    fStack_58 = 0.0;
    fStack_54 = 0.0;
    uStack_6c = 0;
    uStack_68 = 0;
    uStack_64 = 0;
    local_7c = iVar9;
    local_70 = local_74;
    local_34 = local_60;
    fStack_30 = fStack_5c;
    FUN_1010c810(&local_1c,fVar1);
    uVar4 = local_84;
    uVar8 = 0;
    cVar3 = FUN_1010c9d8(&local_34,local_84,0,0);
    if (cVar3 != '\0') {
      local_50 = local_70 + local_60;
      fStack_4c = local_70 + fStack_5c;
      fStack_48 = local_70 + fStack_58;
      fStack_44 = local_70 + fStack_54;
      local_1c = CONCAT44((float)(int)((fStack_4c + fStack_5c) * DAT_102b89c0._4_4_ +
                                      DAT_102b89c0._4_4_),
                          (float)(int)((local_50 + local_60) * (float)DAT_102b89c0 +
                                      (float)DAT_102b89c0));
      local_8c = (DAT_102b8a50 + local_70) * DAT_102b70e0;
      uVar8 = FUN_1012d77e(&local_34,uVar4,&local_35,&local_36,0);
      if ((char)uVar8 != '\0') {
        FUN_10102913(uVar4);
      }
      FUN_100fe25e(&local_34,uVar4,0);
      uVar4 = FUN_101880ee(local_8c);
      bVar6 = 7;
      if (local_35 != '\0') {
        bVar6 = local_36 | 8;
      }
      uVar5 = FUN_100fcb39(bVar6,0x3f800000);
      local_84 = uVar4;
      FUN_1018c0fc(&local_1c,local_8c,uVar5,uVar4);
      if (param_2 != '\0') {
        fVar10 = (float10)FUN_100fdbca(0x3f800000,(float)(int)(local_70 / DAT_102b8a58));
        local_78 = (float)fVar10;
        uVar4 = FUN_100fcb39(0x12,0x3f800000);
        FUN_1018c0fc(&local_1c,local_8c - local_78,uVar4,0);
      }
      iVar9 = local_88;
      if (0.0 < *(float *)(local_88 + 0xd18)) {
        local_70 = *(float *)(local_88 + 0xd18);
        uVar5 = FUN_100fcb39(6,0x3f800000);
        uVar4 = local_84;
        local_40 = CONCAT44((float)((ulonglong)local_1c >> 0x20) + DAT_102b70a0._4_4_,
                            (float)local_1c + (float)DAT_102b70a0);
        FUN_1018bfde(&local_40,local_8c,uVar5,local_84,local_70);
        local_70 = *(float *)(local_88 + 0xd18);
        uVar5 = FUN_100fcb39(5,0x3f800000);
        iVar9 = local_88;
        FUN_1018bfde(&local_1c,local_8c,uVar5,uVar4,local_70);
      }
      local_40 = CONCAT44(*(float *)(iVar9 + 0xd10) + fStack_5c,*(float *)(iVar9 + 0xd24) + local_50
                         );
      if (*(char *)(iVar9 + 0x2748) == '\x01') {
        puVar7 = &DAT_1034a241;
        if (param_2 != '\0') {
          puVar7 = &DAT_103476f5;
        }
        FUN_100fd6a8(&local_40,puVar7,0);
      }
      if (0.0 < local_24) {
        FUN_100fd5ae((undefined4)local_40,local_40._4_4_,param_1,local_80,0);
      }
    }
  }
  if (DAT_10388d00 == (local_14 ^ (uint)&local_8c)) {
    return uVar8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

