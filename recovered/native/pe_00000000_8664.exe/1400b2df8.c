/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400b2df8 */

uint FUN_1400b2df8(uint param_1,uint param_2,uint param_3)

{
  if (((short)param_2 == 0) || ((param_3 & 0xffff) + (param_2 & 0xffff) <= (param_1 & 0xffff))) {
    param_3 = param_1 - param_2;
  }
  return param_3;
}

