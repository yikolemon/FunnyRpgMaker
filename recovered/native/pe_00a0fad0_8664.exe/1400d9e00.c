/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400d9e00 */

undefined8 * FUN_1400d9e00(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = std::exception::vftable;
  FUN_140107df0(param_1 + 1);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400ddcd0(param_1,0x18);
  }
  return param_1;
}

