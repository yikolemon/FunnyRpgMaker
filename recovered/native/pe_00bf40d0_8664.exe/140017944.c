/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140017944 */

undefined8 * FUN_140017944(undefined8 *param_1,uint param_2)

{
  *param_1 = std::ctype<char>::vftable;
  FUN_1400179c0((longlong)param_1);
  if ((param_2 & 1) != 0) {
    FUN_1400863f0();
  }
  return param_1;
}

