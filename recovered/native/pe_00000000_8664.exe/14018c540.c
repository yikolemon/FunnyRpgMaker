/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14018c540 */

undefined8 * FUN_14018c540(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = std::_Facet_base::vftable;
  if ((param_2 & 1) != 0) {
    thunk_FUN_14018e090(param_1,0x40);
  }
  return param_1;
}

