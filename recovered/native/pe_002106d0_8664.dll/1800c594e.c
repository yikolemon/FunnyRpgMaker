/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800c594e */

void FUN_1800c594e(undefined8 *param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 local_48;
  undefined1 *local_40;
  undefined1 local_38;
  undefined8 *local_30;
  undefined1 local_21;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  local_40 = &local_21;
  local_38 = 1;
  local_48 = param_2;
  local_21 = param_3;
  local_30 = (undefined8 *)FUN_180239630(0x18);
  local_30[1] = 0x100000001;
  *local_30 = std::
              _Ref_count_resource<unsigned_char*___ptr64,std::default_delete<unsigned_char_[0]>_>::
              vftable;
  local_30[2] = param_2;
  *param_1 = param_2;
  param_1[1] = local_30;
  local_38 = 0;
  FUN_1800c5a16(&local_48);
  return;
}

