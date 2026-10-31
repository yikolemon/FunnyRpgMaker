/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10026a98 */

/* WARNING: Unable to track spacebase fully for stack */

undefined4 __thiscall FUN_10026a98(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined1 *puVar2;
  undefined1 auStack_98 [24];
  undefined1 local_80 [20];
  undefined4 uStack_6c;
  undefined1 local_68 [48];
  undefined1 local_38 [4];
  undefined4 *local_34;
  undefined1 *local_30;
  undefined4 local_2c;
  undefined1 *local_28;
  undefined1 *local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_30 = local_68;
  local_14 = 0xffffffff;
  local_18 = &LAB_100598f0;
  local_1c = ExceptionList;
  uStack_6c = *(undefined4 *)((int)&DAT_1028f244 + (*(uint *)param_1[1] >> 8 & 0xc));
  local_20 = auStack_98;
  local_28 = local_80;
  ExceptionList = &local_1c;
  local_2c = uStack_6c;
  FUN_1000334a(param_1 + 2);
  local_14 = 2;
  local_34 = param_1;
  local_24 = auStack_98;
  FUN_1000334a(param_1 + 8);
  puVar1 = local_34;
  local_14 = 0xffffffff;
  FUN_10027170();
  puVar2 = local_30;
  local_20 = local_30;
  local_14 = 4;
  *(undefined1 **)(local_30 + -4) = local_68;
  *(undefined4 *)(puVar2 + -8) = puVar1[1];
  *(undefined4 *)(puVar2 + -0xc) = local_2c;
  *(undefined4 *)(puVar2 + -0x10) = param_3;
  *(undefined4 *)(puVar2 + -0x14) = param_2;
  *(undefined4 *)(puVar2 + -0x18) = *puVar1;
  *(undefined1 **)(puVar2 + -0x1c) = local_38;
  *(undefined4 *)(puVar2 + -0x20) = 0x10026b50;
  FUN_10026c00();
  local_14 = 0xffffffff;
  *(undefined4 *)(puVar2 + -4) = 0x10026b7b;
  FUN_10001fee();
  *(undefined4 *)(puVar2 + -4) = 0x10026b83;
  FUN_10001fee();
  ExceptionList = local_1c;
  return 1;
}

