/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140096bf2 */

undefined8 * FUN_140096bf2(undefined8 *param_1,uint param_2)

{
  *param_1 = std::_Node_str<wchar_t>::vftable;
  thunk_FUN_1401212e0(param_1[5]);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400ddcd0(param_1,0x30);
  }
  return param_1;
}

