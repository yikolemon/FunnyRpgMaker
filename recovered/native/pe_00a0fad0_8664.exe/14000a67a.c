/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14000a67a */

undefined8 * FUN_14000a67a(undefined8 *param_1,uint param_2)

{
  *param_1 = std::ios_base::vftable;
  FUN_1400d3ba0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400ddcd0(param_1,0x48);
  }
  return param_1;
}

