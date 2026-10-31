/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14000699a */

void FUN_14000699a(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_2 = std::_Func_impl_no_alloc<`wmain'::`1'::<lambda_0>,void>::vftable;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  param_2[1] = *(undefined8 *)(param_1 + 8);
  param_2[2] = uVar1;
  param_2[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}

