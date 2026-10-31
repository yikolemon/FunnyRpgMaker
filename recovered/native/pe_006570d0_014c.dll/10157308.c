/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10157308 */

/* WARNING: Unable to track spacebase fully for stack */

void FUN_10157308(void)

{
  undefined4 *puVar1;
  undefined1 *puVar2;
  undefined4 local_68 [2];
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 local_50;
  undefined1 local_48 [24];
  undefined4 *local_30;
  undefined1 *local_2c;
  undefined4 *local_28;
  undefined1 local_22;
  undefined1 local_21;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_2c = local_48;
  local_14 = 0xffffffff;
  local_18 = &LAB_1015f4d0;
  local_1c = ExceptionList;
  local_20 = (undefined1 *)local_68;
  local_30 = local_68;
  local_28 = &local_60;
  local_50 = 0;
  local_60 = 0;
  uStack_5c = 0;
  uStack_58 = 0;
  uStack_54 = 0;
  ExceptionList = &local_1c;
  FUN_10002eb6();
  local_14 = 0;
  local_21 = 1;
  FUN_10001f66("Game/ts_rgmk_uxow.bin");
  puVar1 = local_30;
  local_14 = 1;
  *local_30 = &DAT_1039d81c;
  puVar1[1] = local_48;
  local_22 = 0;
  FUN_100c8745();
  puVar2 = local_2c;
  local_20 = local_2c;
  local_22 = 0;
  local_14 = 0xffffffff;
  *(undefined4 *)(local_2c + -4) = 0x101573b9;
  FUN_10001fee();
  local_21 = 0;
  *(undefined1 **)(puVar2 + -4) = &LAB_10157416;
  *(undefined4 *)(puVar2 + -8) = 0x101573c8;
  FUN_1022c3a0();
  ExceptionList = local_1c;
  return;
}

