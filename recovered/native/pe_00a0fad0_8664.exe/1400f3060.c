/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400f3060 */

undefined8 * FUN_1400f3060(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = std::
             time_get<unsigned_short,std::istreambuf_iterator<unsigned_short,std::char_traits<unsigned_short>_>_>
             ::vftable;
  thunk_FUN_1401212e0(param_1[2]);
  thunk_FUN_1401212e0(param_1[3]);
  thunk_FUN_1401212e0(param_1[4]);
  *param_1 = std::_Facet_base::vftable;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400ddcd0(param_1,0x58);
  }
  return param_1;
}

