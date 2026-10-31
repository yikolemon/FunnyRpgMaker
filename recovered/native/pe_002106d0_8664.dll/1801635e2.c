/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801635e2 */

undefined8 * FUN_1801635e2(longlong param_1,undefined8 *param_2)

{
  *param_2 = std::
             _Func_impl_no_alloc<`public:_<auto>___cdecl_`void___cdecl_RpgMakerLoadRawText(void)'::`1'::<lambda_0>::operator()(void)const___ptr64'::`1'::<lambda_1>,void>
             ::vftable;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  FUN_18009c334(param_2 + 1,*(longlong *)(param_1 + 0x10) - *(longlong *)(param_1 + 8) >> 2,
                param_1 + 8,param_1 + 0x10);
  return param_2;
}

