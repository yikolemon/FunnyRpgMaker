/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10041bb6 */

undefined4 * __thiscall
FUN_10041bb6(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,int param_8,int param_9)

{
  undefined4 *puVar1;
  int local_3c;
  int local_38;
  undefined4 *local_34;
  undefined4 *local_30;
  undefined4 *local_2c;
  undefined4 *local_28;
  undefined4 *local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_3c;
  local_18 = &LAB_1005a400;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  *param_1 = spdlog::logger::vftable;
  local_34 = param_1 + 2;
  *(undefined8 *)(param_1 + 6) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(ulonglong *)(param_1 + 6) = CONCAT44(param_7,param_6);
  param_1[2] = param_2;
  param_1[3] = param_3;
  param_1[4] = param_4;
  param_1[5] = param_5;
  local_14 = 1;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  local_3c = param_8;
  local_38 = param_9;
  local_30 = param_1 + 8;
  local_24 = param_1;
  FUN_10042356(param_9 - param_8 >> 3,&local_3c,&local_38);
  local_24[0xb] = 2;
  local_24[0xc] = 6;
  local_2c = local_24 + 0xe;
  local_24[0x17] = 0;
  local_14 = 3;
  local_28 = local_24 + 0x18;
  FUN_10041d60();
  puVar1 = local_24;
  local_14 = 0xffffffff;
  FUN_10001fee();
  ExceptionList = local_1c;
  return puVar1;
}

