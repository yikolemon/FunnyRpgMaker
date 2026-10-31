/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1017fc14 */

void FUN_1017fc14(void)

{
  char cVar1;
  uint local_78;
  undefined4 *local_74;
  uint local_70;
  uint local_6c;
  uint local_60;
  undefined4 *local_54 [2];
  undefined4 *local_4c;
  uint local_48;
  undefined4 *local_44;
  uint local_40 [2];
  undefined1 local_38 [16];
  undefined1 *local_28;
  undefined1 *local_24;
  void *local_20;
  undefined1 *local_1c;
  undefined4 local_18;
  
  local_28 = &stack0xfffffffc;
  local_24 = (undefined1 *)&local_78;
  local_18 = 0xffffffff;
  local_1c = &LAB_101801f0;
  local_20 = ExceptionList;
  ExceptionList = &local_20;
  FUN_10001f66("$gameSelfSwitches._data");
  local_18 = 0;
  FUN_100145e4(local_38,&local_70);
  local_18 = 0xffffffff;
  FUN_10001fee();
  local_18 = 1;
  FUN_100446d6();
  local_18 = 2;
  local_70 = 0;
  local_6c = 0;
  FUN_1015d555(&local_70);
  local_18 = 3;
  local_44 = local_54[0];
  local_4c = (undefined4 *)*local_54[0];
  while (local_4c != local_44) {
    local_74 = local_4c + 4;
    cVar1 = *(char *)(local_4c + 10);
    if (cVar1 == '\x04') {
      local_70 = local_70 & 0xffffff00;
      local_18 = 3;
      FUN_100dc592(local_4c + 10,&local_70);
      local_78 = CONCAT31(local_78._1_3_,(undefined1)local_70);
      FUN_1017d032(&local_70,local_74);
      *(undefined1 *)(local_70 + 0x20) = (undefined1)local_78;
    }
    else if ((byte)(cVar1 - 5U) < 2) {
      local_6c = 0;
      local_70 = 0;
      local_18 = 3;
      FUN_100d8b63(local_4c + 10,&local_70);
      local_78 = local_70;
      local_48 = local_6c;
      FUN_1017d032(&local_70,local_74);
      local_78 = local_78 | local_48;
      *(bool *)(local_70 + 0x20) = local_78 != 0;
    }
    else if (cVar1 == '\x03') {
      local_18 = 3;
      FUN_100173ea(&local_70,local_40[0] & 0xff);
      local_18 = 4;
      local_78 = local_60;
      FUN_1017d032(local_40,local_74);
      *(bool *)(local_40[0] + 0x20) = local_78 != 0;
      local_18 = 0xffffffff;
      FUN_10001fee();
    }
    FUN_10016fb8();
  }
  local_18 = 0xffffffff;
  FUN_10016fee(local_54,local_54[0][1]);
  FUN_102283a0(local_54[0],0x38);
  FUN_1022c200(&DAT_1038a098);
  FUN_10013efc();
  ExceptionList = local_20;
  return;
}

