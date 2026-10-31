/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1011a075 */

void FUN_1011a075(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  int *unaff_FS_OFFSET;
  int local_4c;
  uint local_48;
  uint local_44;
  int local_40;
  uint local_3c;
  int local_38;
  int local_34;
  int *local_30;
  int local_2c;
  int local_28;
  int local_24;
  undefined1 *local_20;
  int local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_4c;
  local_14 = 0xffffffff;
  local_18 = &LAB_1012c9c0;
  local_1c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_1c;
  local_2c = DAT_1039d74c;
  if (param_1 == 0) {
    local_38 = 0;
    local_48 = 0;
    local_20 = (undefined1 *)&local_4c;
  }
  else {
    local_38 = FUN_1011b528(DAT_1039d74c,param_1);
    if (local_38 == 0) goto code_r0x1011a413;
    local_48 = *(uint *)(local_38 + 0xa8) & 0x3f;
  }
  local_14 = 0;
  local_40 = 0;
  local_34 = 0;
  local_24 = 0;
  local_3c = 0;
  iVar3 = 0;
  while (iVar3 < *(int *)(local_2c + 0x269c)) {
    local_30 = *(int **)(*(int *)(local_2c + 0x26a4) + 4 + iVar3 * 8);
    local_4c = iVar3;
    if (local_30 != (int *)0x0) {
      if (param_1 == 0) {
        local_3c = CONCAT31((int3)(local_3c >> 8),
                            (byte)local_3c | (*(byte *)((int)local_30 + 0x11) & 8) >> 3);
LAB_1011a1c9:
        if (local_34 == local_40) {
          if (local_40 == 0) {
            iVar3 = 8;
          }
          else {
            iVar3 = local_40 / 2 + local_40;
          }
          local_44 = local_40 + 1;
          if (local_40 + 1 < iVar3) {
            local_44 = iVar3;
          }
          local_28 = local_24;
          local_14 = 0;
          iVar3 = FUN_100fa1fa(local_44 * 4);
          iVar5 = local_24;
          if (local_24 != 0) {
            iVar1 = local_40 << 2;
            local_40 = iVar3;
            FUN_1025b2d0(iVar3,local_24,iVar1);
            local_28 = iVar5;
            FUN_100fa2cb(iVar5);
            iVar3 = local_40;
          }
        }
        else {
          local_44 = local_40;
          iVar3 = local_24;
        }
        *(int **)(iVar3 + local_34 * 4) = local_30;
        local_34 = local_34 + 1;
        local_40 = local_44;
        local_24 = iVar3;
      }
      else {
        piVar6 = local_30;
        if (*local_30 != param_1) {
          do {
            piVar4 = piVar6;
            piVar6 = (int *)piVar4[6];
          } while (piVar6 != (int *)0x0);
          if (*piVar4 == param_1) {
            local_44 = local_30[4];
            local_28 = local_24;
            FUN_1011ca97();
            local_28 = local_24;
            local_14 = 0;
            FUN_1011b9ab();
            local_28 = local_24;
            FUN_1011ba73();
            local_3c = (uint)((byte)(local_44 >> 0xb) & 1 | (byte)local_3c);
            goto LAB_1011a1c9;
          }
        }
      }
    }
    iVar3 = local_4c + 1;
  }
  if (param_1 != 0) {
    *(uint *)(local_38 + 0xa8) = local_48 | *(uint *)(local_38 + 0xa8) & 0xffffffc0;
  }
  iVar3 = *(int *)(local_2c + 0x26f0);
  if (iVar3 != 0) {
    iVar5 = iVar3 + 4;
    do {
      if (*(int *)(iVar5 + 0x14) != 0 && 0 < local_34) {
        iVar1 = 0;
        do {
          if (**(int **)(local_24 + iVar1 * 4) == *(int *)(iVar5 + 0x14)) {
            *(int *)(iVar5 + 0x14) = param_1;
            iVar3 = *(int *)(local_2c + 0x26f0);
            break;
          }
          iVar1 = iVar1 + 1;
        } while (local_34 != iVar1);
      }
      iVar5 = iVar5 + *(int *)(iVar5 + -4);
    } while (iVar5 != *(int *)(local_2c + 0x26e8) + iVar3 + 4);
  }
  if (1 < local_34) {
    local_28 = local_24;
    local_14 = 0;
    FUN_1026fb00(local_24,local_34,4,&LAB_1011cac6);
  }
  piVar6 = (int *)0x0;
  while ((int)piVar6 < local_34) {
    local_28 = local_24;
    local_14 = 0;
    local_30 = piVar6;
    FUN_1011ca07(0);
    piVar6 = (int *)((int)local_30 + 1);
  }
  if (param_1 == 0) {
    if (*(int *)(local_2c + 0x26a4) != 0) {
      *(undefined4 *)(local_2c + 0x26a0) = 0;
      *(undefined4 *)(local_2c + 0x269c) = 0;
      local_28 = local_24;
      local_14 = 0;
      FUN_100fa2cb(*(int *)(local_2c + 0x26a4));
      *(undefined4 *)(local_2c + 0x26a4) = 0;
    }
    if (*(int *)(local_2c + 0x26b0) != 0) {
      *(undefined4 *)(local_2c + 0x26ac) = 0;
      *(undefined4 *)(local_2c + 0x26a8) = 0;
      local_28 = local_24;
      local_14 = 0;
      FUN_100fa2cb(*(int *)(local_2c + 0x26b0));
      *(undefined4 *)(local_2c + 0x26b0) = 0;
    }
  }
  else if ((local_3c & 1) != 0) {
    *(int *)(local_38 + 0x80) = local_38;
    uVar2 = *(uint *)(local_38 + 8) | 0x800;
    *(uint *)(local_38 + 8) = uVar2;
    *(uint *)(local_38 + 0x10) = *(uint *)(local_38 + 4) | *(uint *)(local_38 + 0xc) | uVar2;
  }
  local_28 = local_24;
  local_14 = 0xffffffff;
  if (local_24 != 0) {
    FUN_100fa2cb(local_24);
    *unaff_FS_OFFSET = local_1c;
    return;
  }
code_r0x1011a413:
  *unaff_FS_OFFSET = local_1c;
  return;
}

