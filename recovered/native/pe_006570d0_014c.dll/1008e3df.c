/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1008e3df */

/* WARNING: Unable to track spacebase fully for stack */

uint * FUN_1008e3df(uint *param_1,uint param_2,uint param_3,uint param_4,uint param_5,
                   undefined4 param_6,undefined4 param_7)

{
  undefined1 *puVar1;
  int local_78;
  undefined1 local_74 [20];
  void **ppvStack_60;
  undefined1 local_5c [20];
  undefined1 local_48 [24];
  int *local_30;
  undefined1 *local_2c;
  uint *local_28;
  undefined1 *local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_2c = local_5c;
  ppvStack_60 = &local_1c;
  local_18 = &LAB_100c37d0;
  local_1c = ExceptionList;
  local_28 = param_1;
  local_14 = 0;
  local_20 = (undefined1 *)&local_78;
  local_30 = &local_78;
  local_24 = local_74;
  ExceptionList = ppvStack_60;
  FUN_10003728(&param_2);
  *local_30 = (int)local_48;
  local_14 = 0;
  FUN_1008e8dd();
  puVar1 = local_2c;
  local_20 = local_2c;
  local_14 = 4;
  *(undefined1 **)(local_2c + -4) = local_48;
  *(undefined4 *)(puVar1 + -8) = 0x1008e47b;
  FUN_100128b2();
  local_14 = 0xffffffff;
  *(undefined4 *)(puVar1 + -4) = 0x1008e48a;
  FUN_10001134();
  local_14 = 0;
  *(undefined4 *)(puVar1 + -4) = 1;
  *(wchar_t **)(puVar1 + -8) = L"[\\/\\\\:\\*\\?\\\"<>\\|]";
  *(undefined4 *)(puVar1 + -0xc) = 0x1008e4a0;
  FUN_1008ec70();
  local_14 = 1;
  *(undefined4 *)(puVar1 + -4) = 0;
  *(wchar_t **)(puVar1 + -8) = L"_";
  *(undefined1 **)(puVar1 + -0xc) = local_5c;
  *(uint **)(puVar1 + -0x10) = &param_2;
  *(undefined1 **)(puVar1 + -0x14) = local_48;
  *(undefined4 *)(puVar1 + -0x18) = 0x1008e4c1;
  FUN_1008eb9b();
  local_14 = 2;
  *(undefined1 **)(puVar1 + -4) = local_48;
  *(undefined4 *)(puVar1 + -8) = 0x1008e4d8;
  FUN_100128b2();
  local_14 = 0xffffffff;
  *(undefined4 *)(puVar1 + -4) = 0x1008e4e7;
  FUN_10001134();
  *(undefined4 *)(puVar1 + -4) = 0x1008e4f5;
  FUN_10018a12();
  local_28[4] = 0;
  local_28[5] = 0;
  *local_28 = 0;
  local_28[1] = 0;
  local_28[2] = 0;
  local_28[3] = 0;
  *local_28 = param_2;
  local_28[1] = param_3;
  local_28[2] = param_4;
  local_28[3] = param_5;
  *(ulonglong *)(local_28 + 4) = CONCAT44(param_7,param_6);
  param_6 = 0;
  param_7 = 7;
  param_2 = param_2 & 0xffff0000;
  *(undefined4 *)(puVar1 + -4) = 0x1008e532;
  FUN_10001134();
  ExceptionList = local_1c;
  return param_1;
}

