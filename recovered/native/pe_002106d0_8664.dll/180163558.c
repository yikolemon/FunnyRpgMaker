/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180163558 */

undefined8 * FUN_180163558(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *param_1 = std::
             _Func_impl_no_alloc<`public:_<auto>___cdecl_`void___cdecl_RpgMakerLoadRawText(void)'::`1'::<lambda_0>::operator()(void)const___ptr64'::`1'::<lambda_1>,void>
             ::vftable;
  uVar1 = param_2[2];
  param_2[2] = 0;
  uVar2 = *param_2;
  uVar3 = param_2[1];
  *param_2 = 0;
  param_2[1] = 0;
  param_1[1] = uVar2;
  param_1[2] = uVar3;
  param_1[3] = uVar1;
  return param_1;
}

