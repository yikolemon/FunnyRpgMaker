/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801d198a */

undefined8 FUN_1801d198a(undefined8 *param_1,int param_2)

{
  if (param_2 == 2) {
    return param_1[2];
  }
  if (param_2 != 1) {
    if (param_2 == 0) {
      return *param_1;
    }
    return DAT_18032a160;
  }
  return param_1[1];
}

