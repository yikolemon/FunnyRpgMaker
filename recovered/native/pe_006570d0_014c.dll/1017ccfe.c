/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1017ccfe */

void __fastcall FUN_1017ccfe(undefined4 param_1,undefined4 param_2)

{
  undefined1 *local_60;
  undefined8 local_5c;
  undefined4 *local_54;
  undefined1 *local_50;
  undefined4 *local_4c;
  undefined1 local_48 [24];
  undefined4 local_30;
  undefined1 local_2c [4];
  char *local_28;
  undefined4 uStack_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_60;
  local_14 = 0xffffffff;
  local_18 = &LAB_101801a0;
  local_1c = ExceptionList;
  local_4c = &local_30;
  local_50 = local_2c;
  local_28 = "$gamePlayer.reserveTransfer({}, {}, {}, 0, 0);";
  uStack_24 = 0x2e;
  local_5c = 0x2e1033d56a;
  local_54 = &DAT_10389fc8;
  ExceptionList = &local_1c;
  local_60 = local_48;
  local_30 = param_2;
  FUN_1017cee0();
  local_14 = 0;
  local_60 = local_48;
  FUN_10014730();
  local_14 = 0xffffffff;
  FUN_10001fee();
  ExceptionList = local_1c;
  return;
}

