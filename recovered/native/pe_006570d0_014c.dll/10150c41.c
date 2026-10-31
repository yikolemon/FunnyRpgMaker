/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10150c41 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10150c41(int param_1,float *param_2,uint param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  float10 fVar6;
  float fVar7;
  undefined8 *local_6c;
  float local_68;
  int local_64;
  float local_60;
  undefined4 local_5c;
  float local_58;
  int local_54;
  float local_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float local_40;
  float local_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float local_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined8 local_1c;
  uint local_14;
  
  iVar3 = DAT_1039d74c;
  local_14 = DAT_10388d00 ^ (uint)&local_6c;
  local_68 = (param_2[2] - *param_2) * DAT_102b70e0 + DAT_102b8a50;
  puVar1 = (undefined4 *)(DAT_1039d74c + 0xd14);
  if ((param_3 & 0x200000) == 0) {
    puVar1 = (undefined4 *)(DAT_1039d74c + 0xd64);
  }
  local_6c = (undefined8 *)*puVar1;
  fVar6 = (float10)FUN_100ea38a();
  local_68 = (float)fVar6;
  local_6c = (undefined8 *)0x0;
  fVar6 = (float10)FUN_100fdbca();
  local_40 = (float)fVar6;
  fStack_38 = 0.0;
  local_3c = param_2[1] + DAT_1028b430;
  uStack_28 = 0;
  uStack_24 = 0;
  uStack_20 = 0;
  local_54 = iVar3;
  local_58 = param_2[3] - *(float *)(iVar3 + 0xd7c);
  fVar7 = *param_2;
  iVar3 = *(int *)(param_1 + 0x38);
  local_2c = local_40;
  if (iVar3 == *(int *)(param_1 + 0x3c)) {
    fStack_38 = 0.0;
    fStack_34 = 0.0;
    fStack_30 = 0.0;
    if (iVar3 == 0) {
      iVar4 = 8;
    }
    else {
      iVar4 = iVar3 / 2 + iVar3;
    }
    iVar5 = iVar3 + 1;
    if (iVar3 + 1 < iVar4) {
      iVar5 = iVar4;
    }
    local_6c = (undefined8 *)(iVar5 * 8);
    puVar2 = (undefined8 *)FUN_100fa1fa();
    local_68 = *(float *)(param_1 + 0x40);
    if (local_68 != 0.0) {
      local_64 = *(int *)(param_1 + 0x38) << 3;
      local_6c = puVar2;
      FUN_1025b2d0();
      local_6c = *(undefined8 **)(param_1 + 0x40);
      FUN_100fa2cb();
    }
    *(undefined8 **)(param_1 + 0x40) = puVar2;
    *(int *)(param_1 + 0x3c) = iVar5;
    iVar3 = *(int *)(param_1 + 0x38);
  }
  else {
    puVar2 = *(undefined8 **)(param_1 + 0x40);
  }
  *(float *)(puVar2 + iVar3) = fVar7;
  *(float *)((int)puVar2 + iVar3 * 8 + 4) = local_58;
  *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + 1;
  local_50 = local_3c + local_2c;
  fStack_34 = local_2c + 0.0;
  fStack_30 = fStack_38 + local_2c;
  local_1c = CONCAT44(local_50,*param_2 + local_2c);
  local_60 = 1.26117e-44;
  local_68 = local_2c;
  local_64 = 6;
  local_6c = &local_1c;
  fStack_4c = local_50;
  fStack_48 = local_50;
  fStack_44 = local_50;
  local_3c = *param_2 + local_2c;
  fStack_38 = local_50;
  FUN_10189c26();
  local_1c = CONCAT44(local_50,param_2[2] - local_2c);
  local_64 = 9;
  local_68 = local_2c;
  local_60 = 1.68156e-44;
  local_6c = &local_1c;
  FUN_10189c26();
  fVar7 = param_2[2];
  iVar3 = *(int *)(param_1 + 0x38);
  if (iVar3 == *(int *)(param_1 + 0x3c)) {
    if (iVar3 == 0) {
      iVar4 = 8;
    }
    else {
      iVar4 = iVar3 / 2 + iVar3;
    }
    iVar5 = iVar3 + 1;
    if (iVar3 + 1 < iVar4) {
      iVar5 = iVar4;
    }
    local_6c = (undefined8 *)(iVar5 * 8);
    puVar2 = (undefined8 *)FUN_100fa1fa();
    local_68 = *(float *)(param_1 + 0x40);
    if (local_68 != 0.0) {
      local_64 = *(int *)(param_1 + 0x38) << 3;
      local_6c = puVar2;
      FUN_1025b2d0();
      local_6c = *(undefined8 **)(param_1 + 0x40);
      FUN_100fa2cb();
    }
    *(undefined8 **)(param_1 + 0x40) = puVar2;
    *(int *)(param_1 + 0x3c) = iVar5;
    iVar3 = *(int *)(param_1 + 0x38);
  }
  else {
    puVar2 = *(undefined8 **)(param_1 + 0x40);
  }
  *(float *)(puVar2 + iVar3) = fVar7;
  *(float *)((int)puVar2 + iVar3 * 8 + 4) = local_58;
  local_6c = *(undefined8 **)(param_1 + 0x40);
  local_68 = (float)(*(int *)(param_1 + 0x38) + 1);
  *(float *)(param_1 + 0x38) = local_68;
  local_64 = param_4;
  FUN_10189368();
  *(undefined4 *)(param_1 + 0x38) = 0;
  if (0.0 < *(float *)(local_54 + 0xd68)) {
    if (*(int *)(param_1 + 0x3c) == 0) {
      local_6c = (undefined8 *)0x40;
      local_50 = *param_2 + DAT_102b70e0;
      puVar2 = (undefined8 *)FUN_100fa1fa();
      local_68 = *(float *)(param_1 + 0x40);
      if (local_68 != 0.0) {
        local_64 = *(int *)(param_1 + 0x38) << 3;
        local_6c = puVar2;
        FUN_1025b2d0();
        local_6c = *(undefined8 **)(param_1 + 0x40);
        FUN_100fa2cb();
      }
      *(undefined8 **)(param_1 + 0x40) = puVar2;
      *(undefined4 *)(param_1 + 0x3c) = 8;
      iVar3 = *(int *)(param_1 + 0x38);
      fVar7 = local_50;
    }
    else {
      puVar2 = *(undefined8 **)(param_1 + 0x40);
      iVar3 = 0;
      fVar7 = *param_2 + DAT_102b70e0;
    }
    *(float *)(puVar2 + iVar3) = fVar7;
    *(float *)((int)puVar2 + iVar3 * 8 + 4) = local_58;
    *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + 1;
    local_3c = *param_2 + local_2c + (float)DAT_102b89c0;
    fStack_38 = fStack_38 + DAT_102b89c0._4_4_;
    fStack_34 = fStack_34 + _UNK_102b89c8;
    fStack_30 = fStack_30 + _UNK_102b89cc;
    local_1c = CONCAT44(fStack_38,local_3c);
    local_60 = 1.26117e-44;
    local_68 = local_2c;
    local_64 = 6;
    local_6c = &local_1c;
    FUN_10189c26();
    local_50 = DAT_102b8d58;
    local_1c = CONCAT44(fStack_38,(param_2[2] - local_2c) + DAT_102b8d58);
    local_64 = 9;
    local_68 = local_2c;
    local_60 = 1.68156e-44;
    local_6c = &local_1c;
    FUN_10189c26();
    local_50 = local_50 + param_2[2];
    iVar3 = *(int *)(param_1 + 0x38);
    if (iVar3 == *(int *)(param_1 + 0x3c)) {
      if (iVar3 == 0) {
        iVar4 = 8;
      }
      else {
        iVar4 = iVar3 / 2 + iVar3;
      }
      iVar5 = iVar3 + 1;
      if (iVar3 + 1 < iVar4) {
        iVar5 = iVar4;
      }
      local_6c = (undefined8 *)(iVar5 * 8);
      puVar2 = (undefined8 *)FUN_100fa1fa();
      local_68 = *(float *)(param_1 + 0x40);
      if (local_68 != 0.0) {
        local_64 = *(int *)(param_1 + 0x38) << 3;
        local_6c = puVar2;
        FUN_1025b2d0();
        local_6c = *(undefined8 **)(param_1 + 0x40);
        FUN_100fa2cb();
      }
      *(undefined8 **)(param_1 + 0x40) = puVar2;
      *(int *)(param_1 + 0x3c) = iVar5;
      iVar3 = *(int *)(param_1 + 0x38);
    }
    else {
      puVar2 = *(undefined8 **)(param_1 + 0x40);
    }
    *(float *)(puVar2 + iVar3) = local_50;
    *(float *)((int)puVar2 + iVar3 * 8 + 4) = local_58;
    *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + 1;
    local_58 = *(float *)(local_54 + 0xd68);
    local_68 = 1.0;
    local_6c = (undefined8 *)0x5;
    local_64 = FUN_100fcb39();
    local_68 = *(float *)(param_1 + 0x38);
    local_6c = *(undefined8 **)(param_1 + 0x40);
    local_5c = 0;
    local_60 = local_58;
    FUN_101888a4();
    *(undefined4 *)(param_1 + 0x38) = 0;
  }
  if (DAT_10388d00 == (local_14 ^ (uint)&local_6c)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

