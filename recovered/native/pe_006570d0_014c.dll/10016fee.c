/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10016fee */

void FUN_10016fee(undefined4 param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 *local_28;
  undefined4 *local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_28;
  local_14 = 0xffffffff;
  local_18 = &LAB_10059020;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  while (*(char *)((int)param_2 + 0xd) == '\0') {
    FUN_10016fee(param_1,param_2[2]);
    puVar1 = (undefined4 *)*param_2;
    local_28 = param_2 + 4;
    local_14 = 0xffffffff;
    local_24 = param_2;
    FUN_10013efc();
    FUN_10001fee();
    FUN_102283a0(param_2,0x38);
    param_2 = puVar1;
  }
  ExceptionList = local_1c;
  return;
}

