/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1014b5db */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_1014b5db(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  float10 fVar4;
  uint uVar5;
  uint uVar6;
  float fVar7;
  float fVar8;
  undefined4 local_84;
  undefined4 local_80;
  float local_7c;
  float local_78;
  float local_74;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float local_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float local_54;
  float fStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined8 local_44;
  float local_3c;
  float fStack_38;
  float local_34;
  float fStack_30;
  float local_2c;
  float local_28;
  undefined8 local_24;
  float local_1c;
  float fStack_18;
  uint local_14;
  
  iVar2 = DAT_1039d74c;
  local_14 = DAT_10388d00 ^ (uint)&local_84;
  *(undefined1 *)(*(int *)(DAT_1039d74c + 0x14cc) + 0xfb) = 1;
  iVar1 = *(int *)(iVar2 + 0x14cc);
  uVar3 = 0;
  if (*(char *)(iVar1 + 0xfe) == '\0') {
    local_80 = FUN_10113594(param_1);
    local_84 = FUN_100fd57d(param_1,0);
    FUN_100fdb2e(&local_1c,param_1,local_84,0,0xbf800000);
    fVar4 = (float10)FUN_101155d9();
    local_78 = (float)fVar4;
    local_74 = local_78 * _DAT_102b963c + *(float *)(iVar2 + 0xd10) + *(float *)(iVar2 + 0xd10);
    fVar4 = (float10)FUN_10115533();
    FUN_1010c427(&local_2c,*param_2,param_2[1],(float)fVar4,local_74);
    local_74 = (float)(int)local_2c;
    fStack_70 = 0.0;
    fStack_6c = 0.0;
    fStack_68 = 0.0;
    fVar4 = (float10)FUN_100fdbca((float)(int)local_28,fStack_18);
    local_7c = (float)fVar4;
    local_3c = *(float *)(iVar1 + 0x144);
    fStack_38 = *(float *)(iVar1 + 0x148);
    local_64 = *(float *)(iVar1 + 0x148);
    fStack_60 = 0.0;
    fStack_5c = 0.0;
    fStack_58 = 0.0;
    local_54 = *(float *)(iVar1 + 0x144);
    fStack_50 = *(float *)(iVar1 + 0x148);
    uStack_4c = 0;
    uStack_48 = 0;
    local_74 = local_74 + (float)*(undefined8 *)(iVar1 + 0x144);
    fVar8 = local_7c + (float)((ulonglong)*(undefined8 *)(iVar1 + 0x144) >> 0x20);
    fStack_6c = fStack_70 + 0.0;
    local_24 = CONCAT44(fVar8,local_74);
    local_34 = local_74;
    if (0.0 < local_1c) {
      local_34 = local_1c + *(float *)(iVar2 + 0xd24) + local_74;
    }
    fStack_68 = 0.0;
    fStack_30 = fVar8 + 0.0;
    *(undefined4 *)(iVar2 + 0x1e48) = 0;
    *(undefined4 *)(iVar2 + 0x1e4c) = 0;
    fStack_70 = fVar8;
    local_2c = local_3c;
    local_28 = fStack_38;
    uVar3 = FUN_10112bcf(&local_3c,&local_34);
    if ((char)uVar3 == '\0') {
      local_44 = CONCAT44(fStack_30 - fStack_38,local_34 - local_3c);
      FUN_1010c810(&local_44,*(undefined4 *)(iVar2 + 0xd10));
      FUN_1010c9d8(&local_3c,0,&local_2c,0);
      *(undefined4 *)(iVar2 + 0x1ed0) = 0;
    }
    else {
      FUN_10115649();
      if (0.0 < local_1c) {
        fVar8 = *(float *)(iVar2 + 0xd24) + local_74;
        fStack_60 = *(float *)(iVar2 + 0xd10) + local_64;
        fStack_5c = fStack_6c + 0.0;
        fStack_58 = fStack_68 + 0.0;
        local_64 = fVar8;
        FUN_100fd5ae(fVar8,fStack_60,param_1,local_84,0);
        fVar8 = (float)*(undefined8 *)(iVar1 + 0x15c);
        fVar7 = (float)((ulonglong)*(undefined8 *)(iVar1 + 0x15c) >> 0x20);
        uVar5 = -(uint)(local_1c + local_64 <= fVar8);
        uVar6 = -(uint)(fStack_18 + fStack_60 <= fVar7);
        *(ulonglong *)(iVar1 + 0x15c) =
             CONCAT44(~uVar6 & (uint)(fStack_18 + fStack_60),~uVar5 & (uint)(local_1c + local_64)) |
             CONCAT44((uint)fVar7 & uVar6,(uint)fVar8 & uVar5);
        FUN_10131ed3();
      }
      local_44 = CONCAT44(fStack_70 - fStack_50,local_74 - local_54);
      FUN_1010c3c7(local_80,&local_44,0x80,0);
    }
  }
  if (DAT_10388d00 == (local_14 ^ (uint)&local_84)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

