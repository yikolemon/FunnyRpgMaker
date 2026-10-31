/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100e4300 */

void FUN_100e4300(void)

{
  undefined1 local_48 [8];
  undefined1 local_40 [24];
  undefined4 *local_28;
  undefined4 *local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = local_48;
  local_14 = 0xffffffff;
  local_18 = &LAB_100ea8a0;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  FUN_100e9e1c();
  local_14 = 0;
  FUN_100e1a88();
  local_28 = DAT_1039d494;
  local_24 = (undefined4 *)*DAT_1039d494;
  while (local_24 != local_28) {
    local_14 = 0;
    FUN_100c5628(local_40,local_24 + 4);
    local_14 = 1;
    FUN_100e9ee6(local_48,local_40);
    local_14 = 0xffffffff;
    FUN_10001fee();
    FUN_10016fb8();
  }
  ExceptionList = local_1c;
  return;
}

