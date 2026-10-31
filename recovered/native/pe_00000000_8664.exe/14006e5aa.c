/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14006e5aa */

undefined8 * FUN_14006e5aa(undefined8 *param_1,undefined8 param_2)

{
  char cVar1;
  
  param_1[7] = 0;
  cVar1 = FUN_14001570a(param_2);
  if (cVar1 != '\0') {
    *param_1 = std::_Func_impl_no_alloc<void_(__cdecl*)(void),void>::vftable;
    param_1[1] = param_2;
    param_1[7] = param_1;
  }
  return param_1;
}

