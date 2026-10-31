/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100f4a82 */

void __thiscall FUN_100f4a82(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  *param_2 = std::
             _Func_impl_no_alloc<`public:_<auto>___thiscall_`public:_<auto>___thiscall_`public:_virtual_void___thiscall_WolfRpgGameUI::on_window_tab_new(void)'::`1'::<lambda_4>::operator()(void)const_'::`1'::<lambda_4>::operator()(void)const_'::`1'::<lambda_3>,void>
             ::vftable;
  uVar1 = *(undefined4 *)(param_1 + 8);
  uVar2 = *(undefined4 *)(param_1 + 0xc);
  uVar3 = *(undefined4 *)(param_1 + 0x10);
  param_2[1] = *(undefined4 *)(param_1 + 4);
  param_2[2] = uVar1;
  param_2[3] = uVar2;
  param_2[4] = uVar3;
  *(undefined8 *)(param_2 + 5) = *(undefined8 *)(param_1 + 0x14);
  return;
}

