/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180048ebe */

undefined8 * FUN_180048ebe(undefined8 *param_1,uint param_2)

{
  *param_1 = std::numpunct<wchar_t>::vftable;
  FUN_18000d46c();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1802464a0(param_1,0x30);
  }
  return param_1;
}

