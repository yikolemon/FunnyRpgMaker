/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401654af */

uint FUN_1401654af(uint param_1)

{
  param_1 = param_1 << 0xd ^ param_1;
  param_1 = param_1 >> 0x11 ^ param_1;
  return param_1 << 5 ^ param_1;
}

