/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400b2d46 */

byte FUN_1400b2d46(byte param_1,byte param_2,byte param_3)

{
  if ((param_2 == 0) || ((uint)param_3 + (uint)param_2 <= (uint)param_1)) {
    param_3 = param_1 - param_2;
  }
  return param_3;
}

