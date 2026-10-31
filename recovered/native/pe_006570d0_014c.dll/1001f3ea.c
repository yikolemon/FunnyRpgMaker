/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1001f3ea */

undefined4 * FUN_1001f3ea(byte param_1)

{
  undefined4 *puVar1;
  int local_30;
  undefined4 *local_2c;
  undefined4 *local_28;
  undefined4 *local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_30;
  local_14 = 0xffffffff;
  local_18 = &LAB_10059560;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  local_28 = (undefined4 *)FUN_10228350(0x18);
  local_28[1] = param_1 | 10;
  local_28[2] = 0;
  local_28[3] = 0;
  local_28[4] = 0;
  *local_28 = std::_Node_assert::vftable;
  local_28[5] = 0;
  local_14 = 1;
  local_24 = local_28;
  local_2c = (undefined4 *)FUN_10228350(0x14);
  puVar1 = local_24;
  *local_2c = std::_Node_base::vftable;
  local_2c[1] = DAT_1028f5b0;
  local_2c[2] = 0;
  local_2c[3] = 0;
  local_2c[4] = 0;
  local_14 = 0xffffffff;
  FUN_1001d4f8(local_24);
  puVar1[5] = local_2c;
  local_2c[4] = puVar1;
  *(undefined4 **)(local_30 + 4) = local_2c;
  ExceptionList = local_1c;
  return puVar1;
}

