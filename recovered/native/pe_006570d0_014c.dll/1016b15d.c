/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1016b15d */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1016b15d(void)

{
  undefined4 local_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 local_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 local_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_54;
  local_14 = 0xffffffff;
  local_18 = &LAB_101800e0;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  FUN_100446d6();
  local_14 = 0;
  DAT_1039d9d8 = 0;
  DAT_10389fc8 = 0xffffffff;
  local_34 = 0;
  uStack_30 = 0;
  uStack_2c = 0;
  uStack_28 = 0;
  local_44 = 0;
  uStack_40 = 0;
  uStack_3c = 0;
  uStack_38 = 0;
  local_54 = 0;
  uStack_50 = 0;
  uStack_4c = 0;
  uStack_48 = 0;
  local_24 = 0;
  FUN_10179c60();
  local_14 = 1;
  FUN_10042460();
  _DAT_1039d908 = CONCAT44(uStack_50,local_54);
  _DAT_1039d910 = uStack_4c;
  local_54 = 0;
  uStack_50 = 0;
  uStack_4c = 0;
  FUN_1002265a(&uStack_48);
  FUN_10004eae();
  _DAT_1039d91c = CONCAT44(uStack_3c,uStack_40);
  _DAT_1039d924 = uStack_38;
  uStack_40 = 0;
  uStack_3c = 0;
  uStack_38 = 0;
  FUN_101799fe();
  _DAT_1039d928 = CONCAT44(uStack_30,local_34);
  _DAT_1039d930 = uStack_2c;
  local_34 = 0;
  uStack_30 = 0;
  uStack_2c = 0;
  DAT_1039d938 = local_24;
  DAT_1039d934 = uStack_28;
  local_14 = 0xffffffff;
  FUN_1016ad90();
  local_14 = 0;
  FUN_1014b0b0();
  DAT_1039d9d0 = 0;
  DAT_10389fc4 = 0xffffffff;
  DAT_1039d9d4 = 0;
  local_14 = 0xffffffff;
  FUN_1022c200(&DAT_1039d8b4);
  ExceptionList = local_1c;
  return;
}

