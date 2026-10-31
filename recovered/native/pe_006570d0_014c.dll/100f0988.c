/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100f0988 */

undefined4 * __thiscall FUN_100f0988(undefined4 *param_1,undefined1 *param_2)

{
  undefined4 *puVar1;
  undefined1 local_24 [8];
  undefined1 *local_1c;
  void *local_18;
  undefined1 *local_14;
  undefined4 local_10;
  
  local_1c = local_24;
  local_10 = 0xffffffff;
  local_14 = &LAB_100f53b0;
  local_18 = ExceptionList;
  ExceptionList = &local_18;
  puVar1 = (undefined4 *)FUN_10228350(8);
  *puVar1 = BS::move_only_function<void___cdecl(unsigned_int)>::
            func_model<`private:_void___thiscall_BS::thread_pool<0>::create_threads<`public:___thiscall_BS::thread_pool<0>::thread_pool<0>(void)'::`1'::<lambda_1>_>(unsigned_int,`public:___thiscall_BS::thread_pool<0>::thread_pool<0>(void)'::`1'::<lambda_1>&&)'::`1'::<lambda_1>_>
            ::vftable;
  *(undefined1 *)(puVar1 + 1) = *param_2;
  *param_1 = puVar1;
  ExceptionList = local_18;
  return param_1;
}

