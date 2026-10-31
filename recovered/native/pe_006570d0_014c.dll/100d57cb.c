/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100d57cb */

void FUN_100d57cb(void)

{
  undefined1 *local_50;
  undefined8 local_4c;
  undefined *local_44;
  undefined1 local_40 [24];
  char *local_28;
  undefined4 uStack_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_50;
  local_14 = 0xffffffff;
  local_18 = &LAB_100ddbf0;
  local_1c = ExceptionList;
  local_28 = "$gameParty._gold = {}";
  uStack_24 = 0x15;
  local_4c = 0x151032f84b;
  local_44 = &DAT_1039cfc8;
  ExceptionList = &local_1c;
  local_50 = local_40;
  FUN_100d5a69();
  local_14 = 0;
  local_50 = local_40;
  FUN_10014730();
  local_14 = 0xffffffff;
  FUN_10001fee();
  ExceptionList = local_1c;
  return;
}

