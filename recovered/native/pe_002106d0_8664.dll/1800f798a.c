/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800f798a */

undefined8 *
FUN_1800f798a(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  
  *param_1 = BS::move_only_function<void___cdecl(void)>::
             func_model<`public:___cdecl_BS::task_and_future<void>::task_and_future<void><`public:_<auto>___cdecl_`public:_virtual_void___cdecl_WolfRpgGameUI::on_window_tab_new(void)___ptr64'::`1'::<lambda_4>::operator()(void)const___ptr64'::`1'::<lambda_4>,void>(`public:_<auto>___cdecl_`public:_virtual_void___cdecl_WolfRpgGameUI::on_window_tab_new(void)___ptr64'::`1'::<lambda_4>::operator()(void)const___ptr64'::`1'::<lambda_4>&&___ptr64)___ptr64'::`1'::<lambda_1>_>
             ::vftable;
  uVar8 = param_2[1];
  param_1[1] = *param_2;
  param_1[2] = uVar8;
  param_1[3] = param_2[2];
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  uVar1 = *(undefined4 *)(param_2 + 3);
  uVar2 = *(undefined4 *)((longlong)param_2 + 0x1c);
  uVar3 = *(undefined4 *)(param_2 + 4);
  uVar4 = *(undefined4 *)((longlong)param_2 + 0x24);
  uVar5 = *(undefined4 *)((longlong)param_2 + 0x2c);
  uVar6 = *(undefined4 *)(param_2 + 6);
  uVar7 = *(undefined4 *)((longlong)param_2 + 0x34);
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 5);
  *(undefined4 *)((longlong)param_1 + 0x34) = uVar5;
  *(undefined4 *)(param_1 + 7) = uVar6;
  *(undefined4 *)((longlong)param_1 + 0x3c) = uVar7;
  *(undefined4 *)(param_1 + 4) = uVar1;
  *(undefined4 *)((longlong)param_1 + 0x24) = uVar2;
  *(undefined4 *)(param_1 + 5) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x2c) = uVar4;
  param_2[5] = 0;
  param_2[6] = 0xf;
  *(undefined1 *)(param_2 + 3) = 0;
  FUN_1800f6a96(param_1 + 8,param_2 + 7,param_3,param_4,param_1 + 8,param_1 + 1,0xfffffffffffffffe);
  return param_1;
}

