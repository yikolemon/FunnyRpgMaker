/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101168ce */

uint FUN_101168ce(uint param_1)

{
  if ((param_1 & 3) != 0) {
    return param_1 & 3;
  }
  if ((param_1 & 0xc) != 0) {
    return ((param_1 & 0xc) >> 2) - 1;
  }
  return 1;
}

