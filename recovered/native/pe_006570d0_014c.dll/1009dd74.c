/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1009dd74 */

int FUN_1009dd74(int param_1)

{
  undefined1 uVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 ***pppuVar4;
  int *unaff_FS_OFFSET;
  int local_a8;
  undefined4 **local_a4;
  int *local_a0;
  int *local_9c;
  undefined4 local_94;
  uint local_90;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  undefined4 local_40;
  uint local_3c;
  int local_38;
  int *local_34;
  uint local_30;
  int local_2c;
  uint local_28;
  uint local_24;
  undefined1 *local_20;
  int local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_a8;
  local_14 = 0xffffffff;
  local_18 = &LAB_100c3e50;
  local_1c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_1c;
  FUN_100012b0(L"");
  local_14 = 3;
  local_4c = local_2c + 0x18;
  FUN_100012b0(L"");
  local_34 = (int *)(local_2c + 0x30);
  *(undefined4 *)(local_2c + 0x30) = 0;
  *(undefined4 *)(local_2c + 0x34) = 0;
  *(undefined4 *)(local_2c + 0x38) = 0;
  local_50 = local_2c + 0x40;
  *(undefined4 *)(local_2c + 0x3c) = 0;
  *(undefined4 *)(local_2c + 0x40) = 0;
  *(undefined4 *)(local_2c + 0x44) = 0;
  *(undefined4 *)(local_2c + 0x48) = 0;
  local_14 = 6;
  *(undefined4 *)(local_2c + 0x4c) = 0;
  *(undefined4 *)(local_2c + 0x50) = 0;
  local_a8 = local_2c + 0x54;
  FUN_100012b0(L"");
  local_14 = 7;
  FUN_1008a8f0(&local_a4);
  local_14 = 0xf;
  FUN_100128b2(&local_a4);
  local_14 = 0xffffffff;
  FUN_10001134();
  local_38 = param_1 + 0x10;
  local_14 = 7;
  local_28 = FUN_10077b66();
  local_24 = 0;
  while( true ) {
    local_14 = 7;
    if (local_28 <= local_24) break;
    FUN_1009ebc2(param_1);
    local_14 = 0xd;
    FUN_1009ee24(&local_a4);
    local_14 = 0xffffffff;
    FUN_1009d0f8();
    local_24 = local_24 + 1;
  }
  local_28 = FUN_10077b66();
  local_24 = 0;
  while( true ) {
    local_14 = 7;
    if (local_28 <= local_24) break;
    FUN_1009ed0e(param_1);
    local_14 = 0xc;
    FUN_1009f22a(&local_a4);
    local_14 = 0xffffffff;
    FUN_1006dc58();
    FUN_10004eae();
    FUN_10001134();
    local_24 = local_24 + 1;
  }
  FUN_1008a8f0(&local_a4);
  local_14 = 0xe;
  FUN_100128b2(&local_a4);
  local_14 = 0xffffffff;
  FUN_10001134();
  local_14 = 7;
  uVar2 = FUN_10077b66();
  *(undefined4 *)(local_2c + 0x50) = uVar2;
  local_24 = 0;
  while( true ) {
    local_28 = *(uint *)(local_2c + 0x30);
    if ((uint)(((int)(*(int *)(local_2c + 0x34) - local_28) >> 2) * 0x3cf3cf3d) <= local_24) break;
    uVar1 = FUN_10077c4c();
    *(undefined1 *)(local_28 + 0x18 + local_24 * 0x54) = uVar1;
    local_24 = local_24 + 1;
  }
  local_a4 = (undefined4 **)(*(int *)(local_2c + 0x50) - local_24);
  FUN_10077a84(&local_a4);
  local_30 = FUN_10077b66();
  uVar3 = 0;
  while (local_14 = 7, uVar3 < local_30) {
    local_24 = uVar3 * 0x54 + *local_34;
    local_28 = uVar3;
    FUN_1008a8f0(&local_a4);
    local_14 = 0xb;
    if ((undefined4 ***)(local_24 + 0x1c) != &local_a4) {
      pppuVar4 = &local_a4;
      if (7 < local_90) {
        pppuVar4 = (undefined4 ***)local_a4;
      }
      FUN_10004664(pppuVar4,local_94);
    }
    local_14 = 0xffffffff;
    FUN_10001134();
    uVar3 = local_28 + 1;
  }
  local_3c = FUN_10077b66();
  for (local_30 = 0; local_30 < local_3c; local_30 = local_30 + 1) {
    local_48 = 0;
    local_44 = 0;
    local_40 = 0;
    local_14 = 9;
    local_28 = FUN_10077b66();
    for (local_24 = 0; local_24 < local_28; local_24 = local_24 + 1) {
      local_14 = 9;
      FUN_1008a8f0(&local_a4);
      local_14 = 10;
      FUN_1008b09c(&local_a4);
      local_14 = 0xffffffff;
      FUN_10001134();
    }
    if ((int *)(local_30 * 0x54 + *local_34 + 0x34) != &local_48) {
      local_14 = 9;
      FUN_1009f6d6(local_48,(local_44 - local_48 >> 3) * -0x55555555);
    }
    local_14 = 0xffffffff;
    FUN_1006dc58();
  }
  local_14 = 7;
  local_3c = FUN_10077b66();
  if (local_3c != 0) {
    local_30 = 0;
    do {
      local_a4 = (undefined4 ***)0x0;
      local_a0 = (int *)0x0;
      local_9c = (int *)0x0;
      local_14 = 8;
      local_28 = FUN_10077b66();
      for (local_24 = 0; local_24 < local_28; local_24 = local_24 + 1) {
        local_48 = FUN_10077b66();
        if (local_a0 == local_9c) {
          FUN_10051662(local_a0,&local_48);
        }
        else {
          *local_a0 = local_48;
          local_a0 = local_a0 + 1;
        }
      }
      if ((undefined4 ***)(local_30 * 0x54 + *local_34 + 0x40) != &local_a4) {
        FUN_1009f93e(local_a4,(int)local_a0 - (int)local_a4 >> 2);
      }
      local_14 = 0xffffffff;
      FUN_10004eae();
      local_30 = local_30 + 1;
    } while (local_30 != local_3c);
  }
  local_14 = 7;
  local_30 = FUN_10077b66();
  for (local_24 = 0; local_24 < local_30; local_24 = local_24 + 1) {
    local_28 = *local_34;
    uVar2 = FUN_10077b66();
    *(undefined4 *)(local_28 + 0x4c + local_24 * 0x54) = uVar2;
  }
  *unaff_FS_OFFSET = local_1c;
  return local_2c;
}

