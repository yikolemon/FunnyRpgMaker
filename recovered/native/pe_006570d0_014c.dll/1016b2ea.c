/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1016b2ea */

void FUN_1016b2ea(void)

{
  undefined1 auStack_60 [4];
  undefined ***local_5c;
  undefined ***local_58;
  undefined ***local_54;
  undefined **local_50 [9];
  undefined ***local_2c;
  undefined1 *local_28;
  undefined1 *local_24;
  void *local_20;
  undefined1 *local_1c;
  undefined4 local_18;
  
  local_28 = &stack0xfffffffc;
  local_24 = auStack_60;
  local_18 = 0xffffffff;
  local_1c = &LAB_101800f0;
  local_20 = ExceptionList;
  ExceptionList = &local_20;
  FUN_100446d6();
  if (DAT_1039d8e8 == DAT_1039d8ec) {
    local_5c = local_50;
    local_50[0] = std::
                  _Func_impl_no_alloc<`void___cdecl_RpgMakerUpdateMapTree(void)'::`1'::<lambda_1>,void>
                  ::vftable;
    local_18 = 6;
    local_2c = local_5c;
    FUN_100148b1(local_50);
    local_18 = 0xffffffff;
    if (local_2c != (undefined ***)0x0) {
      (*(code *)(*local_2c)[4])(local_2c != local_50);
    }
  }
  if (DAT_1039d8f8 == DAT_1039d8fc) {
    local_58 = local_50;
    local_50[0] = std::
                  _Func_impl_no_alloc<`void___cdecl_RpgMakerUpdateMapTree(void)'::`1'::<lambda_2>,void>
                  ::vftable;
    local_18 = 5;
    local_2c = local_58;
    FUN_100148b1(local_50);
    local_18 = 0xffffffff;
    if (local_2c != (undefined ***)0x0) {
      (*(code *)(*local_2c)[4])(local_2c != local_50);
    }
  }
  local_54 = local_50;
  local_50[0] = std::
                _Func_impl_no_alloc<`void___cdecl_RpgMakerUpdateMapTree(void)'::`1'::<lambda_3>,void>
                ::vftable;
  local_18 = 4;
  local_2c = local_54;
  FUN_100148b1(local_50);
  local_18 = 0xffffffff;
  if (local_2c != (undefined ***)0x0) {
    (*(code *)(*local_2c)[4])(local_2c != local_50);
  }
  FUN_1022c200(&DAT_1039d8b4);
  ExceptionList = local_20;
  return;
}

