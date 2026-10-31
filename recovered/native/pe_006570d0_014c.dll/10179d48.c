/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10179d48 */

void FUN_10179d48(void)

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
  local_18 = 0xffffffff;
  local_1c = &LAB_10180170;
  local_20 = ExceptionList;
  ExceptionList = &local_20;
  FUN_1016b15d();
  DAT_1039d9d8 = 1;
  local_54 = local_50;
  local_50[0] = std::
                _Func_impl_no_alloc<`void___cdecl_RequestGlobalMapInfo(int)'::`1'::<lambda_0>,void>
                ::vftable;
  local_18 = 1;
  local_2c = local_54;
  FUN_100148b1(local_50);
  local_18 = 0xffffffff;
  if (local_2c != (undefined ***)0x0) {
    (*(code *)(*local_2c)[4])(local_2c != local_50);
  }
  ExceptionList = local_20;
  return;
}

