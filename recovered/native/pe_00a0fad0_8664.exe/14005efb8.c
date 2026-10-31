/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14005efb8 */

undefined8 * FUN_14005efb8(undefined8 *param_1,uint param_2)

{
  *param_1 = std::numpunct<wchar_t>::vftable;
  FUN_140024b5a();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400ddcd0(param_1,0x30);
  }
  return param_1;
}

