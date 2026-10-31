/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100f0198 */

void FUN_100f0198(uint param_1)

{
  undefined4 *puVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint *puVar8;
  undefined1 local_4c [4];
  uint local_48;
  uint *local_44 [3];
  uint *local_38;
  uint *local_34;
  uint local_30;
  int local_2c;
  uint **local_28;
  uint local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = local_4c;
  local_14 = 0xffffffff;
  local_18 = &LAB_100f5350;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  FUN_100f0988(local_4c);
  puVar8 = local_44[0];
  local_14 = 6;
  local_44[0] = (uint *)0x0;
  puVar1 = *(undefined4 **)(local_2c + 0x8c);
  *(uint **)(local_2c + 0x8c) = puVar8;
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
  }
  local_14 = 0xffffffff;
  FUN_100f072e();
  if (param_1 == 0) {
    iVar4 = FUN_1022d100();
    if (iVar4 == 0) {
      param_1 = 1;
    }
    else {
      param_1 = FUN_1022d100();
    }
  }
  uVar5 = (uint)((ulonglong)param_1 * 0xc);
  local_30 = uVar5 + 4;
  if (0xfffffffb < uVar5) {
    local_30 = 0xffffffff;
  }
  if ((int)((ulonglong)param_1 * 0xc >> 0x20) != 0) {
    local_30 = 0xffffffff;
  }
  *(uint *)(local_2c + 0xa8) = param_1;
  local_28 = (uint **)FUN_102332c0(local_30);
  *local_28 = (uint *)param_1;
  if (param_1 != 0) {
    uVar7 = 0;
    do {
      local_14 = 1;
      local_24 = uVar7;
      FUN_100f0c3a();
      uVar7 = local_24 + 0xc;
    } while (uVar5 != uVar7);
  }
  puVar8 = (uint *)(local_28 + 1);
  local_28 = (uint **)(local_2c + 0xac);
  local_44[0] = puVar8;
  if (local_28 != local_44) {
    local_44[0] = (uint *)0x0;
    puVar2 = *local_28;
    *local_28 = puVar8;
    if (puVar2 != (uint *)0x0) {
      local_38 = puVar2 + -1;
      local_30 = puVar2[-1];
      uVar5 = local_30 * 0xc;
      local_34 = puVar2;
      uVar3 = uVar5;
      uVar7 = local_24;
      uVar6 = local_30;
      while (local_24 = uVar3, uVar6 != 0) {
        local_14 = 3;
        FUN_100f0b9a();
        uVar6 = local_24 - 0xc;
        uVar3 = uVar6;
        uVar7 = local_24;
      }
      local_14 = 0xffffffff;
      local_24 = uVar7;
      FUN_102332d0(local_38,uVar5 + 4);
    }
  }
  local_14 = 0xffffffff;
  if (local_44[0] != (uint *)0x0) {
    local_38 = local_44[0] + -1;
    local_30 = local_44[0][-1];
    uVar5 = local_30 * 0xc;
    uVar3 = uVar5;
    local_34 = local_44[0];
    uVar7 = local_24;
    uVar6 = local_30;
    while (local_24 = uVar3, uVar6 != 0) {
      local_14 = 5;
      FUN_100f0b9a();
      uVar6 = local_24 - 0xc;
      uVar3 = uVar6;
      uVar7 = local_24;
    }
    local_14 = 0xffffffff;
    local_24 = uVar7;
    FUN_102332d0(local_38,uVar5 + 4);
  }
  FUN_100446d6();
  iVar4 = local_2c;
  *(undefined4 *)(local_2c + 0xa4) = *(undefined4 *)(local_2c + 0xa8);
  local_14 = 0xffffffff;
  FUN_1022c200(local_2c);
  if (*(int *)(iVar4 + 0xa8) != 0) {
    uVar5 = 0;
    do {
      local_48 = uVar5;
      FUN_100f0a6c(local_4c);
      local_14 = 9;
      FUN_100f0b5a(local_44);
      local_14 = 0xffffffff;
      FUN_100f0b9a();
      uVar5 = uVar5 + 1;
    } while (uVar5 < *(uint *)(local_2c + 0xa8));
  }
  ExceptionList = local_1c;
  return;
}

