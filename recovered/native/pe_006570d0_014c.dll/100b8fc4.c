/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100b8fc4 */

undefined4 * __fastcall FUN_100b8fc4(undefined4 *param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  
  *param_1 = std::
             _Func_impl_no_alloc<`class_std::function<void___cdecl(void)>___cdecl_SetEventCommand<std::vector<EventCommand_V_30000,WolfAllocator_V_30000<EventCommand_V_30000>_>_>(int,std::vector<EventCommand_V_30000,WolfAllocator_V_30000<EventCommand_V_30000>_>**,EventCommandView_const&)'::`1'::<lambda_1>,void>
             ::vftable;
  param_1[1] = *param_2;
  uVar2 = param_2[3];
  param_2[3] = 0;
  uVar1 = *(undefined8 *)(param_2 + 1);
  param_2[2] = 0;
  param_2[1] = 0;
  *(undefined8 *)(param_1 + 2) = uVar1;
  param_1[4] = uVar2;
  uVar2 = param_2[6];
  param_2[6] = 0;
  uVar1 = *(undefined8 *)(param_2 + 4);
  param_2[5] = 0;
  param_2[4] = 0;
  *(undefined8 *)(param_1 + 5) = uVar1;
  param_1[7] = uVar2;
  return param_1;
}

