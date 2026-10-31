/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1015e6c6 */

undefined4 * __thiscall FUN_1015e6c6(int param_1,undefined4 *param_2)

{
  undefined4 *local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_24;
  local_14 = 0xffffffff;
  local_18 = &LAB_1015f5c0;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  *param_2 = std::
             _Func_impl_no_alloc<`public:_<auto>___thiscall_`void___cdecl_RpgMakerLoadRawText(void)'::`1'::<lambda_0>::operator()(void)const_'::`1'::<lambda_1>,void>
             ::vftable;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  local_24 = param_2 + 1;
  FUN_10061af0(*(int *)(param_1 + 8) - *(int *)(param_1 + 4) >> 2,param_1 + 4,param_1 + 8);
  ExceptionList = local_1c;
  return param_2;
}

