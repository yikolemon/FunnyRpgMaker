/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100bf476 */

void FUN_100bf476(undefined4 param_1)

{
  undefined4 local_34;
  undefined1 *local_30;
  undefined1 local_2c;
  undefined4 *local_28;
  undefined4 *local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_34;
  local_18 = &LAB_100c4c80;
  local_1c = ExceptionList;
  local_34 = param_1;
  local_30 = &stack0x00000008;
  local_2c = 1;
  local_14 = 0;
  ExceptionList = &local_1c;
  local_24 = (undefined4 *)FUN_10228350(0x10);
  local_24[1] = 1;
  local_24[2] = 1;
  local_14 = 0xffffffff;
  *local_24 = std::_Ref_count_resource<unsigned_char*,std::default_delete<unsigned_char_[0]>_>::
              vftable;
  local_24[3] = param_1;
  *local_28 = param_1;
  local_28[1] = local_24;
  local_2c = 0;
  FUN_100bf54c();
  ExceptionList = local_1c;
  return;
}

