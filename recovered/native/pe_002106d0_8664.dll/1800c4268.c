/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800c4268 */

void FUN_1800c4268(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_2 = std::
             _Func_impl_no_alloc<`void___cdecl_DrawMessageSafeCall<MessageContainer_V_10000*___ptr64&___ptr64,`void___cdecl_DrawMessage_V_10000_hook(MessageContainer_V_10000*___ptr64,char,double,double)'::`1'::<lambda_23>_>(MessageContainer_V_10000*___ptr64&___ptr64,`void___cdecl_DrawMessage_V_10000_hook(MessageContainer_V_10000*___ptr64,char,double,double)'::`1'::<lambda_23>&&___ptr64)'::`1'::<lambda_1>,void>
             ::vftable;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  param_2[1] = *(undefined8 *)(param_1 + 8);
  param_2[2] = uVar1;
  return;
}

