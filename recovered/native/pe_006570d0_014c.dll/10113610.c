/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10113610 */

char * FUN_10113610(uint param_1)

{
  uint uVar1;
  char *pcVar2;
  
  if (param_1 != 0) {
    if (((param_1 & 0xf000) != 0) && ((param_1 - 1 & param_1) == 0)) {
      uVar1 = 0;
      if (param_1 != 0) {
        for (; (param_1 >> uVar1 & 1) == 0; uVar1 = uVar1 + 1) {
        }
      }
      if ((uVar1 & 0x1c) == 0xc) {
        param_1 = uVar1 + 0x28b;
      }
    }
    pcVar2 = "Unknown";
    if (param_1 - 0x200 < 0x9b) {
      pcVar2 = (&std::
                 _Func_impl_no_alloc<`public:_<auto>___thiscall_`public:_<auto>___thiscall_`public:_virtual_void___thiscall_WolfRpgGameUI::on_window_tab_new(void)'::`1'::<lambda_4>::operator()(void)const_'::`1'::<lambda_4>::operator()(void)const_'::`1'::<lambda_1>,void>
                 ::vftable_meta_ptr)[param_1];
    }
    return pcVar2;
  }
  return "None";
}

