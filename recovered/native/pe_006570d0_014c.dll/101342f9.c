/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101342f9 */

byte FUN_101342f9(byte param_1,byte param_2,byte param_3)

{
  if ((param_2 == 0) || ((uint)param_3 + (uint)param_2 <= (uint)param_1)) {
    param_3 = param_1 - param_2;
  }
  return param_3;
}

