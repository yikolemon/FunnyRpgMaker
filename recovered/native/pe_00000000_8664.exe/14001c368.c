/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14001c368 */

undefined8 * FUN_14001c368(undefined8 *param_1,uint param_2)

{
  *param_1 = std::numpunct<char>::vftable;
  FUN_14001c340();
  if ((param_2 & 1) != 0) {
    thunk_FUN_14018e090(param_1,0x30);
  }
  return param_1;
}

