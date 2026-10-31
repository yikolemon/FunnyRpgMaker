/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100ca20c */

/* WARNING: Unable to track spacebase fully for stack */

void __thiscall FUN_100ca20c(int *param_1,int param_2)

{
  undefined1 *puVar1;
  int local_30;
  int local_2c;
  int local_28;
  undefined1 *local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_24 = (undefined1 *)&local_2c;
  local_14 = 0xffffffff;
  local_18 = &LAB_100cc3f0;
  local_1c = ExceptionList;
  local_20 = (undefined1 *)&local_30;
  local_30 = param_2;
  ExceptionList = &local_1c;
  FUN_100cb0d7(&local_28,param_2);
  local_2c = local_28;
  local_28 = 0;
  local_30 = local_2c;
  local_14 = 1;
  (**(code **)(*param_1 + 0x20))();
  puVar1 = local_24;
  local_20 = local_24;
  if (local_28 != 0) {
    local_14 = 0;
    local_24 = (undefined1 *)local_28;
    *(undefined4 *)(puVar1 + -4) = 0x100ca2b6;
    FUN_1003371e();
    local_14 = 0xffffffff;
    *(undefined4 *)(puVar1 + -4) = 0x98;
    *(undefined1 **)(puVar1 + -8) = local_24;
    *(undefined4 *)(puVar1 + -0xc) = 0x100ca2cb;
    FUN_102283a0();
  }
  ExceptionList = local_1c;
  return;
}

