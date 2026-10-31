/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800c248b */

void FUN_1800c248b(undefined8 param_1,undefined8 param_2)

{
  undefined **local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined ***local_28;
  undefined ***local_20;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  local_28 = &local_60;
  local_60 = std::
             _Func_impl_no_alloc<`void___cdecl_DrawMessageSafeCall<MessageContainer_V_10000*___ptr64&___ptr64,`void___cdecl_DrawMessage_V_20024_hook(MessageContainer_V_10000*___ptr64,char,double,double,double)'::`1'::<lambda_24>_>(MessageContainer_V_10000*___ptr64&___ptr64,`void___cdecl_DrawMessage_V_20024_hook(MessageContainer_V_10000*___ptr64,char,double,double,double)'::`1'::<lambda_24>&&___ptr64)'::`1'::<lambda_1>,void>
             ::vftable;
  local_58 = param_1;
  local_50 = param_2;
  local_20 = local_28;
  FUN_18005b913(&local_60);
  if (local_28 != (undefined ***)0x0) {
    (*(code *)(*local_28)[4])(local_28,local_28 != &local_60);
  }
  return;
}

