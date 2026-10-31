/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1005861a */

undefined4 * __fastcall FUN_1005861a(undefined4 param_1)

{
  undefined4 *local_2c;
  undefined4 *local_28;
  undefined4 *local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_2c;
  local_14 = 0xffffffff;
  local_18 = &LAB_10058e30;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  local_28 = (undefined4 *)FUN_10228350(0x1c);
  local_14 = 0;
  *local_28 = std::
              _Func_impl_no_alloc<`void___cdecl_AsyncExecuteJsCode(std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const&)'::`1'::<lambda_0>,void>
              ::vftable;
  local_2c = local_28 + 1;
  local_24 = local_28;
  FUN_1000334a(param_1);
  ExceptionList = local_1c;
  return local_28;
}

