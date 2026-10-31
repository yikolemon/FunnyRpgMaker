/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400ed0d0 */

undefined8 * FUN_1400ed0d0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = std::collate<unsigned_short>::vftable;
  thunk_FUN_1401212e0(param_1[3]);
  *param_1 = std::_Facet_base::vftable;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400ddcd0(param_1,0x20);
  }
  return param_1;
}

