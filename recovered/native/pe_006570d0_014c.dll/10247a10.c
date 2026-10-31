/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10247a10 */

undefined4 * __thiscall FUN_10247a10(undefined4 *param_1,byte param_2)

{
  *param_1 = std::_Mpunct<unsigned_short>::vftable;
  thunk_FUN_10274120(param_1[2]);
  thunk_FUN_10274120(param_1[4]);
  thunk_FUN_10274120(param_1[5]);
  thunk_FUN_10274120(param_1[6]);
  *param_1 = std::_Facet_base::vftable;
  if ((param_2 & 1) != 0) {
    FUN_102283a0(param_1,0x58);
  }
  return param_1;
}

