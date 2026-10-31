/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10239320 */

undefined4 * __thiscall FUN_10239320(undefined4 *param_1,byte param_2)

{
  *param_1 = std::ctype<unsigned_short>::vftable;
  if (param_1[4] != 0) {
    thunk_FUN_10274120(param_1[3]);
  }
  thunk_FUN_10274120(param_1[5]);
  *param_1 = std::_Facet_base::vftable;
  if ((param_2 & 1) != 0) {
    FUN_102283a0(param_1,0x44);
  }
  return param_1;
}

