/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18011b71f */

uint FUN_18011b71f(uint param_1)

{
  if ((param_1 & 3) != 0) {
    return param_1 & 3;
  }
  if ((param_1 & 0xc) != 0) {
    return ((param_1 & 0xc) >> 2) - 1;
  }
  return 1;
}

