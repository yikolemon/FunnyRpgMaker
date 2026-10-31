/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10190b60 */

int FUN_10190b60(int param_1,int param_2,float param_3,undefined4 param_4,undefined4 param_5)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined1 local_8c [8];
  int local_84;
  int local_6c;
  int local_60;
  undefined4 local_3c;
  uint local_38;
  uint local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = local_8c;
  local_14 = 0xffffffff;
  local_18 = &LAB_10195ff0;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  puVar1 = local_8c;
  if ((DAT_1039d74c != 0) && (puVar1 = local_8c, (*(byte *)(DAT_1039d74c + 0x27b5) & 1) != 0)) {
    FUN_100f99e6("[font] Created baked %.2fpx\n",(double)param_3);
    puVar1 = local_20;
  }
  local_20 = puVar1;
  local_28 = *(int *)(param_1 + 0x290);
  FUN_10190f14();
  local_14 = 3;
  uVar5 = *(uint *)(local_28 + 0xac);
  if (uVar5 == *(uint *)(local_28 + 0xb0)) {
    local_34 = uVar5 + 0x3f;
    uVar3 = uVar5 + 0x1f;
    if (-1 < (int)uVar5) {
      uVar3 = uVar5;
    }
    local_30 = (int)uVar3 >> 5;
    local_24 = (int)local_34 >> 5;
    iVar4 = local_30;
    local_38 = uVar5;
    if (local_30 < local_24) {
      local_2c = *(int *)(local_28 + 0xb8);
      if (local_2c < local_24) {
        if (local_2c == 0) {
          local_2c = 8;
        }
        else {
          local_2c = local_2c / 2 + local_2c;
        }
        if (local_2c <= local_24) {
          local_2c = local_24;
        }
        uVar2 = FUN_100fa1fa();
        if (*(int *)(local_28 + 0xbc) != 0) {
          local_3c = uVar2;
          FUN_1025b2d0(uVar2,*(int *)(local_28 + 0xbc),*(int *)(local_28 + 0xb4) << 2);
          FUN_100fa2cb();
          uVar2 = local_3c;
        }
        *(undefined4 *)(local_28 + 0xbc) = uVar2;
        *(int *)(local_28 + 0xb8) = local_2c;
      }
      local_34 = local_34 & 0xffffffe0;
      *(int *)(local_28 + 0xb4) = local_24;
      local_2c = local_30;
      do {
        uVar2 = FUN_100fa1fa();
        *(undefined4 *)(*(int *)(local_28 + 0xbc) + local_2c * 4) = uVar2;
        local_2c = local_2c + 1;
      } while (local_2c != local_24);
      *(uint *)(local_28 + 0xb0) = local_34;
      uVar5 = local_38;
      iVar4 = local_30;
    }
  }
  else {
    uVar3 = uVar5 + 0x1f;
    if (-1 < (int)uVar5) {
      uVar3 = uVar5;
    }
    iVar4 = (int)uVar3 >> 5;
  }
  iVar7 = local_28;
  uVar3 = uVar5 + 0x1f;
  if (-1 < (int)uVar5) {
    uVar3 = uVar5;
  }
  local_24 = (uVar5 - (uVar3 & 0xfffffe0)) * 0x50 + *(int *)(*(int *)(local_28 + 0xbc) + iVar4 * 4);
  FUN_1025b2d0(local_24,local_8c,0x50);
  *(int *)(iVar7 + 0xac) = *(int *)(iVar7 + 0xac) + 1;
  local_14 = 0xffffffff;
  if (local_60 != 0) {
    FUN_100fa2cb();
  }
  if (local_6c != 0) {
    FUN_100fa2cb();
  }
  if (local_84 != 0) {
    FUN_100fa2cb();
  }
  *(float *)(local_24 + 0x10) = param_3;
  *(undefined4 *)(local_24 + 0x14) = param_4;
  *(undefined4 *)(local_24 + 0x44) = param_5;
  *(int *)(local_24 + 0x48) = param_2;
  *(undefined4 *)(local_24 + 0x40) = *(undefined4 *)(*(int *)(param_1 + 0x290) + 0x94);
  if (*(int *)(param_2 + 0x18) != 0) {
    iVar7 = 0;
    iVar4 = 0;
    do {
      iVar6 = *(int *)(*(int *)(*(int *)(param_2 + 0x20) + iVar7) + 0x74);
      if (iVar6 == 0) {
        iVar6 = *(int *)(param_1 + 0x294);
      }
      iVar4 = iVar4 + *(int *)(iVar6 + 0x24);
      iVar7 = iVar7 + 4;
    } while (*(int *)(param_2 + 0x18) << 2 != iVar7);
    if (iVar4 != 0) {
      local_14 = 0xffffffff;
      iVar4 = FUN_100fa1fa();
      goto code_r0x10190e1d;
    }
  }
  iVar4 = 0;
code_r0x10190e1d:
  *(int *)(local_24 + 0x4c) = iVar4;
  local_2c = *(int *)(param_2 + 0x18);
  if (local_2c != 0) {
    local_28 = *(int *)(param_2 + 0x20);
    local_2c = local_2c << 2;
    iVar7 = 0;
    do {
      iVar6 = *(int *)(*(int *)(local_28 + iVar7) + 0x74);
      if (iVar6 == 0) {
        iVar6 = *(int *)(param_1 + 0x294);
      }
      if (*(code **)(iVar6 + 0x18) != (code *)0x0) {
        local_14 = 0xffffffff;
        (**(code **)(iVar6 + 0x18))(param_1,*(int *)(local_28 + iVar7),local_24,iVar4);
      }
      iVar4 = iVar4 + *(int *)(iVar6 + 0x24);
      iVar7 = iVar7 + 4;
    } while (local_2c != iVar7);
  }
  iVar4 = local_24;
  local_14 = 0xffffffff;
  FUN_10190fa0();
  ExceptionList = local_1c;
  return iVar4;
}

