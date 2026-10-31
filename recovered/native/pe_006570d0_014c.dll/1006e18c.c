/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1006e18c */

undefined4 * FUN_1006e18c(int param_1,undefined4 param_2)

{
  int *unaff_FS_OFFSET;
  undefined4 local_64;
  undefined4 *local_60;
  undefined4 *local_5c;
  undefined4 *local_58;
  undefined4 *local_54;
  undefined4 *local_50;
  undefined4 *local_4c;
  undefined4 *local_48;
  undefined4 *local_44;
  undefined4 *local_40;
  undefined4 *local_3c;
  undefined4 *local_38;
  undefined4 *local_34;
  undefined4 *local_30;
  undefined4 *local_2c;
  undefined4 *local_28;
  undefined4 *local_24;
  undefined1 *local_20;
  int local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_64;
  local_14 = 0xffffffff;
  local_18 = &LAB_100c2710;
  local_1c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_1c;
  local_64 = 0;
  FUN_1006fca2(param_1,&DAT_1039cb74,&local_64,param_2,&DAT_102948dc);
  *local_24 = GameDat::vftable;
  local_60 = local_24 + 0xe;
  local_24[0xe] = 0;
  local_24[0xf] = 0;
  local_24[0x10] = 0;
  local_14 = 1;
  local_24[0x11] = 0;
  local_5c = local_24 + 0x12;
  FUN_100012b0(L"");
  local_14 = 2;
  local_58 = local_24 + 0x18;
  FUN_100012b0(L"");
  local_54 = local_24 + 0x1e;
  local_24[0x1e] = 0;
  local_24[0x1f] = 0;
  local_24[0x20] = 0;
  local_14 = 4;
  local_50 = local_24 + 0x21;
  FUN_100012b0(L"");
  local_4c = local_24 + 0x27;
  local_24[0x27] = 0;
  local_24[0x28] = 0;
  local_24[0x29] = 0;
  local_14 = 6;
  local_48 = local_24 + 0x2a;
  FUN_100012b0(L"");
  local_14 = 7;
  local_44 = local_24 + 0x30;
  FUN_100012b0(L"");
  local_14 = 8;
  local_40 = local_24 + 0x36;
  FUN_100012b0(L"");
  local_14 = 9;
  local_3c = local_24 + 0x3c;
  FUN_100012b0(L"");
  local_14 = 10;
  local_38 = local_24 + 0x42;
  FUN_100012b0(L"");
  local_14 = 0xb;
  local_34 = local_24 + 0x48;
  FUN_100012b0(L"");
  local_14 = 0xc;
  local_30 = local_24 + 0x4e;
  FUN_100012b0(L"");
  local_2c = local_24 + 0x57;
  *(undefined8 *)(local_24 + 0x58) = 0;
  local_24[0x54] = 0;
  local_24[0x55] = 0;
  local_24[0x56] = 0;
  local_24[0x57] = 0;
  local_28 = local_24 + 0x5c;
  local_24[0x5a] = 0;
  local_24[0x5b] = 0;
  local_24[0x5c] = 0;
  local_24[0x5d] = 0;
  local_24[0x5e] = 0;
  local_14 = 0xf;
  local_24[0x5f] = 0;
  if (*(int *)(param_1 + 0x10) != 0) {
    FUN_1006fdba(param_1);
  }
  *unaff_FS_OFFSET = local_1c;
  return local_24;
}

