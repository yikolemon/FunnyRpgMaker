/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100bb972 */

void __fastcall FUN_100bb972(undefined4 param_1,undefined4 param_2)

{
  undefined1 auStack_58 [4];
  undefined ***local_54;
  undefined **local_50 [2];
  undefined4 local_48;
  undefined ***local_2c;
  undefined1 *local_28;
  undefined1 *local_24;
  void *local_20;
  undefined1 *local_1c;
  undefined4 local_18;
  
  local_28 = &stack0xfffffffc;
  local_24 = auStack_58;
  local_1c = &LAB_100c1d50;
  local_20 = ExceptionList;
  local_54 = local_50;
  local_50[0] = std::
                _Func_impl_no_alloc<`void___cdecl_DrawMessageSafeCall<MessageContainer_V_30000*&,`void___cdecl_DrawMessage_V_30000_callee(MessageContainer_V_30000*,int,double,double,int,__int64)'::`1'::<lambda_25>_>(MessageContainer_V_30000*&,`void___cdecl_DrawMessage_V_30000_callee(MessageContainer_V_30000*,int,double,double,int,__int64)'::`1'::<lambda_25>&&)'::`1'::<lambda_1>,void>
                ::vftable;
  local_18 = 1;
  ExceptionList = &local_20;
  local_48 = param_2;
  local_2c = local_54;
  FUN_1005c6a3(local_50);
  local_18 = 0xffffffff;
  if (local_2c != (undefined ***)0x0) {
    (*(code *)(*local_2c)[4])(local_2c != local_50);
  }
  ExceptionList = local_20;
  return;
}

