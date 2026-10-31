/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1019b34c */

byte FUN_1019b34c(int param_1)

{
  byte bVar1;
  int *unaff_FS_OFFSET;
  undefined1 auStack_68 [4];
  int local_64;
  undefined ***local_60;
  undefined4 local_5c;
  undefined **local_50;
  int local_4c;
  undefined ***local_2c;
  undefined1 *local_28;
  undefined1 *local_24;
  int local_20;
  undefined1 *local_1c;
  undefined4 local_18;
  
  local_28 = &stack0xfffffffc;
  local_24 = auStack_68;
  local_18 = 0xffffffff;
  local_1c = &LAB_1019bb50;
  local_20 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_20;
  if (param_1 == 0) {
    bVar1 = 0;
  }
  else {
    DAT_103a33b8 = param_1;
    local_64 = FUN_101985cc(DefWindowProcW_exref);
    bVar1 = 0;
    if (local_64 != 0) {
      local_60 = &local_50;
      local_50 = std::
                 _Func_impl_no_alloc<`bool___cdecl_StartImGuiHookWindow(void_(__cdecl*)(void))'::`1'::<lambda_0>,void>
                 ::vftable;
      local_18 = 1;
      local_4c = local_64;
      local_2c = local_60;
      FUN_1006a6bc(&local_50);
      local_18 = 0xffffffff;
      if (local_2c != (undefined ***)0x0) {
        (*(code *)(*local_2c)[4])(local_2c != &local_50);
      }
      local_18 = 2;
      local_5c = FUN_1019b4b1();
      bVar1 = FUN_1019b580();
      local_18 = 0xffffffff;
      bVar1 = (byte)local_5c & bVar1;
      FUN_1006b59e();
    }
  }
  *unaff_FS_OFFSET = local_20;
  return bVar1;
}

