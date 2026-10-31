/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100ef7d0 */

undefined4 * __thiscall FUN_100ef7d0(undefined4 *param_1,undefined8 *param_2)

{
  char cVar1;
  undefined4 *local_1c;
  undefined1 *local_18;
  void *local_14;
  undefined1 *local_10;
  undefined4 local_c;
  
  local_18 = (undefined1 *)&local_1c;
  local_10 = &LAB_100f52b0;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  param_1[9] = 0;
  local_c = 0;
  local_1c = param_1;
  cVar1 = FUN_10075278(param_2);
  if (cVar1 != '\0') {
    *local_1c = std::
                _Func_impl_no_alloc<`public:_<auto>___thiscall_`public:_virtual_void___thiscall_WolfRpgGameUI::on_window_tab_new(void)'::`1'::<lambda_4>::operator()(void)const_'::`1'::<lambda_3>,void>
                ::vftable;
    *(undefined8 *)(local_1c + 1) = *param_2;
    local_1c[3] = *(undefined4 *)(param_2 + 1);
    local_1c[9] = local_1c;
  }
  ExceptionList = local_14;
  return local_1c;
}

