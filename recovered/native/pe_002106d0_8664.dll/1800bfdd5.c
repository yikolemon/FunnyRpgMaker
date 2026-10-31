/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800bfdd5 */

undefined8 * FUN_1800bfdd5(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  uVar3 = 0xfffffffffffffffe;
  puVar1 = (undefined8 *)FUN_180239630(0x50);
  *puVar1 = std::
            _Func_impl_no_alloc<`class_std::function<void___cdecl(void)>___cdecl_SetEventCommand<std::vector<EventCommand_V_10000,WolfAllocator_V_10000<EventCommand_V_10000>_>_>(int,std::vector<EventCommand_V_10000,WolfAllocator_V_10000<EventCommand_V_10000>_>*___ptr64*___ptr64,EventCommandView_const&___ptr64)'::`1'::<lambda_1>,void>
            ::vftable;
  puVar1[1] = *param_1;
  puVar1[2] = param_1[1];
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar2 = puVar1;
  FUN_1800bf0a6(puVar1 + 2,(longlong)(param_1[3] - param_1[2]) >> 2,param_1 + 2,param_1 + 3);
  puVar2[6] = param_1[5];
  puVar2[7] = 0;
  puVar2[8] = 0;
  puVar2[9] = 0;
  FUN_1800bf190(puVar2 + 6,((longlong)(param_1[7] - param_1[6]) >> 3) * -0x3333333333333333,
                param_1 + 6,param_1 + 7,puVar2 + 6,puVar2 + 3,puVar1,puVar2,uVar3);
  return puVar2;
}

