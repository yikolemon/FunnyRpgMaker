/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10019768 */

void FUN_10019768(void)

{
  int local_1c;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *local_c;
  undefined4 local_8;
  
  local_14 = (undefined1 *)&local_1c;
  local_c = &LAB_10059240;
  local_10 = ExceptionList;
  local_8 = 0xffffffff;
  ExceptionList = &local_10;
  FUN_10019e5e();
  FUN_10019e92();
  local_1c = local_18 + 0x34;
  local_8 = 0xffffffff;
  FUN_10019e92();
  FUN_10019e92();
  local_1c = local_18 + 0x18;
  local_8 = 0xffffffff;
  FUN_10019e92();
  FUN_10019e92();
  ExceptionList = local_10;
  return;
}

