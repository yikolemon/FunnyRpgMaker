/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800bea72 */

undefined8 * FUN_1800bea72(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  uVar4 = 0xfffffffffffffffe;
  puVar1 = (undefined8 *)FUN_180239630(0x40);
  *puVar1 = std::
            _Func_impl_no_alloc<`class_std::function<void___cdecl(void)>___cdecl_SetEventCommand<std::vector<EventCommand_V_30000,WolfAllocator_V_30000<EventCommand_V_30000>_>_>(int,std::vector<EventCommand_V_30000,WolfAllocator_V_30000<EventCommand_V_30000>_>*___ptr64*___ptr64,EventCommandView_const&___ptr64)'::`1'::<lambda_1>,void>
            ::vftable;
  puVar1[1] = *param_1;
  puVar2 = puVar1 + 2;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar3 = puVar1;
  FUN_1800bd52c(puVar2,(longlong)(param_1[2] - param_1[1]) >> 2,param_1 + 1,param_1 + 2);
  puVar3[5] = 0;
  puVar3[6] = 0;
  puVar3[7] = 0;
  FUN_1800bd612(puVar3 + 5,(longlong)(param_1[5] - param_1[4]) >> 5,param_1 + 4,param_1 + 5,
                puVar3 + 5,puVar2,puVar1,puVar3,uVar4);
  return puVar3;
}

