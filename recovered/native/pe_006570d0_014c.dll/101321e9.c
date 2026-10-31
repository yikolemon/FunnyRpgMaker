/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101321e9 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101321e9(undefined8 *param_1,float param_2,undefined4 param_3,float param_4)

{
  int iVar1;
  undefined4 ***pppuVar2;
  int iVar3;
  char cVar4;
  undefined8 *puVar5;
  float10 fVar6;
  float fVar7;
  undefined4 **local_c0;
  undefined8 *local_bc;
  undefined8 **local_b8;
  undefined8 *local_b4;
  float local_b0;
  undefined4 local_ac;
  float *local_a8;
  undefined4 **local_a4;
  undefined8 *local_a0;
  float local_9c;
  float local_98;
  int local_94;
  float local_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  float fStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined8 **local_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  float local_54;
  float fStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined8 *local_44;
  float local_40;
  undefined8 local_3c;
  undefined4 **local_34;
  float local_30;
  undefined8 *local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  uint local_14;
  
  iVar3 = DAT_1039d74c;
  local_14 = DAT_10388d00 ^ (uint)&local_c0;
  iVar1 = *(int *)(DAT_1039d74c + 0x14cc);
  local_b4 = (undefined8 *)0x0;
  local_b8 = (undefined8 **)param_3;
  local_bc = (undefined8 *)param_2;
  local_c0 = (undefined4 **)&local_1c;
  local_b0 = -1.0;
  FUN_100fdb2e();
  pppuVar2 = *(undefined4 ****)(iVar1 + 0x144);
  fVar7 = *(float *)(iVar1 + 0x148);
  fStack_70 = 0.0;
  uStack_6c = 0;
  uStack_68 = 0;
  local_bc = *(undefined8 **)(iVar3 + 0xdc4);
  local_90 = *(float *)(iVar3 + 0xdd0);
  fStack_8c = 0.0;
  fStack_88 = 0.0;
  fStack_84 = 0.0;
  local_c0 = (undefined4 **)(*(float *)(iVar3 + 0xdd4) + *(float *)(iVar3 + 0xdd4) + local_18);
  local_9c = (float)local_bc;
  local_74 = fVar7;
  fVar6 = (float10)FUN_100fdbca();
  local_78 = (float)fVar6;
  local_98 = local_90 + local_90;
  local_24 = local_1c + param_4 + local_98;
  local_c0 = (undefined4 **)&local_24;
  local_2c = *(undefined8 **)(iVar1 + 0x274);
  local_28 = local_78 + local_74;
  local_bc = (undefined8 *)
             (float)(int)(((local_28 - local_74) - local_18) * *(float *)(iVar3 + 0xdcc) +
                         _DAT_102b8a90);
  fStack_50 = 0.0;
  uStack_4c = 0;
  uStack_48 = 0;
  local_a4 = pppuVar2;
  local_94 = iVar1;
  local_54 = (float)local_bc;
  local_34 = pppuVar2;
  local_30 = fVar7;
  local_20 = local_78;
  FUN_1010c810();
  local_b4 = (undefined8 *)0x0;
  local_b8 = (undefined8 **)0x0;
  local_bc = param_1;
  local_c0 = &local_34;
  cVar4 = FUN_1010c9d8();
  if (cVar4 != '\0') {
    local_64 = (undefined8 **)(float)(int)((local_30 + local_28) * DAT_102b70e0 + _DAT_102b8a90);
    uStack_60 = 0;
    uStack_5c = 0;
    uStack_58 = 0;
    local_a0 = local_2c;
    local_bc = (undefined8 *)(((float)local_2c - (float)local_a4) - local_98);
    local_c0 = (undefined4 **)0x0;
    fVar6 = (float10)FUN_100fdbca();
    local_7c = (float)fVar6;
    local_90 = local_90 + (float)local_a4;
    local_bc = (undefined8 *)(((local_7c - local_1c) - param_4) * *(float *)(iVar3 + 0xdc8));
    local_c0 = (undefined4 **)0x0;
    fVar6 = (float10)FUN_100fdbca();
    iVar1 = local_94;
    local_80 = (float)fVar6;
    local_90 = local_80 + local_90;
    fStack_88 = fStack_8c + 0.0;
    fStack_84 = fStack_50 + fStack_70;
    local_3c = CONCAT44(local_54 + local_74,local_90);
    *(float *)(local_94 + 0x14c) = local_1c + local_90;
    local_bc = (undefined8 *)0x3f800000;
    local_c0 = (undefined4 ***)0x1c;
    fStack_8c = local_54 + local_74;
    puVar5 = (undefined8 *)FUN_100fcb39();
    if (local_1c <= 0.0) {
      if (*(char *)(iVar3 + 0x2748) == '\x01') {
        local_c0 = (undefined4 **)&DAT_10347063;
        FUN_10110bf6();
      }
      if (0.0 < local_9c) {
        local_b0 = local_9c;
        local_b8 = local_64;
        local_bc = local_a0;
        local_c0 = local_a4;
        local_b4 = puVar5;
        FUN_1018b44e();
      }
    }
    else {
      fVar7 = *(float *)(iVar3 + 0xd1c);
      if ((0.0 < local_9c) &&
         (local_bc = (undefined8 *)(local_90 - fVar7), (float)local_a4 < (float)local_bc)) {
        local_b0 = local_9c;
        local_b8 = local_64;
        local_c0 = local_a4;
        local_54 = local_1c;
        local_b4 = puVar5;
        local_74 = fVar7;
        FUN_1018b44e();
        fVar7 = local_74;
        local_1c = local_54;
      }
      if ((0.0 < local_9c) &&
         (local_c0 = (undefined4 **)(fVar7 + param_4 + local_1c + local_90),
         (float)local_c0 < (float)local_a0)) {
        local_b8 = local_64;
        local_bc = local_a0;
        local_b4 = puVar5;
        local_b0 = local_9c;
        FUN_1018b44e();
      }
      if (*(char *)(iVar3 + 0x2748) == '\x01') {
        local_bc = (undefined8 *)0x0;
        local_c0 = (undefined4 **)&DAT_10347063;
        FUN_10118366();
      }
      local_40 = local_28 + *(float *)(iVar3 + 0xd20);
      local_b8 = &local_44;
      local_44 = local_2c;
      local_c0 = *(undefined4 ***)(iVar1 + 0x2e8);
      local_a8 = &local_1c;
      local_ac = param_3;
      local_b0 = param_2;
      local_b4 = local_2c;
      local_bc = &local_3c;
      FUN_100fdc57();
    }
  }
  if (DAT_10388d00 == (local_14 ^ (uint)&local_c0)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

