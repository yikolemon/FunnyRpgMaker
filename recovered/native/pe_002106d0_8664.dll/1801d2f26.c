/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801d2f26 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_1801d2f26(double param_1)

{
  if (param_1 <= DAT_180328058) {
    param_1 = param_1 / _DAT_18032a460;
  }
  else {
    param_1 = (param_1 + DAT_180328078) / _DAT_18032a470;
    param_1 = param_1 * param_1 * param_1;
  }
  return param_1 * DAT_18032a0f8;
}

