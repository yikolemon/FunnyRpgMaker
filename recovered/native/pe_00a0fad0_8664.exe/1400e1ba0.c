/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400e1ba0 */

undefined8 * FUN_1400e1ba0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = std::ctype<unsigned_short>::vftable;
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1401212e0(param_1[3]);
  }
  thunk_FUN_1401212e0(param_1[5]);
  *param_1 = std::_Facet_base::vftable;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400ddcd0(param_1,0x60);
  }
  return param_1;
}

