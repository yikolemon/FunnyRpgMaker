/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18018033d */

void FUN_18018033d(undefined4 param_1)

{
  undefined **local_60;
  undefined4 local_58;
  undefined ***local_28;
  undefined ***local_20;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  FUN_18017037a();
  DAT_1804195e4 = 1;
  local_28 = &local_60;
  local_60 = std::
             _Func_impl_no_alloc<`void___cdecl_RequestGlobalMapInfo(int)'::`1'::<lambda_0>,void>::
             vftable;
  local_58 = param_1;
  local_20 = local_28;
  FUN_18001405b(&local_60);
  if (local_28 != (undefined ***)0x0) {
    (*(code *)(*local_28)[4])(local_28,local_28 != &local_60);
  }
  return;
}

