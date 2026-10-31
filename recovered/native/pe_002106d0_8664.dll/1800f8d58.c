/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800f8d58 */

void FUN_1800f8d58(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *param_2 = std::
             _Func_impl_no_alloc<`public:_<auto>___cdecl_`public:_<auto>___cdecl_`public:_virtual_void___cdecl_WolfRpgGameUI::on_window_tab_new(void)___ptr64'::`1'::<lambda_4>::operator()(void)const___ptr64'::`1'::<lambda_4>::operator()(void)const___ptr64'::`1'::<lambda_1>,void>
             ::vftable;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  param_2[1] = *(undefined8 *)(param_1 + 8);
  param_2[2] = uVar1;
  param_2[3] = uVar2;
  param_2[4] = uVar3;
  param_2[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}

