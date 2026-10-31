/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180118405 */

char * FUN_180118405(uint param_1)

{
  uint uVar1;
  uint uVar2;
  
  if (param_1 == 0) {
    return "None";
  }
  uVar2 = param_1;
  if (((param_1 & 0xf000) != 0) && ((param_1 - 1 & param_1) == 0)) {
    uVar1 = 0;
    if (param_1 != 0) {
      for (; (param_1 >> uVar1 & 1) == 0; uVar1 = uVar1 + 1) {
      }
    }
    uVar2 = uVar1 + 0x28b;
    if ((uVar1 & 0x1c) != 0xc) {
      uVar2 = param_1;
    }
  }
  if (0x9a < uVar2 - 0x200) {
    return "Unknown";
  }
  return *(char **)(&std::
                     _Func_impl_no_alloc<`public:_<auto>___cdecl_`public:_virtual_void___cdecl_WolfRpgGameUI::on_window_tab_new(void)___ptr64'::`1'::<lambda_4>::operator()(void)const___ptr64'::`1'::<lambda_1>,void>
                     ::RTTI_Complete_Object_Locator.signature + (ulonglong)uVar2 * 2);
}

