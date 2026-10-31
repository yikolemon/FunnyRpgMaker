/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100a9226 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_100a9226(void)

{
  int *unaff_FS_OFFSET;
  undefined *local_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined *local_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined8 local_34;
  undefined4 local_2c;
  int local_28 [2];
  undefined1 *local_20;
  int local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_54;
  local_14 = 0xffffffff;
  local_18 = &LAB_100c1b50;
  local_1c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_1c;
  local_34 = _PTR_DAT_10293e5c;
  local_44 = PTR_DAT_10293e4c;
  uStack_40 = _UNK_10293e50;
  uStack_3c = _UNK_10293e54;
  uStack_38 = _UNK_10293e58;
  local_54 = PTR_DAT_10293e3c;
  uStack_50 = _UNK_10293e40;
  uStack_4c = _UNK_10293e44;
  uStack_48 = _UNK_10293e48;
  FUN_1005adbc(&local_54,&local_2c);
  local_14 = 0;
  FUN_100a9852(local_28);
  local_14 = 0xffffffff;
  FUN_10060a06(local_28,*(undefined4 *)(local_28[0] + 4));
  FUN_102283a0(local_28[0],0x18);
  *unaff_FS_OFFSET = local_1c;
  return local_2c;
}

