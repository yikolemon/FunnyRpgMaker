/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18002043c */

undefined8 * FUN_18002043c(undefined8 *param_1,uint param_2)

{
  *param_1 = std::_Node_str<char>::vftable;
  thunk_FUN_180290e40(param_1[5]);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1802464a0(param_1,0x30);
  }
  return param_1;
}

