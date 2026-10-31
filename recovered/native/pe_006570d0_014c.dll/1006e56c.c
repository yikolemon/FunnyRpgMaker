/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1006e56c */

undefined4 * FUN_1006e56c(void)

{
  int *unaff_FS_OFFSET;
  undefined1 local_4c [24];
  undefined4 local_34 [2];
  undefined2 local_2c;
  undefined1 local_2a;
  undefined4 *local_28;
  undefined1 local_21;
  undefined1 *local_20;
  int local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = local_4c;
  local_14 = 0xffffffff;
  local_18 = &LAB_100c2720;
  local_1c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_1c;
  local_2a = 0;
  local_2c = 0;
  local_21 = 0;
  local_34[0] = 1;
  FUN_1005b006(L"",0);
  local_14 = 0;
  FUN_1006fca2(local_4c,&DAT_1039cb48,local_34,&local_21,&local_2c);
  local_14 = 0xffffffff;
  FUN_10001f04();
  *local_28 = CommonEvents::vftable;
  *(undefined1 *)(local_28 + 0xe) = 0;
  local_28[0xf] = 0;
  local_28[0x10] = 0;
  local_28[0x11] = 0;
  *(undefined2 *)(local_28 + 0x12) = 0;
  *(undefined1 *)((int)local_28 + 0x4a) = 0;
  *unaff_FS_OFFSET = local_1c;
  return local_28;
}

