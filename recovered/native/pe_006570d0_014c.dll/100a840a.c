/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100a840a */

undefined4 * __thiscall FUN_100a840a(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int *unaff_FS_OFFSET;
  undefined4 *local_30;
  undefined4 *local_2c;
  undefined4 *local_28;
  undefined4 *local_24;
  undefined1 *local_20;
  int local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_30;
  local_14 = 0xffffffff;
  local_18 = &LAB_100c4370;
  local_1c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_1c;
  *param_1 = WolfDataBase::vftable;
  local_2c = param_1 + 1;
  local_24 = param_1;
  FUN_10002e46(param_2 + 4);
  local_14 = 0;
  local_28 = local_24 + 7;
  local_24[7] = 0;
  local_24[8] = 0;
  local_24[9] = 0;
  FUN_10044618(*(int *)(param_2 + 0x20) - *(int *)(param_2 + 0x1c),param_2 + 0x1c,param_2 + 0x20);
  local_24[10] = *(undefined4 *)(param_2 + 0x28);
  *(undefined4 *)((int)local_24 + 0x33) = *(undefined4 *)(param_2 + 0x33);
  *(undefined8 *)(local_24 + 0xb) = *(undefined8 *)(param_2 + 0x2c);
  local_14 = 3;
  *local_24 = Map::vftable;
  local_24[0xe] = *(undefined4 *)(param_2 + 0x38);
  *(undefined1 *)(local_24 + 0xf) = *(undefined1 *)(param_2 + 0x3c);
  local_2c = local_24 + 0x10;
  FUN_10003728(param_2 + 0x40);
  local_14 = 4;
  local_24[0x1a] = *(undefined4 *)(param_2 + 0x68);
  uVar1 = *(undefined4 *)(param_2 + 0x5c);
  uVar2 = *(undefined4 *)(param_2 + 0x60);
  uVar3 = *(undefined4 *)(param_2 + 100);
  local_24[0x16] = *(undefined4 *)(param_2 + 0x58);
  local_24[0x17] = uVar1;
  local_24[0x18] = uVar2;
  local_24[0x19] = uVar3;
  local_28 = local_24 + 0x1b;
  local_24[0x1b] = 0;
  local_24[0x1c] = 0;
  local_24[0x1d] = 0;
  FUN_10044618(*(int *)(param_2 + 0x70) - *(int *)(param_2 + 0x6c),param_2 + 0x6c,param_2 + 0x70);
  local_14 = 5;
  local_30 = local_24 + 0x1e;
  local_24[0x1e] = 0;
  local_24[0x1f] = 0;
  local_24[0x20] = 0;
  FUN_100a8632((*(int *)(param_2 + 0x7c) - *(int *)(param_2 + 0x78) >> 2) * 0x286bca1b,
               param_2 + 0x78,param_2 + 0x7c);
  *unaff_FS_OFFSET = local_1c;
  return local_24;
}

