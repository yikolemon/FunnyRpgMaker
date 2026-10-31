/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14005d0ba */

undefined8 * FUN_14005d0ba(undefined8 *param_1,uint param_2)

{
  *param_1 = std::collate<wchar_t>::vftable;
  thunk_FUN_1401aea30(param_1[3]);
  if ((param_2 & 1) != 0) {
    thunk_FUN_14018e090(param_1,0x20);
  }
  return param_1;
}

