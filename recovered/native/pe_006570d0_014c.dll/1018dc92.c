/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1018dc92 */

void __thiscall FUN_1018dc92(int param_1,undefined4 param_2,int param_3)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int local_30;
  undefined4 local_2c;
  int local_28;
  undefined4 *local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_30;
  local_14 = 0xffffffff;
  local_18 = &LAB_10195fc0;
  local_1c = ExceptionList;
  local_30 = *(int *)(param_1 + 8);
  ExceptionList = &local_1c;
  piVar4 = &local_30;
  if (local_30 < param_3) {
    piVar4 = &local_30;
    if (*(int *)(param_1 + 0xc) < param_3) {
      uVar5 = FUN_100fa1fa(param_3 * 0x18);
      if (*(int *)(param_1 + 0x10) != 0) {
        FUN_1025b2d0(uVar5,*(int *)(param_1 + 0x10),*(int *)(param_1 + 8) * 0x18);
        FUN_100fa2cb(*(undefined4 *)(param_1 + 0x10));
      }
      *(undefined4 *)(param_1 + 0x10) = uVar5;
      *(int *)(param_1 + 0xc) = param_3;
      piVar4 = (int *)local_20;
    }
    local_20 = (undefined1 *)piVar4;
    *(int *)(param_1 + 8) = param_3;
    piVar4 = (int *)local_20;
  }
  local_20 = (undefined1 *)piVar4;
  *(int *)(param_1 + 4) = param_3;
  puVar1 = *(undefined4 **)(param_1 + 0x10);
  *(undefined8 *)(puVar1 + 4) = 0;
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  if (1 < param_3) {
    iVar6 = 1;
    iVar7 = 0;
    local_28 = param_1;
    do {
      iVar2 = *(int *)(local_28 + 0x10);
      local_24 = (undefined4 *)(iVar2 + 0x18 + iVar7);
      if (iVar6 < local_30) {
        if (*(int *)(iVar2 + 0x1c + iVar7) < 0) {
          local_14 = 0xffffffff;
          uVar5 = FUN_100fa1fa(0);
          iVar3 = *(int *)(iVar2 + 0x20 + iVar7);
          if (iVar3 != 0) {
            local_2c = uVar5;
            FUN_1025b2d0(uVar5,iVar3,*(int *)(iVar2 + 0x18 + iVar7) << 6);
            FUN_100fa2cb(*(undefined4 *)(iVar2 + 0x20 + iVar7));
            uVar5 = local_2c;
          }
          *(undefined4 *)(iVar2 + 0x20 + iVar7) = uVar5;
          *(undefined4 *)(iVar2 + 0x1c + iVar7) = 0;
        }
        *local_24 = 0;
        iVar2 = *(int *)(local_28 + 0x10);
        if (*(int *)(iVar2 + 0x28 + iVar7) < 0) {
          local_14 = 0xffffffff;
          local_24 = (undefined4 *)FUN_100fa1fa(0);
          iVar3 = *(int *)(iVar2 + 0x2c + iVar7);
          if (iVar3 != 0) {
            FUN_1025b2d0(local_24,iVar3,*(int *)(iVar2 + 0x24 + iVar7) * 2);
            FUN_100fa2cb(*(undefined4 *)(iVar2 + 0x2c + iVar7));
          }
          *(undefined4 **)(iVar2 + 0x2c + iVar7) = local_24;
          *(undefined4 *)(iVar2 + 0x28 + iVar7) = 0;
        }
        *(undefined4 *)(iVar2 + 0x24 + iVar7) = 0;
      }
      else {
        *(undefined8 *)(local_24 + 4) = 0;
        *local_24 = 0;
        local_24[1] = 0;
        local_24[2] = 0;
        local_24[3] = 0;
      }
      iVar6 = iVar6 + 1;
      iVar7 = iVar7 + 0x18;
    } while (param_3 != iVar6);
  }
  ExceptionList = local_1c;
  return;
}

