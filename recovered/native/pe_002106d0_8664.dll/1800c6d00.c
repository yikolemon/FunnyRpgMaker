/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800c6d00 */

void FUN_1800c6d00(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_2 = std::
             _Func_impl_no_alloc<`void___cdecl_WolfRequestLoadMap(int,int,int)'::`1'::<lambda_7>,void>
             ::vftable;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  param_2[1] = *(undefined8 *)(param_1 + 8);
  param_2[2] = uVar1;
  param_2[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}

