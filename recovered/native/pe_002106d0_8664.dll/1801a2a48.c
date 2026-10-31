/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801a2a48 */

byte FUN_1801a2a48(longlong param_1)

{
  byte bVar1;
  byte bVar2;
  longlong lVar3;
  undefined **local_78;
  longlong local_70;
  undefined ***local_40;
  undefined1 local_38 [16];
  undefined ***local_28;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  if ((param_1 != 0) &&
     (DAT_18041f1a0 = param_1, lVar3 = FUN_18019fbf4(DefWindowProcW_exref), lVar3 != 0)) {
    local_40 = &local_78;
    local_78 = std::
               _Func_impl_no_alloc<`bool___cdecl_StartImGuiHookWindow(void_(__cdecl*)(void))'::`1'::<lambda_0>,void>
               ::vftable;
    local_70 = lVar3;
    local_28 = local_40;
    FUN_18006a75c(local_38,&local_78);
    if (local_40 != (undefined ***)0x0) {
      (*(code *)(*local_40)[4])(local_40,local_40 != &local_78);
    }
    bVar1 = FUN_1801a2b96(lVar3);
    bVar2 = FUN_1801a2c5e(lVar3);
    FUN_18006b556(local_38);
    return bVar1 & bVar2;
  }
  return 0;
}

