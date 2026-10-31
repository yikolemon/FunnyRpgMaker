/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800f8b72 */

undefined8 * FUN_1800f8b72(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char cVar4;
  
  param_1[7] = 0;
  cVar4 = FUN_180075a66(param_2);
  if (cVar4 != '\0') {
    *param_1 = std::
               _Func_impl_no_alloc<`public:_<auto>___cdecl_`public:_<auto>___cdecl_`public:_virtual_void___cdecl_WolfRpgGameUI::on_window_tab_new(void)___ptr64'::`1'::<lambda_4>::operator()(void)const___ptr64'::`1'::<lambda_4>::operator()(void)const___ptr64'::`1'::<lambda_1>,void>
               ::vftable;
    uVar1 = param_2[1];
    uVar2 = param_2[2];
    uVar3 = param_2[3];
    param_1[1] = *param_2;
    param_1[2] = uVar1;
    param_1[3] = uVar2;
    param_1[4] = uVar3;
    param_1[5] = param_2[4];
    param_1[7] = param_1;
  }
  return param_1;
}

