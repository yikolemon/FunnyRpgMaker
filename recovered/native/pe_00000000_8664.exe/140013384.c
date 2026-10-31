/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140013384 */

undefined8 * FUN_140013384(undefined8 *param_1,uint param_2)

{
  *param_1 = std::ios_base::vftable;
  FUN_140188f70();
  if ((param_2 & 1) != 0) {
    thunk_FUN_14018e090(param_1,0x48);
  }
  return param_1;
}

