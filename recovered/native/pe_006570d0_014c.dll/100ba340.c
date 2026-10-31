/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100ba340 */

undefined4 * __fastcall FUN_100ba340(undefined4 *param_1)

{
  int *piVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *local_2c;
  undefined4 *local_28;
  undefined4 *local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_2c;
  local_14 = 0xffffffff;
  local_18 = &LAB_100c1d20;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  local_2c = (undefined4 *)FUN_10228350(0x28);
  local_14 = 0;
  *local_2c = std::
              _Func_impl_no_alloc<`class_std::function<void___cdecl(void)>___cdecl_SetEventCommand<std::vector<EventCommand_V_10000,WolfAllocator_V_10000<EventCommand_V_10000>_>_>(int,std::vector<EventCommand_V_10000,WolfAllocator_V_10000<EventCommand_V_10000>_>**,EventCommandView_const&)'::`1'::<lambda_1>,void>
              ::vftable;
  local_2c[1] = *param_1;
  local_2c[2] = param_1[1];
  local_2c[3] = 0;
  local_2c[4] = 0;
  local_2c[5] = 0;
  local_28 = param_1;
  local_24 = local_2c;
  FUN_100b9686((int)(param_1[3] - param_1[2]) >> 2,param_1 + 2,param_1 + 3);
  local_14 = 2;
  local_24[6] = local_28[5];
  local_24[7] = 0;
  local_24[8] = 0;
  local_24[9] = 0;
  piVar1 = local_28 + 7;
  piVar2 = local_28 + 6;
  puVar3 = local_28 + 6;
  puVar4 = local_28 + 7;
  local_28 = local_24 + 6;
  FUN_100b9782((*piVar1 - *piVar2 >> 2) * -0x49249249,puVar3,puVar4);
  ExceptionList = local_1c;
  return local_24;
}

