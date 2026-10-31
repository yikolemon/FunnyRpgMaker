/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401186be */

undefined8 FUN_1401186be(undefined8 *param_1,int param_2)

{
  if (param_2 == 2) {
    return param_1[2];
  }
  if (param_2 != 1) {
    if (param_2 == 0) {
      return *param_1;
    }
    return DAT_140e8e150;
  }
  return param_1[1];
}

