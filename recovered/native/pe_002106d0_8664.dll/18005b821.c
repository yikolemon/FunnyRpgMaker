/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18005b821 */

void FUN_18005b821(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined **local_70;
  undefined4 *local_68;
  undefined4 *local_60;
  undefined4 *local_58;
  undefined ***local_38;
  undefined ***local_30;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  local_38 = &local_70;
  local_70 = std::
             _Func_impl_no_alloc<`void___cdecl_WolfRequestLoadMap(int,int,int)'::`1'::<lambda_7>,void>
             ::vftable;
  local_68 = &local_1c;
  local_60 = &local_20;
  local_58 = &local_24;
  local_30 = local_38;
  local_24 = param_3;
  local_20 = param_2;
  local_1c = param_1;
  FUN_18005b913(&local_70);
  if (local_38 != (undefined ***)0x0) {
    (*(code *)(*local_38)[4])(local_38,local_38 != &local_70);
  }
  return;
}

