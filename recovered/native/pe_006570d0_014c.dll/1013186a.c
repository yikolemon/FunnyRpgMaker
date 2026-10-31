/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1013186a */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float FUN_1013186a(undefined4 param_1)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  float fVar4;
  float10 fVar5;
  float fVar6;
  int local_98;
  undefined4 local_94;
  float fStack_90;
  float local_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  float local_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  float local_6c;
  float fStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  float local_5c;
  undefined4 local_58;
  float local_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  char local_2e;
  char local_2d;
  float local_2c;
  undefined8 local_28;
  float local_20;
  float local_1c;
  float local_18;
  uint local_14;
  
  iVar1 = DAT_1039d74c;
  local_14 = DAT_10388d00 ^ (uint)&local_98;
  *(undefined1 *)(*(int *)(DAT_1039d74c + 0x14cc) + 0xfb) = 1;
  fVar6 = *(float *)(iVar1 + 0x14cc);
  fVar4 = 0.0;
  if (*(char *)((int)fVar6 + 0xfe) == '\0') {
    local_98 = iVar1;
    uVar3 = FUN_101021d4(param_1,0);
    local_94 = FUN_100fd57d(param_1,0);
    local_8c = *(float *)((int)fVar6 + 0x17c);
    uStack_88 = 0;
    uStack_84 = 0;
    uStack_80 = 0;
    local_6c = *(float *)((int)fVar6 + 0x144);
    fStack_68 = *(float *)((int)fVar6 + 0x148);
    uStack_64 = 0;
    uStack_60 = 0;
    local_7c = fVar6;
    FUN_100fdb2e(&local_1c,param_1,local_94,0,0xbf800000);
    local_20 = local_8c + fStack_68 + local_18;
    local_2c = local_6c;
    local_28 = CONCAT44(local_1c + local_6c,local_8c + fStack_68);
    FUN_1010c810(&local_1c,0);
    cVar2 = FUN_1010c9d8(&local_2c,uVar3,0,0);
    fVar4 = 0.0;
    if (cVar2 != '\0') {
      local_6c = (float)FUN_1012d77e(&local_2c,uVar3,&local_2d,&local_2e,0);
      FUN_100fe25e();
      if (local_2d == '\x01') {
        FUN_10114115(7);
      }
      iVar1 = local_98;
      local_40 = *(undefined4 *)(local_98 + 0x1150);
      uStack_3c = *(undefined4 *)(local_98 + 0x1154);
      uStack_38 = *(undefined4 *)(local_98 + 0x1158);
      uStack_34 = *(undefined4 *)(local_98 + 0x115c);
      local_50 = *(undefined4 *)(local_98 + 0x1150);
      uStack_4c = *(undefined4 *)(local_98 + 0x1154);
      uStack_48 = *(undefined4 *)(local_98 + 0x1158);
      uStack_44 = *(undefined4 *)(local_98 + 0x115c);
      FUN_100fadb2(local_40,uStack_3c,uStack_38,&local_54,&local_58,&local_5c);
      fVar6 = local_5c;
      if (local_2d != '\0' || local_2e != '\0') {
        fVar6 = DAT_102b8e90;
        if (local_2e == '\0') {
          fVar6 = DAT_102b8d94;
        }
        fVar6 = fVar6 + local_5c;
        local_8c = DAT_1028b430;
        if (fVar6 <= DAT_1028b430) {
          local_8c = fVar6;
        }
        local_8c = (float)(~-(uint)(fVar6 < 0.0) & (uint)local_8c);
        uStack_88 = 0;
        uStack_84 = 0;
        uStack_80 = 0;
        local_5c = local_8c;
        fVar5 = (float10)FUN_1026dec0((double)(local_54 + _DAT_102b9510),0,0x3ff00000);
        fStack_90 = (float)fVar5;
        fVar6 = local_8c;
        local_54 = fStack_90;
      }
      FUN_100faedd(local_54,local_58,fVar6,&local_40,&uStack_3c,&uStack_38);
      local_5c = local_5c + _DAT_102b90e8;
      fVar6 = DAT_1028b430;
      if (local_5c <= DAT_1028b430) {
        fVar6 = local_5c;
      }
      local_5c = (float)(~-(uint)(local_5c < 0.0) & (uint)fVar6);
      FUN_100faedd(local_54,local_58,local_5c,&local_50,&uStack_4c,&uStack_48);
      fVar6 = *(float *)(*(int *)(iVar1 + 0x1224) + 0x38) * *(float *)(iVar1 + 0x1230) *
              DAT_102b8c70;
      local_8c = (float)(int)((int)fVar6 - (uint)(fVar6 < 0.0 && (float)(int)fVar6 != fVar6)) +
                 local_20;
      local_7c = (float)(int)*(float *)(iVar1 + 0x1204);
      uStack_78 = 0;
      uStack_74 = 0;
      uStack_70 = 0;
      uVar3 = FUN_100fcba2(&local_50);
      FUN_1018b44e(local_2c,local_28._4_4_,local_8c,uVar3,local_7c);
      uVar3 = FUN_100fcba2(&local_40);
      FUN_100fcc65(0,uVar3);
      FUN_100fd5ae(local_2c,(undefined4)local_28,param_1,local_94,0);
      FUN_100fce8e(1);
      fVar4 = local_6c;
    }
  }
  if (DAT_10388d00 != (local_14 ^ (uint)&local_98)) {
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
  return fVar4;
}

