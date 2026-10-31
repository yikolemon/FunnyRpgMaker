/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400d0a3d */

uint FUN_1400d0a3d(uint param_1,uint param_2,uint param_3)

{
  if (param_1 < param_3) {
    param_3 = param_1;
  }
  if (param_1 < param_2) {
    param_3 = param_2;
  }
  return param_3;
}

