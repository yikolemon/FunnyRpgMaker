/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10014730 */

void FUN_10014730(undefined4 param_1)

{
  undefined1 auStack_70 [4];
  int *local_6c;
  int local_50 [9];
  int *local_2c;
  undefined1 *local_28;
  undefined1 *local_24;
  void *local_20;
  undefined1 *local_1c;
  undefined4 local_18;
  
  local_28 = &stack0xfffffffc;
  local_24 = auStack_70;
  local_18 = 0xffffffff;
  local_1c = &LAB_10058d90;
  local_20 = ExceptionList;
  ExceptionList = &local_20;
  FUN_1000334a(param_1);
  local_2c = (int *)0x0;
  local_18 = 3;
  local_6c = (int *)0x0;
  local_6c = (int *)FUN_1005861a();
  local_18 = 4;
  local_2c = local_6c;
  FUN_100148b1(local_50);
  local_18 = 0xffffffff;
  if (local_2c != (int *)0x0) {
    (**(code **)(*local_2c + 0x10))(local_2c != local_50);
    local_2c = (int *)0x0;
  }
  local_18 = 0xffffffff;
  FUN_10001fee();
  ExceptionList = local_20;
  return;
}

