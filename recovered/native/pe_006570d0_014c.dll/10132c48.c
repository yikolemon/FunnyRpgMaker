/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10132c48 */

undefined4 FUN_10132c48(undefined4 param_1,int param_2,uint param_3)

{
  float fVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  undefined1 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  float10 fVar8;
  undefined1 auStack_a0 [3];
  byte local_9d;
  float local_9c;
  float local_98;
  float local_94;
  undefined4 local_90;
  undefined4 local_8c;
  float10 local_88;
  undefined4 local_7c;
  undefined4 local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  float local_50;
  float local_4c;
  undefined1 local_46;
  byte local_45;
  float local_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float local_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float local_24;
  float local_20;
  undefined8 local_1c;
  uint local_14;
  
  iVar3 = DAT_1039d74c;
  local_14 = DAT_10388d00 ^ (uint)auStack_a0;
  *(undefined1 *)(*(int *)(DAT_1039d74c + 0x14cc) + 0xfb) = 1;
  iVar2 = *(int *)(iVar3 + 0x14cc);
  uVar7 = *(undefined4 *)(iVar3 + 0x1ed0);
  *(undefined4 *)(iVar3 + 0x1ed0) = 0;
  if (*(char *)(iVar2 + 0xfe) == '\0') {
    local_8c = uVar7;
    local_9c = (float)FUN_101021d4(param_1,0);
    local_98 = 0.0;
    local_94 = 0.0;
    if ((param_3 & 0x20) == 0) {
      fVar8 = (float10)FUN_101155f9();
      local_94 = (float)fVar8;
      local_6c = local_94;
    }
    local_78 = FUN_100fd57d(param_1,0);
    FUN_100fdb2e(&local_24,param_1,local_78,0,0xbf800000);
    if (param_2 != 0 && (char)param_3 < '\0') {
      FUN_100fdb2e(&local_34,param_2,0,0,0xbf800000);
      local_98 = local_34;
    }
    local_68 = local_94;
    if ((param_3 & 0x40) == 0) {
      if ((char)param_3 < '\0') {
        local_68 = *(float *)(iVar3 + 0xd0c) + *(float *)(iVar3 + 0xd0c) + local_98 + local_94;
      }
      else {
        fVar8 = (float10)FUN_10115533();
        local_68 = (float)fVar8;
        local_70 = local_68;
      }
    }
    fVar1 = *(float *)(iVar3 + 0xd10);
    local_44 = *(float *)(iVar2 + 0x144);
    fStack_40 = *(float *)(iVar2 + 0x148);
    uStack_64 = 0;
    uStack_60 = 0;
    uStack_5c = 0;
    fStack_2c = local_68 + local_44;
    fStack_28 = fVar1 + fVar1 + local_20 + fStack_40;
    fStack_3c = 0.0;
    if (0.0 < local_24) {
      fStack_3c = local_24 + *(float *)(iVar3 + 0xd24);
    }
    fStack_3c = fStack_3c + fStack_2c;
    fStack_38 = fStack_28 + 0.0;
    local_1c = CONCAT44(fStack_38 - fStack_40,fStack_3c - local_44);
    local_98 = (float)iVar2;
    local_34 = local_44;
    fStack_30 = fStack_40;
    FUN_1010c810(&local_1c,fVar1);
    fVar1 = local_9c;
    uVar7 = 0;
    cVar4 = FUN_1010c9d8(&local_44,local_9c,&local_34,0);
    if (cVar4 == '\0') goto LAB_1013320d;
    uVar5 = FUN_1012d77e(&local_34,fVar1,&local_45,&local_46,0);
    local_88 = (float10)CONCAT91(local_88._1_9_,uVar5);
    local_90 = FUN_100fa6c3("##ComboPopup",0,fVar1);
    local_9d = FUN_10103f84(local_90,0);
    if ((local_9d == 0) && (local_88._0_1_ != '\0')) {
      FUN_10115eed(local_90,0);
      local_9d = 1;
    }
    local_7c = FUN_100fcb39(local_45 + 7,0x3f800000);
    local_88 = (float10)FUN_100fdbca(local_34,fStack_2c - local_94);
    FUN_100fe25e(&local_34,local_9c,0);
    local_9c = (float)local_88;
    local_74 = local_9c;
    if ((param_3 & 0x40) == 0) {
      uVar7 = 0xf0;
      if ((param_3 & 0x20) == 0) {
        uVar7 = 0x50;
      }
      local_1c = CONCAT44(fStack_28,local_9c);
      FUN_1018b85a(&local_34,&local_1c,local_7c,*(undefined4 *)(iVar3 + 0xd14),uVar7);
    }
    if ((param_3 & 0x20) == 0) {
      uVar7 = FUN_100fcb39(local_45 | local_9d | 0x16,0x3f800000);
      uVar6 = FUN_100fcb39(0,0x3f800000);
      fVar1 = local_98;
      local_88 = (float10)CONCAT64(local_88._4_6_,uVar6);
      uVar6 = 0xa0;
      if (local_68 <= local_94) {
        uVar6 = 0xf0;
      }
      local_1c = CONCAT44(fStack_30,local_9c);
      FUN_1018b85a(&local_1c,&fStack_2c,uVar7,*(undefined4 *)(iVar3 + 0xd14),uVar6);
      if ((local_94 + local_9c) - *(float *)(iVar3 + 0xd0c) <= fStack_2c) {
        FUN_10193b2c(*(undefined4 *)((int)fVar1 + 0x2e8),*(float *)(iVar3 + 0xd10) + local_9c,
                     fStack_30 + *(float *)(iVar3 + 0xd10),local_88._0_4_,3,0x3f800000);
      }
    }
    FUN_100fe07c(local_34,fStack_30,fStack_2c,fStack_28,*(undefined4 *)(iVar3 + 0xd14));
    uVar7 = local_8c;
    if ((param_3 >> 0x14 & 1) == 0) {
      if (param_2 != 0 && (char)((param_3 & 0x40) >> 6) == '\0') {
        if (*(char *)(iVar3 + 0x2748) == '\x01') {
          FUN_10118366("{","}");
        }
        local_1c = 0;
        local_50 = local_9c;
        local_4c = fStack_28;
        local_58 = CONCAT44((float)((ulonglong)*(undefined8 *)(iVar3 + 0xd0c) >> 0x20) + fStack_30,
                            (float)*(undefined8 *)(iVar3 + 0xd0c) + local_34);
        FUN_100fdbf2(&local_58,&local_50,param_2,0,0,&local_1c,0);
      }
    }
    else {
      *(ulonglong *)(iVar3 + 0x2588) = CONCAT44(fStack_30,local_34);
      *(float *)(iVar3 + 0x2590) = local_9c;
      *(float *)(iVar3 + 0x2594) = fStack_28;
    }
    if (0.0 < local_24) {
      FUN_100fd5ae(fStack_2c + *(float *)(iVar3 + 0xd24),fStack_30 + *(float *)(iVar3 + 0xd10),
                   param_1,local_78,0);
    }
    if (local_9d != 0) {
      *(undefined4 *)(iVar3 + 0x1ed0) = uVar7;
      uVar7 = FUN_1013323b(local_90,&local_34,param_3);
      goto LAB_1013320d;
    }
  }
  uVar7 = 0;
LAB_1013320d:
  if (DAT_10388d00 != (local_14 ^ (uint)auStack_a0)) {
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
  return uVar7;
}

