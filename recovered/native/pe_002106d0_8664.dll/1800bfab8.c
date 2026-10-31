/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800bfab8 */

undefined8 * FUN_1800bfab8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  puVar4 = (undefined8 *)FUN_180239630(0x50);
  *puVar4 = std::
            _Func_impl_no_alloc<`class_std::function<void___cdecl(void)>___cdecl_SetEventCommand<std::vector<EventCommand_V_10000,WolfAllocator_V_10000<EventCommand_V_10000>_>_>(int,std::vector<EventCommand_V_10000,WolfAllocator_V_10000<EventCommand_V_10000>_>*___ptr64*___ptr64,EventCommandView_const&___ptr64)'::`1'::<lambda_1>,void>
            ::vftable;
  puVar4[1] = *param_1;
  uVar1 = param_1[4];
  param_1[4] = 0;
  puVar4[2] = param_1[1];
  uVar2 = param_1[2];
  uVar3 = param_1[3];
  param_1[2] = 0;
  param_1[3] = 0;
  puVar4[3] = uVar2;
  puVar4[4] = uVar3;
  puVar4[5] = uVar1;
  uVar1 = param_1[8];
  param_1[8] = 0;
  puVar4[6] = param_1[5];
  uVar2 = param_1[6];
  uVar3 = param_1[7];
  param_1[6] = 0;
  param_1[7] = 0;
  puVar4[7] = uVar2;
  puVar4[8] = uVar3;
  puVar4[9] = uVar1;
  return puVar4;
}

