/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140188810 */

undefined8 * FUN_140188810(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = type_info::vftable;
  if ((param_2 & 1) != 0) {
    thunk_FUN_14018e090(param_1,0x18);
  }
  return param_1;
}

