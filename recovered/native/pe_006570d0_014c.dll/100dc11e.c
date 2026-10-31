/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100dc11e */

undefined4 * __thiscall
FUN_100dc11e(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)

{
  undefined4 *local_28 [2];
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)local_28;
  local_14 = 0xffffffff;
  local_18 = &LAB_100de0b0;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  param_1[3] = param_5;
  param_1[4] = param_6;
  param_1[5] = 0;
  local_28[0] = param_1 + 6;
  FUN_10001f66(&DAT_1033ec41);
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0xf;
  ExceptionList = local_1c;
  return param_1;
}

