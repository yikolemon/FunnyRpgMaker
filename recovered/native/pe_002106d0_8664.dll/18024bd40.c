/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18024bd40 */

undefined8 * FUN_18024bd40(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = std::time_put<wchar_t,std::ostreambuf_iterator<wchar_t,std::char_traits<wchar_t>_>_>::
             vftable;
  thunk_FUN_180290e40(param_1[2]);
  *param_1 = std::_Facet_base::vftable;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1802464a0(param_1,0x18);
  }
  return param_1;
}

