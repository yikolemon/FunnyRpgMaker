/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10243ca0 */

undefined4 * __thiscall FUN_10243ca0(undefined4 *param_1,byte param_2)

{
  *param_1 = std::collate<unsigned_short>::vftable;
  thunk_FUN_10274120(param_1[3]);
  *param_1 = std::_Facet_base::vftable;
  if ((param_2 & 1) != 0) {
    FUN_102283a0(param_1,0x10);
  }
  return param_1;
}

