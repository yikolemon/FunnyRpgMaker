/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100a3b54 */

undefined4 * __thiscall FUN_100a3b54(undefined4 *param_1,int param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int *unaff_FS_OFFSET;
  undefined1 local_30 [4];
  undefined4 *local_2c;
  undefined4 *local_28;
  undefined4 *local_24;
  undefined1 *local_20;
  int local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = local_30;
  local_14 = 0xffffffff;
  local_18 = &LAB_100c4170;
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
  *local_24 = Map::vftable;
  local_24[0xe] = *(undefined4 *)(param_2 + 0x38);
  *(undefined1 *)(local_24 + 0xf) = *(undefined1 *)(param_2 + 0x3c);
  *(undefined8 *)(local_24 + 0x14) = 0;
  local_24[0x10] = 0;
  local_24[0x11] = 0;
  local_24[0x12] = 0;
  local_24[0x13] = 0;
  *(undefined8 *)(local_24 + 0x14) = *(undefined8 *)(param_2 + 0x50);
  uVar2 = *(undefined4 *)(param_2 + 0x44);
  uVar3 = *(undefined4 *)(param_2 + 0x48);
  uVar4 = *(undefined4 *)(param_2 + 0x4c);
  local_24[0x10] = *(undefined4 *)(param_2 + 0x40);
  local_24[0x11] = uVar2;
  local_24[0x12] = uVar3;
  local_24[0x13] = uVar4;
  *(undefined4 *)(param_2 + 0x50) = 0;
  *(undefined4 *)(param_2 + 0x54) = 7;
  *(undefined2 *)(param_2 + 0x40) = 0;
  local_24[0x1a] = *(undefined4 *)(param_2 + 0x68);
  uVar2 = *(undefined4 *)(param_2 + 0x5c);
  uVar3 = *(undefined4 *)(param_2 + 0x60);
  uVar4 = *(undefined4 *)(param_2 + 100);
  local_24[0x16] = *(undefined4 *)(param_2 + 0x58);
  local_24[0x17] = uVar2;
  local_24[0x18] = uVar3;
  local_24[0x19] = uVar4;
  uVar2 = *(undefined4 *)(param_2 + 0x74);
  *(undefined4 *)(param_2 + 0x74) = 0;
  uVar1 = *(undefined8 *)(param_2 + 0x6c);
  *(undefined4 *)(param_2 + 0x70) = 0;
  *(undefined4 *)(param_2 + 0x6c) = 0;
  *(undefined8 *)(local_24 + 0x1b) = uVar1;
  local_24[0x1d] = uVar2;
  uVar2 = *(undefined4 *)(param_2 + 0x80);
  *(undefined4 *)(param_2 + 0x80) = 0;
  uVar1 = *(undefined8 *)(param_2 + 0x78);
  *(undefined4 *)(param_2 + 0x7c) = 0;
  *(undefined4 *)(param_2 + 0x78) = 0;
  *(undefined8 *)(local_24 + 0x1e) = uVar1;
  local_24[0x20] = uVar2;
  *unaff_FS_OFFSET = local_1c;
  return local_24;
}

