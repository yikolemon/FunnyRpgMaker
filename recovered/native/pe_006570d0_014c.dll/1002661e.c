/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1002661e */

/* WARNING: Unable to track spacebase fully for stack */

undefined4 __thiscall FUN_1002661e(undefined4 *param_1,int param_2)

{
  undefined4 *puVar1;
  undefined1 *puVar2;
  undefined1 auStack_9c [24];
  undefined1 local_84 [20];
  void **ppvStack_70;
  undefined1 local_6c [48];
  undefined1 local_3c [4];
  undefined4 *local_38;
  undefined1 *local_34;
  undefined1 *local_30;
  undefined1 *local_2c;
  int local_28;
  void **local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_34 = local_6c;
  local_14 = 0xffffffff;
  local_18 = &LAB_100598c0;
  local_1c = ExceptionList;
  if (param_2 < 0) {
    local_28 = -param_2;
    local_24 = (void **)0x100002d;
    ppvStack_70 = &local_1c;
  }
  else {
    local_28 = param_2;
    local_24 = *(void ***)((int)&DAT_1028f244 + (*(uint *)param_1[1] >> 8 & 0xc));
    ppvStack_70 = local_24;
  }
  local_20 = auStack_9c;
  local_30 = local_84;
  ExceptionList = &local_1c;
  FUN_1000334a(param_1 + 2);
  local_14 = 2;
  local_38 = param_1;
  local_2c = auStack_9c;
  FUN_1000334a(param_1 + 8);
  puVar1 = local_38;
  local_14 = 0xffffffff;
  FUN_10027170();
  puVar2 = local_34;
  local_20 = local_34;
  local_14 = 4;
  *(undefined1 **)(local_34 + -4) = local_6c;
  *(undefined4 *)(puVar2 + -8) = puVar1[1];
  *(void ***)(puVar2 + -0xc) = local_24;
  *(undefined4 *)(puVar2 + -0x10) = 0;
  *(int *)(puVar2 + -0x14) = local_28;
  *(undefined4 *)(puVar2 + -0x18) = *puVar1;
  *(undefined1 **)(puVar2 + -0x1c) = local_3c;
  *(undefined4 *)(puVar2 + -0x20) = 0x100266ef;
  FUN_10026c00();
  local_14 = 0xffffffff;
  *(undefined4 *)(puVar2 + -4) = 0x1002671a;
  FUN_10001fee();
  *(undefined4 *)(puVar2 + -4) = 0x10026722;
  FUN_10001fee();
  ExceptionList = local_1c;
  return 1;
}

