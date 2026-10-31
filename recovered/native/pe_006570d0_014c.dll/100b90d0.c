/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100b90d0 */

undefined4 * __thiscall FUN_100b90d0(int param_1,undefined4 *param_2)

{
  undefined4 *local_28;
  undefined4 *local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_28;
  local_14 = 0xffffffff;
  local_18 = &LAB_100c1cd0;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  *param_2 = std::
             _Func_impl_no_alloc<`class_std::function<void___cdecl(void)>___cdecl_SetEventCommand<std::vector<EventCommand_V_30000,WolfAllocator_V_30000<EventCommand_V_30000>_>_>(int,std::vector<EventCommand_V_30000,WolfAllocator_V_30000<EventCommand_V_30000>_>**,EventCommandView_const&)'::`1'::<lambda_1>,void>
             ::vftable;
  param_2[1] = *(undefined4 *)(param_1 + 4);
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  local_24 = param_2 + 2;
  FUN_100b7d76(*(int *)(param_1 + 0xc) - *(int *)(param_1 + 8) >> 2,param_1 + 8,param_1 + 0xc);
  local_14 = 0;
  local_28 = param_2 + 5;
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  FUN_100b7e6e((*(int *)(param_1 + 0x18) - *(int *)(param_1 + 0x14) >> 3) * -0x55555555,
               param_1 + 0x14,param_1 + 0x18);
  ExceptionList = local_1c;
  return param_2;
}

