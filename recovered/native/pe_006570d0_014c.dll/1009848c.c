/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1009848c */

undefined4 * __thiscall
FUN_1009848c(undefined4 *param_1,undefined4 *param_2,int *param_3,int *param_4,undefined1 *param_5)

{
  undefined4 *local_30;
  undefined4 *local_2c;
  undefined4 *local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_30;
  local_14 = 0xffffffff;
  local_18 = &LAB_100c3b60;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  *param_1 = Command::Command::vftable;
  local_30 = param_1 + 1;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  local_24 = param_1;
  FUN_10061af0(param_3[1] - *param_3 >> 2,param_3,param_3 + 1);
  local_14 = 0;
  local_24[4] = *param_2;
  local_2c = local_24 + 5;
  local_24[5] = 0;
  local_24[6] = 0;
  local_24[7] = 0;
  FUN_1006dcb2((param_4[1] - *param_4 >> 3) * -0x55555555,param_4,param_4 + 1);
  *(undefined1 *)(local_24 + 8) = *param_5;
  local_24[9] = 0;
  local_24[10] = 0;
  local_24[0xb] = 0;
  ExceptionList = local_1c;
  return local_24;
}

