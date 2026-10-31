/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10026908 */

/* WARNING: Unable to track spacebase fully for stack */

undefined4 __thiscall FUN_10026908(undefined4 *param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  undefined1 *puVar2;
  undefined1 auStack_a0 [24];
  undefined1 local_88 [20];
  int iStack_74;
  undefined1 local_70 [48];
  undefined1 local_40 [4];
  undefined4 *local_3c;
  undefined1 *local_38;
  undefined1 *local_34;
  undefined1 *local_30;
  int local_2c;
  int local_28;
  int local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_38 = local_70;
  local_14 = 0xffffffff;
  local_18 = &LAB_100598e0;
  local_1c = ExceptionList;
  if (param_3 < 0) {
    local_2c = -param_2;
    iStack_74 = -(uint)(param_2 != 0) - param_3;
    local_24 = 0x100002d;
    local_28 = iStack_74;
  }
  else {
    local_28 = param_3;
    local_2c = param_2;
    iStack_74 = *(int *)((int)&DAT_1028f244 + (*(uint *)param_1[1] >> 8 & 0xc));
    local_24 = iStack_74;
  }
  local_20 = auStack_a0;
  local_34 = local_88;
  ExceptionList = &local_1c;
  FUN_1000334a(param_1 + 2);
  local_14 = 2;
  local_3c = param_1;
  local_30 = auStack_a0;
  FUN_1000334a(param_1 + 8);
  puVar1 = local_3c;
  local_14 = 0xffffffff;
  FUN_10027170();
  puVar2 = local_38;
  local_20 = local_38;
  local_14 = 4;
  *(undefined1 **)(local_38 + -4) = local_70;
  *(undefined4 *)(puVar2 + -8) = puVar1[1];
  *(int *)(puVar2 + -0xc) = local_24;
  *(int *)(puVar2 + -0x10) = local_28;
  *(int *)(puVar2 + -0x14) = local_2c;
  *(undefined4 *)(puVar2 + -0x18) = *puVar1;
  *(undefined1 **)(puVar2 + -0x1c) = local_40;
  *(undefined4 *)(puVar2 + -0x20) = 0x100269e7;
  FUN_10026c00();
  local_14 = 0xffffffff;
  *(undefined4 *)(puVar2 + -4) = 0x10026a12;
  FUN_10001fee();
  *(undefined4 *)(puVar2 + -4) = 0x10026a1a;
  FUN_10001fee();
  ExceptionList = local_1c;
  return 1;
}

