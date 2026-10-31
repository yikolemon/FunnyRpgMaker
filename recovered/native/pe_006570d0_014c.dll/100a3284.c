/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100a3284 */

undefined4 * FUN_100a3284(int param_1,undefined4 param_2)

{
  int *unaff_FS_OFFSET;
  undefined4 local_38;
  undefined2 local_34;
  undefined1 local_32;
  undefined4 *local_30;
  undefined4 *local_2c;
  undefined4 *local_28;
  undefined4 *local_24;
  undefined1 *local_20;
  int local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_38;
  local_14 = 0xffffffff;
  local_18 = &LAB_100c40f0;
  local_1c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_1c;
  local_32 = 0;
  local_34 = 0;
  local_38 = 4;
  FUN_1006fca2(param_1,&DAT_1039cb9c,&local_38,param_2,&local_34);
  local_14 = 0;
  *local_24 = Map::vftable;
  local_24[0xe] = 0;
  *(undefined1 *)(local_24 + 0xf) = 0;
  local_30 = local_24 + 0x10;
  FUN_100012b0(L"");
  local_24[0x16] = 0;
  local_24[0x17] = 3;
  local_2c = local_24 + 0x1b;
  local_24[0x18] = 0;
  local_24[0x19] = 0;
  local_24[0x1a] = 0;
  local_24[0x1b] = 0;
  *(undefined8 *)(local_24 + 0x1c) = 0;
  local_28 = local_24 + 0x1e;
  local_24[0x1e] = 0;
  local_24[0x1f] = 0;
  local_24[0x20] = 0;
  local_14 = 3;
  if (*(int *)(param_1 + 0x10) != 0) {
    FUN_1006fdba(param_1);
  }
  *unaff_FS_OFFSET = local_1c;
  return local_24;
}

