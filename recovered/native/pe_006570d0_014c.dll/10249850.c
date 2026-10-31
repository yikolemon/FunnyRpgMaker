/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10249850 */

undefined4 * __thiscall FUN_10249850(undefined4 *param_1,byte param_2)

{
  *param_1 = std::
             time_put<unsigned_short,std::ostreambuf_iterator<unsigned_short,std::char_traits<unsigned_short>_>_>
             ::vftable;
  thunk_FUN_10274120(param_1[2]);
  *param_1 = std::_Facet_base::vftable;
  if ((param_2 & 1) != 0) {
    FUN_102283a0(param_1,0xc);
  }
  return param_1;
}

