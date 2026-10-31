/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10168410 */

void FUN_10168410(void)

{
  undefined8 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int *unaff_FS_OFFSET;
  undefined8 local_38;
  int local_30;
  int local_2c;
  int *local_28;
  int local_24;
  undefined1 *local_20;
  int local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_38;
  local_14 = 0xffffffff;
  local_18 = &LAB_1016a610;
  local_1c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_1c;
  piVar5 = *(int **)(DAT_1039d74c + 0x26f4);
  local_2c = DAT_1039d74c;
  local_24 = *(int *)(DAT_1039d74c + 0x26fc);
  if (local_24 == 0) {
    local_28 = (int *)0x0;
  }
  else {
    piVar6 = (int *)(local_24 + 4);
    iVar4 = local_24 + 4;
    local_28 = (int *)0x0;
    local_20 = (undefined1 *)&local_38;
    do {
      if (*piVar6 != 0) {
        iVar2 = FUN_10167b1d();
        local_28 = (int *)((int)local_28 + iVar2);
      }
      piVar6 = (int *)((int)piVar6 + piVar6[-1]);
    } while (piVar6 != (int *)((int)piVar5 + iVar4));
  }
  if (local_28 != piVar5) {
    local_38 = 0;
    local_30 = 0;
    local_14 = 1;
    iVar4 = local_24;
    if (0 < (int)local_28) {
      iVar2 = FUN_100fa1fa(local_28);
      iVar4 = local_30;
      if (local_30 != 0) {
        local_24 = iVar2;
        FUN_1025b2d0(iVar2,local_30,(undefined4)local_38);
        FUN_100fa2cb(iVar4);
        iVar2 = local_24;
      }
      local_38 = CONCAT44(local_28,(undefined4)local_38);
      iVar4 = *(int *)(local_2c + 0x26fc);
      local_30 = iVar2;
    }
    piVar5 = (int *)(iVar4 + 4);
    if (iVar4 == 0) {
      piVar5 = (int *)0x0;
    }
    while (piVar5 != (int *)0x0) {
      if (*piVar5 != 0) {
        local_28 = piVar5;
        uVar3 = FUN_10167b1d();
        local_14 = 1;
        local_24 = FUN_10118a58(uVar3);
        uVar3 = FUN_10167b1d();
        piVar5 = local_28;
        FUN_1025b2d0(local_24,local_28,uVar3);
        iVar4 = *(int *)(local_2c + 0x26fc);
      }
      piVar5 = (int *)((int)piVar5 + piVar5[-1]);
      if (piVar5 == (int *)(*(int *)(local_2c + 0x26f4) + iVar4 + 4)) {
        piVar5 = (int *)0x0;
      }
    }
    uVar1 = *(undefined8 *)(local_2c + 0x26f4);
    *(undefined8 *)(local_2c + 0x26f4) = local_38;
    *(int *)(local_2c + 0x26fc) = local_30;
    local_14 = 0xffffffff;
    if (iVar4 != 0) {
      local_38 = uVar1;
      local_30 = iVar4;
      local_24 = iVar4;
      FUN_100fa2cb(iVar4);
    }
  }
  *unaff_FS_OFFSET = local_1c;
  return;
}

