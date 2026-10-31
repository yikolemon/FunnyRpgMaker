/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1015e628 */

undefined4 * __fastcall FUN_1015e628(undefined4 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  
  *param_1 = std::
             _Func_impl_no_alloc<`public:_<auto>___thiscall_`void___cdecl_RpgMakerLoadRawText(void)'::`1'::<lambda_0>::operator()(void)const_'::`1'::<lambda_1>,void>
             ::vftable;
  uVar2 = *(undefined4 *)(param_2 + 1);
  *(undefined4 *)(param_2 + 1) = 0;
  uVar1 = *param_2;
  *(undefined4 *)((int)param_2 + 4) = 0;
  *(undefined4 *)param_2 = 0;
  *(undefined8 *)(param_1 + 1) = uVar1;
  param_1[3] = uVar2;
  return param_1;
}

