/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140023b1e */

undefined8 FUN_140023b1e(undefined8 *param_1,int param_2)

{
  if (param_2 == 2) {
    return param_1[2];
  }
  if (param_2 != 1) {
    if (param_2 == 0) {
      return *param_1;
    }
    return DAT_1400e72b0;
  }
  return param_1[1];
}

