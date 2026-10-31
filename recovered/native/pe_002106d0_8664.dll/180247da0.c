/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180247da0 */

longlong FUN_180247da0(longlong param_1,ulonglong param_2)

{
  *(undefined ***)(param_1 + 0xa8) = std::exception::vftable;
  FUN_18026ea90(param_1 + 0xb0);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1802464a0(param_1,0xc0);
  }
  return param_1;
}

