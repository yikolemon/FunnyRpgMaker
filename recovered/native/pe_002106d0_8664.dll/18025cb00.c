/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18025cb00 */

undefined8 * FUN_18025cb00(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = std::
             time_get<unsigned_short,std::istreambuf_iterator<unsigned_short,std::char_traits<unsigned_short>_>_>
             ::vftable;
  thunk_FUN_180290e40(param_1[2]);
  thunk_FUN_180290e40(param_1[3]);
  thunk_FUN_180290e40(param_1[4]);
  *param_1 = std::_Facet_base::vftable;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1802464a0(param_1,0x58);
  }
  return param_1;
}

