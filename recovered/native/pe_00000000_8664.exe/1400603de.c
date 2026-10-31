/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400603de */

undefined8 * FUN_1400603de(undefined8 *param_1,uint param_2)

{
  *param_1 = std::_Node_str<wchar_t>::vftable;
  thunk_FUN_1401aea30(param_1[5]);
  if ((param_2 & 1) != 0) {
    thunk_FUN_14018e090(param_1,0x30);
  }
  return param_1;
}

