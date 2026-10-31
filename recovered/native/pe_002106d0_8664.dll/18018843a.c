/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18018843a */

undefined8 * FUN_18018843a(undefined8 *param_1,undefined8 param_2)

{
  char cVar1;
  
  param_1[7] = 0;
  cVar1 = FUN_180075a66(param_2);
  if (cVar1 != '\0') {
    *param_1 = std::_Func_impl_no_alloc<void_(__cdecl*)(void),void>::vftable;
    param_1[1] = param_2;
    param_1[7] = param_1;
  }
  return param_1;
}

