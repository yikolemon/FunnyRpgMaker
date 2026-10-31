/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101574cc */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101574cc(void)

{
  undefined1 *puVar1;
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
  local_1c = &LAB_1015f4f0;
  local_20 = ExceptionList;
  if (DAT_1039d2ec == '\0') {
    DAT_1039d2ec = '\x01';
    DAT_1039d304 = 0;
    puVar1 = &DAT_1039d2f4;
    if (0xf < DAT_1039d308) {
      puVar1 = _DAT_1039d2f4;
    }
    ExceptionList = &local_20;
    *puVar1 = 0;
    DAT_1039d2f0 = 0;
    FUN_1006a522();
    local_54 = local_50;
    local_50[0] = std::
                  _Func_impl_no_alloc<`void___cdecl_RpgMakerLoadRawText(void)'::`1'::<lambda_0>,void>
                  ::vftable;
    local_18 = 1;
    local_2c = local_54;
    FUN_100148b1(local_50);
    local_18 = 0xffffffff;
    if (local_2c != (undefined ***)0x0) {
      (*(code *)(*local_2c)[4])(local_2c != local_50);
    }
  }
  ExceptionList = local_20;
  return;
}

