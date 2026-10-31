/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100f3440 */

undefined4 * __thiscall FUN_100f3440(undefined4 *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *local_20;
  undefined4 *local_1c;
  undefined1 *local_18;
  void *local_14;
  undefined1 *local_10;
  undefined4 local_c;
  
  local_18 = (undefined1 *)&local_20;
  local_10 = &LAB_100f5680;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  *param_1 = BS::move_only_function<void___cdecl(void)>::
             func_model<`public:___thiscall_BS::task_and_future<void>::task_and_future<void><`public:_<auto>___thiscall_`public:_virtual_void___thiscall_WolfRpgGameUI::on_window_tab_new(void)'::`1'::<lambda_4>::operator()(void)const_'::`1'::<lambda_4>,void>(`public:_<auto>___thiscall_`public:_virtual_void___thiscall_WolfRpgGameUI::on_window_tab_new(void)'::`1'::<lambda_4>::operator()(void)const_'::`1'::<lambda_4>&&)'::`1'::<lambda_1>_>
             ::vftable;
  *(undefined8 *)(param_1 + 1) = *param_2;
  param_1[3] = *(undefined4 *)(param_2 + 1);
  *(undefined8 *)(param_1 + 8) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)((int)param_2 + 0x1c);
  uVar1 = *(undefined4 *)(param_2 + 2);
  uVar2 = *(undefined4 *)((int)param_2 + 0x14);
  uVar3 = *(undefined4 *)(param_2 + 3);
  param_1[4] = *(undefined4 *)((int)param_2 + 0xc);
  param_1[5] = uVar1;
  param_1[6] = uVar2;
  param_1[7] = uVar3;
  *(undefined4 *)((int)param_2 + 0x1c) = 0;
  *(undefined4 *)(param_2 + 4) = 0xf;
  *(undefined1 *)((int)param_2 + 0xc) = 0;
  local_1c = param_1 + 1;
  local_c = 1;
  local_20 = param_1 + 10;
  FUN_100f233e((int)param_2 + 0x24);
  ExceptionList = local_14;
  return param_1;
}

