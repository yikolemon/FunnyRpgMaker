/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400949db */

uint FUN_1400949db(uint param_1)

{
  if ((param_1 & 3) != 0) {
    return param_1 & 3;
  }
  if ((param_1 & 0xc) != 0) {
    return ((param_1 & 0xc) >> 2) - 1;
  }
  return 1;
}

