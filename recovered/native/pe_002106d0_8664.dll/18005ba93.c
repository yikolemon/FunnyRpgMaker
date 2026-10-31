/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18005ba93 */

void FUN_18005ba93(undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined **local_80;
  undefined4 *local_78;
  undefined8 *local_70;
  undefined8 *local_68;
  undefined8 *local_60;
  undefined1 *local_58;
  undefined1 *local_50;
  undefined ***local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined ***local_28;
  undefined4 local_1c;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  local_48 = &local_80;
  local_80 = std::
             _Func_impl_no_alloc<`void___cdecl_WolfSetFieldValue(WolfDbType,unsigned___int64,unsigned___int64,unsigned___int64,int,char_const*___ptr64)'::`1'::<lambda_10>,void>
             ::vftable;
  local_78 = &local_1c;
  local_70 = &local_30;
  local_68 = &local_38;
  local_60 = &local_40;
  local_58 = &stack0x00000028;
  local_50 = &stack0x00000030;
  local_40 = param_4;
  local_38 = param_3;
  local_30 = param_2;
  local_28 = local_48;
  local_1c = param_1;
  FUN_18005b913(&local_80);
  if (local_48 != (undefined ***)0x0) {
    (*(code *)(*local_48)[4])(local_48,local_48 != &local_80);
  }
  return;
}

