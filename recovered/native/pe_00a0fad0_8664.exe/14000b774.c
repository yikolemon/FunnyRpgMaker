/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14000b774 */

undefined8 * FUN_14000b774(undefined8 *param_1,uint param_2)

{
  *param_1 = std::ctype<char>::vftable;
  FUN_14000b7f0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400ddcd0(param_1,0x30);
  }
  return param_1;
}

