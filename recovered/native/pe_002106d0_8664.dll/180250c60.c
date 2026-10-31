/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180250c60 */

undefined8 * FUN_180250c60(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = std::_Mpunct<wchar_t>::vftable;
  thunk_FUN_180290e40(param_1[2]);
  thunk_FUN_180290e40(param_1[4]);
  thunk_FUN_180290e40(param_1[5]);
  thunk_FUN_180290e40(param_1[6]);
  *param_1 = std::_Facet_base::vftable;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1802464a0(param_1,0x78);
  }
  return param_1;
}

