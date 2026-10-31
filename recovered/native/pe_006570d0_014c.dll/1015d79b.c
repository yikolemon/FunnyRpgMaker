/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1015d79b */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_1015d79b(void)

{
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
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_54;
  local_14 = 0xffffffff;
  local_18 = &LAB_1015f580;
  local_1c = ExceptionList;
  local_34 = _PTR_DAT_102b9a9c;
  local_44 = PTR_DAT_102b9a8c;
  uStack_40 = _UNK_102b9a90;
  uStack_3c = _UNK_102b9a94;
  uStack_38 = _UNK_102b9a98;
  local_54 = PTR_DAT_102b9a7c;
  uStack_50 = _UNK_102b9a80;
  uStack_4c = _UNK_102b9a84;
  uStack_48 = _UNK_102b9a88;
  ExceptionList = &local_1c;
  FUN_1005adbc(&local_54,&local_2c);
  local_14 = 0;
  FUN_1015dcb9(local_28);
  local_14 = 0xffffffff;
  FUN_10060a06(local_28,*(undefined4 *)(local_28[0] + 4));
  FUN_102283a0(local_28[0],0x18);
  ExceptionList = local_1c;
  return local_2c;
}

