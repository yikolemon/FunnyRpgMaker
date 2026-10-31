/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800f1c6e */

undefined8 * FUN_1800f1c6e(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  char cVar2;
  
  param_1[7] = 0;
  cVar2 = FUN_180075a66(param_2);
  if (cVar2 != '\0') {
    *param_1 = std::
               _Func_impl_no_alloc<`public:_virtual_void___cdecl_WolfRpgGameUI::on_window_tab_new(void)___ptr64'::`1'::<lambda_3>,void>
               ::vftable;
    uVar1 = param_2[1];
    param_1[1] = *param_2;
    param_1[2] = uVar1;
    param_1[7] = param_1;
  }
  return param_1;
}

