/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100342ae */

undefined4 * __thiscall
FUN_100342ae(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
            undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12,
            undefined4 param_13,undefined4 param_14,undefined4 param_15,undefined4 param_16)

{
  undefined4 *puVar1;
  undefined4 *local_34;
  undefined4 *local_30;
  undefined4 *local_2c;
  undefined4 *local_28;
  undefined4 *local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_34;
  local_18 = &LAB_10059b30;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  *param_1 = spdlog::formatter::vftable;
  *param_1 = spdlog::pattern_formatter::vftable;
  local_24 = param_1 + 1;
  *(undefined8 *)(param_1 + 5) = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(ulonglong *)(param_1 + 5) = CONCAT44(param_7,param_6);
  param_1[1] = param_2;
  param_1[2] = param_3;
  param_1[3] = param_4;
  param_1[4] = param_5;
  local_34 = param_1 + 7;
  *(undefined8 *)(param_1 + 0xb) = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  *(ulonglong *)(param_1 + 0xb) = CONCAT44(param_14,param_13);
  param_1[7] = param_9;
  param_1[8] = param_10;
  param_1[9] = param_11;
  param_1[10] = param_12;
  param_1[0xd] = param_8;
  *(undefined1 *)(param_1 + 0xe) = 0;
  local_30 = param_1 + 0x1a;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  local_14 = 8;
  local_2c = param_1 + 0x1d;
  local_28 = param_1;
  FUN_1003423e(&param_15);
  local_14 = 9;
  local_28[0x13] = 0;
  local_28[0x14] = 0;
  local_28[0x15] = 0;
  local_28[0x16] = 0;
  local_28[0xf] = 0;
  local_28[0x10] = 0;
  local_28[0x11] = 0;
  local_28[0x12] = 0;
  local_28[0x17] = 0;
  FUN_1003465c(local_24);
  puVar1 = local_28;
  local_14 = 0xffffffff;
  FUN_10001fee();
  FUN_10001fee();
  local_14 = 0xffffffff;
  FUN_10004eae();
  FUN_1002335e(&param_16,param_16);
  FUN_102283a0(param_16,0x10);
  ExceptionList = local_1c;
  return puVar1;
}

