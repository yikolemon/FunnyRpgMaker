/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100ba048 */

undefined4 * __fastcall FUN_100ba048(undefined4 *param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined1 local_30 [20];
  undefined1 *local_1c;
  void *local_18;
  undefined1 *local_14;
  undefined4 local_10;
  
  local_1c = local_30;
  local_10 = 0xffffffff;
  local_14 = &LAB_100c1d00;
  local_18 = ExceptionList;
  ExceptionList = &local_18;
  puVar3 = (undefined4 *)FUN_10228350(0x28);
  *puVar3 = std::
            _Func_impl_no_alloc<`class_std::function<void___cdecl(void)>___cdecl_SetEventCommand<std::vector<EventCommand_V_10000,WolfAllocator_V_10000<EventCommand_V_10000>_>_>(int,std::vector<EventCommand_V_10000,WolfAllocator_V_10000<EventCommand_V_10000>_>**,EventCommandView_const&)'::`1'::<lambda_1>,void>
            ::vftable;
  puVar3[1] = *param_1;
  uVar2 = param_1[4];
  param_1[4] = 0;
  puVar3[2] = param_1[1];
  uVar1 = *(undefined8 *)(param_1 + 2);
  param_1[3] = 0;
  param_1[2] = 0;
  *(undefined8 *)(puVar3 + 3) = uVar1;
  puVar3[5] = uVar2;
  uVar2 = param_1[8];
  param_1[8] = 0;
  puVar3[6] = param_1[5];
  uVar1 = *(undefined8 *)(param_1 + 6);
  param_1[7] = 0;
  param_1[6] = 0;
  *(undefined8 *)(puVar3 + 7) = uVar1;
  puVar3[9] = uVar2;
  ExceptionList = local_18;
  return puVar3;
}

