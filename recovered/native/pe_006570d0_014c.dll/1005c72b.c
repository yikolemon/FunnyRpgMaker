/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1005c72b */

void FUN_1005c72b(void)

{
  undefined1 auStack_58 [4];
  undefined ***local_54;
  undefined **local_50 [9];
  undefined ***local_2c;
  undefined1 *local_28;
  undefined1 *local_24;
  void *local_20;
  undefined1 *local_1c;
  undefined4 local_18;
  
  local_28 = &stack0xfffffffc;
  local_24 = auStack_58;
  local_1c = &LAB_100c19e0;
  local_20 = ExceptionList;
  local_54 = local_50;
  local_50[0] = std::
                _Func_impl_no_alloc<`void___cdecl_WolfRequestReloadTranslations(void)'::`1'::<lambda_8>,void>
                ::vftable;
  local_18 = 1;
  ExceptionList = &local_20;
  local_2c = local_54;
  FUN_1005c6a3(local_50);
  local_18 = 0xffffffff;
  if (local_2c != (undefined ***)0x0) {
    (*(code *)(*local_2c)[4])(local_2c != local_50);
  }
  ExceptionList = local_20;
  return;
}

