/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1001937a */

undefined8 * __thiscall
FUN_1001937a(undefined8 *param_1,int param_2,int param_3,undefined4 param_4,int param_5,
            undefined4 param_6,undefined4 param_7,uint param_8,uint param_9)

{
  undefined2 uVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  int *unaff_FS_OFFSET;
  undefined8 uVar5;
  int local_40;
  undefined8 *local_3c;
  int local_38;
  int local_34;
  undefined8 *local_30;
  uint local_2c;
  uint local_28;
  undefined8 *local_24;
  undefined1 *local_20;
  int local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_40;
  local_14 = 0xffffffff;
  local_18 = &LAB_10059230;
  local_1c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_1c;
  local_3c = param_1 + 1;
  FUN_10019ba8(&local_28);
  local_14 = 0;
  local_38 = (int)param_1 + 0x24;
  local_24 = param_1;
  FUN_10019ba8(&local_28);
  local_30 = local_24 + 8;
  local_24[8] = 0;
  *(undefined4 *)(local_24 + 9) = 0;
  local_34 = (int)local_24 + 0x4c;
  *(undefined4 *)((int)local_24 + 0x4c) = 0;
  *(undefined4 *)(local_24 + 10) = 0;
  *(undefined4 *)((int)local_24 + 0x54) = 0;
  *(undefined4 *)(local_24 + 0xb) = 0;
  local_14 = 3;
  *(undefined4 *)(local_24 + 0xd) = param_4;
  *(int *)((int)local_24 + 0x6c) = param_2;
  *(int *)(local_24 + 0xe) = param_3;
  *(undefined4 *)((int)local_24 + 0x74) = param_7;
  *(uint *)(local_24 + 0xf) = param_8;
  *(undefined4 *)((int)local_24 + 0x7c) = param_6;
  *(undefined4 *)(local_24 + 0x10) = 0;
  *(undefined4 *)((int)local_24 + 0x83) = 0;
  *(byte *)((int)local_24 + 0x87) =
       (param_8 & 0x10) == 0 & (byte)((*(uint *)(param_5 + 8) & 8) >> 3);
  uVar3 = *(uint *)(param_5 + 8);
  if ((uVar3 >> 8 & 1) != 0) {
    uVar1 = FUN_10019c5c(0x57);
    *(undefined2 *)(local_24 + 0x10) = uVar1;
    uVar3 = *(uint *)(param_5 + 8);
  }
  if ((uVar3 >> 9 & 1) != 0) {
    uVar1 = FUN_10019c5c(0x53);
    *(undefined2 *)((int)local_24 + 0x82) = uVar1;
    uVar3 = *(uint *)(param_5 + 8);
  }
  if ((uVar3 >> 10 & 1) != 0) {
    uVar1 = FUN_10019c5c(0x44);
    *(undefined2 *)((int)local_24 + 0x84) = uVar1;
  }
  local_40 = param_3 - param_2;
  uVar2 = FUN_10019ca8(local_40);
  *(undefined4 *)(local_24 + 0xc) = uVar2;
  uVar5 = FUN_10019cc8(local_40);
  *local_24 = uVar5;
  *(undefined4 *)((int)local_24 + 100) = *(undefined4 *)(*(int *)(param_5 + 0xc) + 0xc);
  local_28 = param_9;
  local_2c = 0x1000;
  FUN_10019ce4(&local_28,&local_2c,*(undefined4 *)(param_5 + 0x18));
  if (1 < *(uint *)((int)local_24 + 0x7c)) {
    FUN_10019da0(&local_28,&local_2c,*(uint *)((int)local_24 + 0x7c) - 1);
    if (*(char *)((int)local_24 + 0x87) == '\x01') {
      FUN_10019da0(&local_28,&local_2c,*(int *)((int)local_24 + 0x7c) + -1);
    }
    uVar3 = *(int *)((int)local_24 + 0x7c) - 1;
    FUN_1001a292(&local_28,&local_2c,((uVar3 >> 5) + 1) - (uint)((uVar3 & 0x1f) == 0));
    if (*(char *)((int)local_24 + 0x87) == '\x01') {
      uVar3 = *(int *)((int)local_24 + 0x7c) - 1;
      FUN_1001a292(&local_28,&local_2c,((uVar3 >> 5) + 1) - (uint)((uVar3 & 0x1f) == 0));
    }
  }
  uVar3 = 4 - (local_28 & 3);
  if ((local_28 & 3) == 0) {
    uVar3 = 0;
  }
  if ((local_28 != 0 && uVar3 <= local_2c) && 0x13 < local_2c - uVar3) {
    iVar4 = local_28 + uVar3;
    *(int *)((int)local_24 + 0x4c) = iVar4;
    *(int *)(local_24 + 10) = iVar4;
    *(uint *)((int)local_24 + 0x54) = iVar4 + ((local_2c - uVar3) / 0x14) * 0x14;
  }
  if ((*(uint *)((int)local_24 + 0x74) & 0x3e) != 0) {
    *(uint *)((int)local_24 + 0x74) = *(uint *)((int)local_24 + 0x74) & 0xffffefff;
  }
  *unaff_FS_OFFSET = local_1c;
  return local_24;
}

