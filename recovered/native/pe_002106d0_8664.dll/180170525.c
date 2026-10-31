/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180170525 */

void FUN_180170525(void)

{
  undefined **local_58 [7];
  undefined ***local_20;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  FUN_180044980(&DAT_1804193d8);
  if (DAT_180419430 == DAT_180419438) {
    local_20 = local_58;
    local_58[0] = std::
                  _Func_impl_no_alloc<`void___cdecl_RpgMakerUpdateMapTree(void)'::`1'::<lambda_1>,void>
                  ::vftable;
    FUN_18001405b(local_58);
    if (local_20 != (undefined ***)0x0) {
      (*(code *)(*local_20)[4])(local_20,local_20 != local_58);
    }
  }
  if (DAT_180419450 == DAT_180419458) {
    local_20 = local_58;
    local_58[0] = std::
                  _Func_impl_no_alloc<`void___cdecl_RpgMakerUpdateMapTree(void)'::`1'::<lambda_2>,void>
                  ::vftable;
    FUN_18001405b(local_58);
    if (local_20 != (undefined ***)0x0) {
      (*(code *)(*local_20)[4])(local_20,local_20 != local_58);
    }
  }
  local_20 = local_58;
  local_58[0] = std::
                _Func_impl_no_alloc<`void___cdecl_RpgMakerUpdateMapTree(void)'::`1'::<lambda_3>,void>
                ::vftable;
  FUN_18001405b(local_58);
  if (local_20 != (undefined ***)0x0) {
    (*(code *)(*local_20)[4])(local_20,local_20 != local_58);
  }
  FUN_18023d6e0(&DAT_1804193d8);
  return;
}

