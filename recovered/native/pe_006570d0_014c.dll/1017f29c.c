/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1017f29c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1017f29c(void)

{
  undefined4 ****ppppuVar1;
  char *local_b8;
  undefined4 local_b4;
  undefined4 uStack_b0;
  undefined4 local_ac;
  undefined4 ***local_a8;
  undefined4 ***local_a4;
  undefined4 local_98;
  uint local_94;
  char *local_90;
  undefined4 local_8c;
  char *local_80;
  undefined4 ***local_7c;
  undefined4 ***local_78;
  char *local_74;
  char *local_70;
  undefined4 ***local_68;
  undefined1 local_64 [24];
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  char *local_40;
  undefined4 local_3c;
  undefined4 ***local_38;
  undefined4 local_34;
  undefined *local_30;
  undefined4 local_2c;
  undefined1 *local_28;
  undefined1 *local_24;
  void *local_20;
  undefined1 *local_1c;
  undefined4 local_18;
  
  local_28 = &stack0xfffffffc;
  local_24 = (undefined1 *)&local_b8;
  local_1c = &LAB_101801e0;
  local_20 = ExceptionList;
  local_b4 = 0;
  uStack_b0 = 0;
  local_ac = 0;
  local_18 = 2;
  local_90 = (char *)0x0;
  local_8c = 0;
  ExceptionList = &local_20;
  FUN_10001f66("$dataCommonEvents");
  local_18 = 0xc;
  FUN_100145e4(&local_a8,&local_68);
  local_18 = 0xd;
  FUN_100d8f98(&local_90);
  local_18 = 0xffffffff;
  FUN_10013efc();
  FUN_10001fee();
  local_80 = local_70;
  for (; local_74 != local_80; local_74 = local_74 + 0x10) {
    if (*local_74 == '\x01') {
      local_30 = &DAT_1033a3fb;
      local_2c = 2;
      local_18 = 4;
      local_b8 = local_74;
      FUN_100dafc2(&local_30);
      local_18 = 8;
      local_a8 = (undefined4 ****)0x0;
      FUN_100561d8(&local_90,&local_a8);
      local_68 = local_a8;
      local_40 = "name";
      local_3c = 4;
      FUN_100db8d0(&local_40);
      local_18 = 9;
      local_38 = &local_a8;
      if (0xf < local_94) {
        local_38 = local_a8;
      }
      local_34 = local_98;
      FUN_101575f2(local_64,&local_38);
      local_4c = 0;
      local_48 = 0;
      local_44 = 0;
      local_18 = 0xffffffff;
      FUN_10001fee();
      FUN_10013efc();
      local_18 = 5;
      local_90 = "list";
      local_8c = 4;
      FUN_100d8f98(&local_90);
      local_18 = 6;
      local_7c = local_a4;
      ppppuVar1 = (undefined4 ****)local_a8;
      while (ppppuVar1 != (undefined4 ****)local_7c) {
        local_78 = ppppuVar1;
        FUN_1017c310(ppppuVar1);
        ppppuVar1 = (undefined4 ****)(local_78 + 4);
      }
      local_18 = 0xffffffff;
      FUN_100171ce();
      local_18 = 5;
      FUN_1017f7b4(&local_68);
      local_18 = 0xffffffff;
      FUN_100b21ee();
      FUN_10001fee();
      local_74 = local_b8;
    }
  }
  local_18 = 0xffffffff;
  FUN_100171ce();
  local_18 = 2;
  FUN_100446d6();
  local_18 = 3;
  FUN_10179884();
  _DAT_1039d8f8 = CONCAT44(uStack_b0,local_b4);
  _DAT_1039d900 = local_ac;
  local_b4 = 0;
  uStack_b0 = 0;
  local_ac = 0;
  local_18 = 0xffffffff;
  FUN_1022c200(&DAT_1039d8b4);
  FUN_10179884();
  ExceptionList = local_20;
  return;
}

