/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10239370 */

undefined4 * __thiscall FUN_10239370(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 local_c;
  undefined4 *local_8;
  
  puVar1 = param_1 + 2;
  param_1[1] = param_3;
  *param_1 = std::time_put<wchar_t,std::ostreambuf_iterator<wchar_t,std::char_traits<wchar_t>_>_>::
             vftable;
  *puVar1 = 0;
  local_8 = param_1;
  uVar2 = FUN_1025c961();
  if (puVar1 != &local_c) {
    thunk_FUN_10274120(*puVar1);
    *puVar1 = uVar2;
    uVar2 = 0;
  }
  thunk_FUN_10274120(uVar2);
  return param_1;
}

