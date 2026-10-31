/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100d55a4 */

void FUN_100d55a4(void)

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
  local_18 = &LAB_100ddbd0;
  local_1c = ExceptionList;
  local_28 = "$gamePlayer.setThrough({})";
  uStack_24 = 0x1a;
  local_4c = 0x1a103472d0;
  local_44 = &DAT_10388e04;
  ExceptionList = &local_1c;
  local_50 = local_40;
  FUN_100d575b();
  local_14 = 0;
  local_50 = local_40;
  FUN_10014730();
  local_14 = 0xffffffff;
  FUN_10001fee();
  ExceptionList = local_1c;
  return;
}

