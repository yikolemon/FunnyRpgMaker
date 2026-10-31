/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1005ba1e */

/* WARNING: Unable to track spacebase fully for stack */

void FUN_1005ba1e(void)

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
  local_18 = &LAB_100c1960;
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
  FUN_10001f66("Game/ts_wfch_uxmo.bin");
  puVar1 = local_30;
  local_14 = 1;
  *local_30 = &DAT_1039c9d4;
  puVar1[1] = local_48;
  local_22 = 0;
  FUN_100c8745();
  puVar2 = local_2c;
  local_20 = local_2c;
  local_22 = 0;
  local_14 = 0xffffffff;
  *(undefined4 *)(local_2c + -4) = 0x1005bacf;
  FUN_10001fee();
  local_21 = 0;
  *(undefined1 **)(puVar2 + -4) = &LAB_1005bb2c;
  *(undefined4 *)(puVar2 + -8) = 0x1005bade;
  FUN_1022c3a0();
  ExceptionList = local_1c;
  return;
}

