/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14000a38e */

undefined8 * FUN_14000a38e(undefined8 *param_1,uint param_2)

{
  *param_1 = std::numpunct<wchar_t>::vftable;
  FUN_14000a366((longlong)param_1);
  if ((param_2 & 1) != 0) {
    FUN_1400863f0();
  }
  return param_1;
}

