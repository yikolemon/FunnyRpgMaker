/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800599f8 */

undefined8 *
FUN_1800599f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_180239630(0x28);
  *puVar1 = std::
            _Func_impl_no_alloc<`void___cdecl_AsyncExecuteJsCode(std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const&___ptr64)'::`1'::<lambda_0>,void>
            ::vftable;
  FUN_180003216(puVar1 + 1,param_1,param_3,param_4,puVar1 + 1);
  return puVar1;
}

