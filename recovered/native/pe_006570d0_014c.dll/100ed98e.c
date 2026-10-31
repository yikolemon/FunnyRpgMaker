/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100ed98e */

undefined4 * __fastcall FUN_100ed98e(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *local_28 [2];
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)local_28;
  local_14 = 0xffffffff;
  local_18 = &LAB_100f5170;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  param_1[9] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[10] = 0xffffffff;
  *param_1 = 2;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  *(undefined8 *)(param_1 + 0xf) = 0;
  local_28[0] = param_1 + 0xc;
  puVar1 = (undefined4 *)FUN_10228350(8);
  puVar1[1] = 0;
  param_1[0xc] = puVar1;
  *puVar1 = param_1 + 0xc;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  ExceptionList = local_1c;
  return param_1;
}

