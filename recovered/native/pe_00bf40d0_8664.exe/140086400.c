/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140086400 */

undefined8 * FUN_140086400(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = type_info::vftable;
  if ((param_2 & 1) != 0) {
    FUN_1400863f0();
  }
  return param_1;
}

