/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400939f2 */

undefined8 * FUN_1400939f2(undefined8 *param_1,uint param_2)

{
  *param_1 = std::collate<wchar_t>::vftable;
  thunk_FUN_1401212e0(param_1[3]);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400ddcd0(param_1,0x20);
  }
  return param_1;
}

