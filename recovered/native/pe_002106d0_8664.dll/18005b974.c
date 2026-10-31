/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18005b974 */

void FUN_18005b974(void)

{
  undefined **local_60 [7];
  undefined ***local_28;
  undefined ***local_20;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  local_28 = local_60;
  local_60[0] = std::
                _Func_impl_no_alloc<`void___cdecl_WolfRequestReloadTranslations(void)'::`1'::<lambda_8>,void>
                ::vftable;
  local_20 = local_28;
  FUN_18005b913(local_60);
  if (local_28 != (undefined ***)0x0) {
    (*(code *)(*local_28)[4])(local_28,local_28 != local_60);
  }
  return;
}

