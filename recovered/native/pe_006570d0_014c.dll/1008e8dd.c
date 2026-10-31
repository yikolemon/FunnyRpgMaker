/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1008e8dd */

/* WARNING: Unable to track spacebase fully for stack */

uint * FUN_1008e8dd(uint *param_1,uint param_2,uint param_3,uint param_4,uint param_5,
                   undefined4 param_6,undefined4 param_7)

{
  undefined1 *puVar1;
  int *piVar2;
  int local_9c [8];
  void **local_7c;
  undefined1 local_78 [24];
  undefined1 local_60 [24];
  undefined1 local_48 [24];
  undefined1 *local_30;
  uint *local_2c;
  int *local_28;
  int *local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_30 = local_78;
  local_7c = &local_1c;
  local_18 = &LAB_100c3810;
  local_1c = ExceptionList;
  local_2c = param_1;
  local_14 = 0;
  local_24 = local_9c;
  local_20 = (undefined1 *)local_9c;
  ExceptionList = local_7c;
  FUN_100012b0(L"");
  local_14 = 5;
  FUN_100012b0(L" ");
  local_14 = 6;
  local_28 = local_24 + 1;
  FUN_10003728(&param_2);
  piVar2 = local_24;
  *local_24 = (int)local_78;
  piVar2[7] = (int)local_48;
  piVar2[8] = (int)local_60;
  local_14 = 6;
  FUN_1008ed2b();
  puVar1 = local_30;
  local_20 = local_30;
  local_14 = 0xffffffff;
  *(undefined4 *)(local_30 + -4) = 0x1008e9b5;
  FUN_10001134();
  *(undefined4 *)(puVar1 + -4) = 0x1008e9bd;
  FUN_10001134();
  *(undefined4 *)(puVar1 + -4) = 0x1008e9c5;
  FUN_10001134();
  local_14 = 0;
  *(undefined4 *)(puVar1 + -4) = 1;
  *(wchar_t **)(puVar1 + -8) = L"^\\u3000*";
  *(undefined4 *)(puVar1 + -0xc) = 0x1008e9db;
  FUN_1008ec70();
  local_14 = 3;
  *(undefined4 *)(puVar1 + -4) = 0;
  *(wchar_t **)(puVar1 + -8) = L"";
  *(undefined1 **)(puVar1 + -0xc) = local_48;
  *(uint **)(puVar1 + -0x10) = &param_2;
  *(undefined1 **)(puVar1 + -0x14) = local_60;
  *(undefined4 *)(puVar1 + -0x18) = 0x1008e9fc;
  FUN_1008eb9b();
  local_14 = 4;
  *(undefined1 **)(puVar1 + -4) = local_60;
  *(undefined4 *)(puVar1 + -8) = 0x1008ea13;
  FUN_100128b2();
  local_14 = 0xffffffff;
  *(undefined4 *)(puVar1 + -4) = 0x1008ea22;
  FUN_10001134();
  *(undefined4 *)(puVar1 + -4) = 0x1008ea2a;
  FUN_10018a12();
  local_14 = 0;
  *(undefined4 *)(puVar1 + -4) = 1;
  *(wchar_t **)(puVar1 + -8) = L"\\u3000*$";
  *(undefined4 *)(puVar1 + -0xc) = 0x1008ea40;
  FUN_1008ec70();
  local_14 = 1;
  *(undefined4 *)(puVar1 + -4) = 0;
  *(wchar_t **)(puVar1 + -8) = L"";
  *(undefined1 **)(puVar1 + -0xc) = local_48;
  *(uint **)(puVar1 + -0x10) = &param_2;
  *(undefined1 **)(puVar1 + -0x14) = local_60;
  *(undefined4 *)(puVar1 + -0x18) = 0x1008ea61;
  FUN_1008eb9b();
  local_14 = 2;
  *(undefined1 **)(puVar1 + -4) = local_60;
  *(undefined4 *)(puVar1 + -8) = 0x1008ea78;
  FUN_100128b2();
  local_14 = 0xffffffff;
  *(undefined4 *)(puVar1 + -4) = 0x1008ea87;
  FUN_10001134();
  *(undefined4 *)(puVar1 + -4) = 0x1008ea95;
  FUN_10018a12();
  local_2c[4] = 0;
  local_2c[5] = 0;
  *local_2c = 0;
  local_2c[1] = 0;
  local_2c[2] = 0;
  local_2c[3] = 0;
  *local_2c = param_2;
  local_2c[1] = param_3;
  local_2c[2] = param_4;
  local_2c[3] = param_5;
  *(ulonglong *)(local_2c + 4) = CONCAT44(param_7,param_6);
  param_6 = 0;
  param_7 = 7;
  param_2 = param_2 & 0xffff0000;
  *(undefined4 *)(puVar1 + -4) = 0x1008ead2;
  FUN_10001134();
  ExceptionList = local_1c;
  return param_1;
}

