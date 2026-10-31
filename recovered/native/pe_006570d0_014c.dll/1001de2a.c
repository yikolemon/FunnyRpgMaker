/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1001de2a */

void FUN_1001de2a(undefined4 param_1)

{
  undefined4 *local_20;
  undefined1 *local_1c;
  void *local_18;
  undefined1 *local_14;
  undefined4 local_10;
  
  local_1c = (undefined1 *)&local_20;
  local_10 = 0xffffffff;
  local_14 = &LAB_100594a0;
  local_18 = ExceptionList;
  ExceptionList = &local_18;
  local_20 = (undefined4 *)FUN_10228350(0x18);
  local_20[1] = DAT_1028f570;
  local_20[2] = 0;
  local_20[3] = 0;
  local_20[4] = 0;
  local_10 = 0xffffffff;
  *local_20 = std::_Node_back::vftable;
  local_20[5] = param_1;
  FUN_1001d4f8(local_20);
  ExceptionList = local_18;
  return;
}

