/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100a4dae */

undefined4 * __fastcall FUN_100a4dae(undefined4 *param_1)

{
  undefined4 *local_40;
  undefined4 *local_3c;
  undefined4 *local_38;
  undefined4 *local_34;
  undefined1 **local_30;
  undefined4 *local_2c;
  undefined4 *local_28;
  undefined4 local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_40;
  local_14 = 0xffffffff;
  local_18 = &LAB_100c41f0;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  *param_1 = 0;
  local_40 = param_1 + 1;
  FUN_100012b0(L"");
  local_3c = param_1 + 9;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  local_14 = 1;
  *(undefined1 *)(param_1 + 0xc) = 0;
  local_38 = param_1 + 0xd;
  local_30 = &local_20;
  local_24 = 0x3039;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  local_2c = &local_24;
  local_28 = param_1;
  FUN_10044618(4,&local_2c,&local_30);
  local_14 = 2;
  local_34 = local_28 + 0x10;
  local_24 = 0;
  local_28[0x10] = 0;
  local_28[0x11] = 0;
  local_28[0x12] = 0;
  local_30 = &local_20;
  local_2c = &local_24;
  FUN_10044618(4,&local_2c,&local_30);
  ExceptionList = local_1c;
  return local_28;
}

