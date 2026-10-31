/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801d2ee0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_1801d2ee0(double param_1)

{
  double dVar1;
  
  param_1 = param_1 / DAT_18032a0f8;
  if (param_1 <= DAT_18032a458) {
    param_1 = param_1 * _DAT_18032a460;
  }
  else {
    dVar1 = (double)FUN_180287e70(param_1,DAT_18032a468);
    param_1 = dVar1 * _DAT_18032a470 + _DAT_18032a478;
  }
  return param_1;
}

