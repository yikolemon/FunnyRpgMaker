/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100ca3ce */

int FUN_100ca3ce(int param_1)

{
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_30;
  local_14 = 0xffffffff;
  local_18 = &LAB_100cc410;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  FUN_1001860e(param_1);
  local_14 = 0;
  local_30 = local_24 + 0x28;
  FUN_1001860e(param_1 + 0x28);
  local_14 = 1;
  local_2c = local_24 + 0x50;
  FUN_1001860e(param_1 + 0x50);
  local_14 = 2;
  local_28 = local_24 + 0x78;
  FUN_1001860e(param_1 + 0x78);
  ExceptionList = local_1c;
  return local_24;
}

