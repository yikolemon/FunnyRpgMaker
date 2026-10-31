/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800f514a */

undefined8 * FUN_1800f514a(undefined8 *param_1,undefined1 *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_180239630(0x10);
  *puVar1 = BS::move_only_function<void___cdecl(unsigned___int64)>::
            func_model<`private:_void___cdecl_BS::thread_pool<0>::create_threads<`public:___cdecl_BS::thread_pool<0>::thread_pool<0>(void)___ptr64'::`1'::<lambda_1>_>(unsigned___int64,`public:___cdecl_BS::thread_pool<0>::thread_pool<0>(void)___ptr64'::`1'::<lambda_1>&&___ptr64)___ptr64'::`1'::<lambda_1>_>
            ::vftable;
  *(undefined1 *)(puVar1 + 1) = *param_2;
  *param_1 = puVar1;
  return param_1;
}

