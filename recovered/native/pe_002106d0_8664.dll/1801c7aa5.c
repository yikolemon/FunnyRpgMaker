/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801c7aa5 */

void FUN_1801c7aa5(void)

{
  longlong *plVar1;
  int iVar2;
  undefined8 uVar3;
  undefined **local_80;
  longlong local_78;
  undefined ***local_48;
  undefined1 local_40 [16];
  longlong local_30;
  undefined ***local_28;
  undefined8 local_20;
  
  plVar1 = DAT_180420d38;
  local_20 = 0xfffffffffffffffe;
  if (DAT_180420d40 == 0) {
    local_30 = 0;
    uVar3 = FUN_1800188ac(&local_30);
    iVar2 = (**(code **)(*plVar1 + 0x48))(plVar1,0,&DAT_180329500,uVar3);
    if (local_30 != 0 && -1 < iVar2) {
      local_48 = &local_80;
      local_80 = std::
                 _Func_impl_no_alloc<`void___cdecl_Dx11::CreateRenderTarget(void)'::`1'::<lambda_0>,void>
                 ::vftable;
      local_78 = local_30;
      local_28 = local_48;
      FUN_18006a75c(local_40,&local_80);
      if (local_48 != (undefined ***)0x0) {
        (*(code *)(*local_48)[4])(local_48,local_48 != &local_80);
      }
      (**(code **)(*DAT_180420d28 + 0x48))(DAT_180420d28,local_30,0,&DAT_180420d40);
      FUN_18006b556(local_40);
    }
  }
  return;
}

