/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180139e16 */

byte FUN_180139e16(byte param_1,byte param_2,byte param_3)

{
  if ((param_2 == 0) || ((uint)param_3 + (uint)param_2 <= (uint)param_1)) {
    param_3 = param_1 - param_2;
  }
  return param_3;
}

